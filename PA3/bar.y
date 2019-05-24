%{
#include "util.h"
#include "stdio.h"
#include "stdlib.h"

int yylex(void);
int yyerror(char*);
%}

%union{
	int iVal;
	float rVal;
	char cVal;
	char *sVal;
}
%token <iVal> INTEGER
%token <rVal> REAL
%token <sVal> ID
%token <sVal> STRING
%token NOTSEMI SEMI LB RB LM RM LS RS PUN COMMA
%token INS PLUS MINUS MUL DIV MOD
%token OR AND BIG BIGEQ SMALL SMALLEQ EQUAL NOT
%token INC DEC PLUS2 MINUS2 MUL2 DIV2 MOD2
%token STRUCT
%token INT VOID CHAR FLOAT IF ELSE SWITCH CASE DEFAULT RETURN BREAK WHILE FOR

%start Program
%%

Assign: INS {NODE *a = nodeS("=", terminal, _OPER); push(a);}
      | PLUS2 {NODE *a = nodeS("+=", terminal, _OPER); push(a);}
      | MINUS2 {NODE *a = nodeS("-=", terminal, _OPER); push(a);}
      | MUL2 {NODE *a = nodeS("*=", terminal, _OPER); push(a);}
      | DIV2 {NODE *a = nodeS("/=", terminal, _OPER); push(a);}
      | MOD2 {NODE *a = nodeS("%=", terminal, _OPER); push(a);}
      ;

IncDec: INC {NODE *a = nodeS("++", terminal, _OPER); push(a);}
      | DEC {NODE *a = nodeS("--", terminal, _OPER); push(a);}
      ;

Oper1: PLUS {NODE *a = nodeS("+", terminal, _OPER); push(a);}
     | MINUS {NODE *a = nodeS("-", terminal, _OPER); push(a);}
     ;

Oper2: MUL {NODE *a = nodeS("*", terminal, _OPER); push(a);}
     | DIV {NODE *a = nodeS("/", terminal, _OPER); push(a);}
     | MOD {NODE *a = nodeS("%", terminal, _OPER); push(a);}
     ;

RelOperator: BIG {NODE *a = nodeS("<", terminal, _OPER); push(a);}
	   | BIGEQ {NODE *a = nodeS("<=", terminal, _OPER); push(a);}
	   | SMALL {NODE *a = nodeS(">", terminal, _OPER); push(a);}
	   | SMALLEQ {NODE *a = nodeS(">=", terminal, _OPER); push(a);}
	   | EQUAL {NODE *a = nodeS("==", terminal, _OPER); push(a);}
	   | NOT {NODE *a = nodeS("!=", terminal, _OPER); push(a);}
	   ;

NumberLiteral: INTEGER {NODE *a = nodeI($1, terminal); push(a);}
	     | REAL {NODE *a = nodeR($1, terminal); push(a);}
	     ;

ArgumentList: ArgumentList COMMA Expression 
		{NODE *a = pop(); NODE *b = pop(); NODE *temp = b;
		while(1) {
			if(temp->sibling == NULL) break;
			temp = temp->sibling;
			}
		mkSibling(temp, a);
		push(b);
		}
	    | ArgumentList COMMA STRING 
		{NODE *a = pop(); NODE *b = pop(); NODE *temp = b;
		while(1) {
			if(temp->sibling == NULL) break;
			temp = temp->sibling;
			}
		mkSibling(temp, a);
		push(b);
		}
	    | Expression {}
	    | STRING {NODE *a = nodeS($1, terminal, _STRING); push(a);}
	    ;

Arguments: ArgumentList 
	 {NODE *a = nodeS("ARGS", nonterminal, _ARGS);
	NODE *b = pop(); 
	mkSubtree(a, b);
	push(a);}
	 |  {NODE *a = nodeS("ARGS", nonterminal, _ARGS); push(a);}
	 ;

FunctionCall: ID LS Arguments RS
	    {NODE *a = nodeS("FunCall", nonterminal, _FUNCALL);
	   	NODE *b = pop();
	   	NODE *c = nodeS($1, terminal, _ID);
		mkSubtree(a, c);
		mkSibling(c, b);
		push(a);}
	    ;

ForStatement: FOR LS Expression SEMI Expression SEMI Expression RS SEMI
	    {NODE *a = nodeS("ForStatement", nonterminal, _FORSTMT);
	NODE *b = pop(); NODE *c = pop(); NODE *d = pop();
	mkSubtree(a, d);
	mkSibling(d, c); mkSibling(c, b);
	push(a);}
	    | FOR LS Expression SEMI Expression SEMI Expression RS CompoundStatement
	    {NODE *a = nodeS("ForStatement", nonterminal, _FORSTMT);
	NODE *b = pop(); NODE *c = pop(); NODE *d = pop(); NODE *e = pop();
	mkSubtree(a, e);
	mkSibling(e, d); mkSibling(d, c); mkSibling(c, b);
	push(a);}
	    ;

WhileStatement: WHILE LS Expression RS CompoundStatement
	     	{NODE *a = nodeS("WhileStatement", nonterminal, _WHLSTMT);
		NODE *b = pop(); NODE *c = pop();
		mkSubtree(a, c); mkSibling(c, b);
		push(a);}
	      | WHILE LS Expression RS SEMI
	 	{NODE *a = nodeS("WhileStatement", nonterminal, _WHLSTMT);
		NODE *b = pop();
		mkSubtree(a, b); push(a);}
	      ;

Factor: LS Expression RS {}
      | FunctionCall {}
      | MINUS Factor {NODE *a = pop(); NODE *b = pop(); mkSubtree(b, a); push(b);}
      | Variable {}
      | Variable IncDec {NODE *a = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP);
			NODE *b = pop(); NODE *c = pop();
			mkSubtree(a, c); mkSibling(c, b);
			push(a);}
      | IncDec Variable {NODE *a = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP);
			NODE *b = pop(); NODE *c = pop();
			mkSubtree(a, c); mkSibling(c, b);
			push(a);}
      | NumberLiteral {}
      ;

Term: Term Oper2 Factor {NODE *a = pop(); NODE *b = pop(); NODE *c = pop();
    			mkSubtree(b, c); mkSibling(c, a); 
			push(b);}
    | Factor {}
    ;

AddExpression: AddExpression Oper1 Term 
	     {NODE *a = pop(); NODE *b = pop(); NODE *c = pop();
		mkSubtree(b, c); mkSibling(c, a);
		push(b);}
	     | Term {}
	     ;

RelExpression: RelExpression RelOperator AddExpression 
	     {NODE *a = pop(); NODE *b = pop(); NODE *c = pop();
		mkSubtree(b, c); mkSibling(c, a);
		push(b);}
	     | AddExpression {}
	     ;

AndExpression: AndExpression AND RelExpression 
	     {NODE *a = nodeS("&&", terminal, _OPER);
		NODE *b = pop(); NODE *c = pop();
		mkSubtree(a, c); mkSibling(c, b);
		push(a);}
	     | RelExpression {}
	     ;

SimpleExpression: SimpleExpression OR AndExpression 
		{NODE *a = nodeS("||", terminal, _OPER);
		NODE *b = pop(); NODE *c = pop();
		mkSubtree(a, c); mkSibling(c, b);
		push(a);}
		| AndExpression {}
		;

Selector: PUN ID 
	{NODE *a = nodeS($2, terminal, _ID); 
	NODE *b = nodeS("StructMember", nonterminal, _STRMBR);
	mkSubtree(b, a); push(b);}
	| LB Expression RB 
	{NODE *a = nodeS("ArrayIndex", nonterminal, _ARRINDEX);
	NODE *b = pop();
	mkSubtree(a, b); push(a);}
	;

SelectorList: SelectorList Selector 
	{NODE *a = pop(); NODE *b = pop();
	NODE *temp = b->child;
	while(1) {
		if(temp->sibling == NULL) break;
		
		temp = temp->sibling;
	}
	mkSibling(temp, a);
	push(b);}
	    | Selector {NODE *a = nodeS("SelectorList", nonterminal, _SLTLIST);
			NODE *b = pop();
			mkSubtree(a, b); push(a);}
	    ;

Variable: ID {NODE *a = nodeS($1, terminal, _ID); push(a);}
	| ID SelectorList {NODE *a = nodeS($1, terminal, _ID);
			NODE *b = nodeS("IDselectors", nonterminal, _ID_SLTS);
			NODE *c = pop();
			mkSubtree(b, a); mkSibling(a, c);
			push(b); }
	;

AssignExpression: Variable Assign Expression 
		{NODE *a = pop(); NODE *b = pop(); NODE *c = pop();
		mkSubtree(b, c); mkSibling(c, a);
		push(b);}
		;

Expression: AssignExpression {}
	  | SimpleExpression {}
	  ;

ExpressionStatement: Expression SEMI {}
		   | SEMI {}
		   ;

BreakStatement: BREAK SEMI {NODE *a = nodeS("BreakStatement", nonterminal, _BRKSTMT); push(a);}
	      ;

ReturnStatement: RETURN Expression SEMI
	       {NODE *a = nodeS("ReturnStatement", nonterminal, _RTSTMT);
		mkSubtree(a, pop()); push(a);}
	       | RETURN SEMI {NODE *a = nodeS("ReturnStatement", nonterminal, _RTSTMT); push(a);}
	       ;

DefaultCase: DEFAULT NOTSEMI StatementList 
	   {NODE *a = nodeS("DefaultCase", nonterminal, _DEFAULT); NODE *b = pop(); 
	mkSubtree(a, b); push(a);}
	   |  {NODE *a = nodeS("DefaultCase", nonterminal, _DEFAULT); push(a);}
	   ;

CaseList: CaseList CASE INTEGER NOTSEMI StatementList 
	{NODE *a = nodeI($3, terminal);
	NODE *b = nodeS("CaseList", nonterminal, _CASE);
	NODE *c = pop(); NODE *d = pop();
	NODE *temp = d;
	
	while(1) {
		if(temp->sibling == NULL) break;
		temp = temp->sibling;
		}

	mkSibling(temp, b);
	mkSubtree(b, a);
	mkSibling(a, c);
	push(d);}
	| CASE INTEGER NOTSEMI StatementList 
	{NODE *a = nodeI($2, terminal); NODE *b = pop(); 
	NODE *c = nodeS("CaseList", nonterminal, _CASE);
	mkSubtree(c, a); mkSibling(a, b); push(c);}
	;

SwitchStatement: SWITCH LS Expression RS LM CaseList DefaultCase RM
	       {NODE *a = nodeS("SwitchStatement", nonterminal, _SWSTMT);
		NODE *b = pop(); NODE *c = pop(); NODE *d = pop();
		NODE *temp = c; 
		while(1) {
			if(temp->sibling == NULL) break;
			temp = temp->sibling;
		}
		mkSibling(temp, b);
		mkSubtree(a, d); mkSibling(d, c);
		push(a);}
	       ;

OpenStatement: IF LS Expression RS Statement 
	     	{NODE *a = nodeS("OpenStatement", nonterminal, _IFSTMT);
		NODE *b = pop(); NODE *c = pop();
		mkSubtree(a, c); mkSibling(c, b); push(a);}
	     | IF LS Expression RS MatchedStatement ELSE OpenStatement 
		{NODE *a = nodeS("OpenStatement", nonterminal, _IFSTMT);
		NODE *b = pop(); NODE *c = pop(); NODE *d = pop(); 
		mkSubtree(a, d); mkSibling(d, c); mkSibling(c, b); push(a);}
	     ;

MatchedStatement: ExpressionStatement {}
		| ForStatement {}
		| WhileStatement {}
		| ReturnStatement {}
		| CompoundStatement {}
		| BreakStatement {}
		| SwitchStatement {}
		| IF LS Expression RS MatchedStatement ELSE MatchedStatement
		{NODE *a = nodeS("MatchedStatement", nonterminal, _IFSTMT);
		NODE *b = pop(); NODE *c = pop(); NODE *d = pop(); 
		mkSubtree(a, d); mkSibling(d, c); mkSibling(c, b); 
		push(a);}
		;

Statement: MatchedStatement {}
	 | OpenStatement {}
	 ;

StatementList: StatementList Statement {NODE *b = pop();
	     				NODE *a = pop();
					if(a->child==NULL) mkSubtree(a, b);
					else { 
						NODE *temp = a->child;
						while(1) {
							if(temp->sibling == NULL) break;
							temp = temp->sibling;
						}
						mkSibling(temp, b);
					}
					push(a);
					}
	     |  {NODE *a = nodeS("StatementList", nonterminal, _STMTLIST); 
		push(a);}
	     ;

LocalDeclarationList: LocalDeclarationList VarDeclaration 
		    	{NODE *b = pop(); NODE *a = pop();
			if(a->child==NULL) mkSubtree(a, b);
			else { 
				NODE *temp = a->child;
				while(1) {
					if(temp->sibling == NULL) break;
					temp = temp->sibling;
				}
				mkSibling(temp, b);
			}
			push(a);
			}
		    |  {NODE *a = nodeS("LocalDeclarationList", nonterminal, _LDECLIST);
			push(a);}
		    ;

CompoundStatement: LM LocalDeclarationList StatementList RM {
		 NODE *a = nodeS("CompoundStatement", nonterminal, _CPDSTMT);
		NODE *b = pop(); NODE *c = pop();
		mkSubtree(a, c); mkSibling(c, b); push(a); }
		 ;

StructTypeReference: STRUCT ID 
		   {NODE *a = nodeS($2, terminal, _ID);
		NODE *b = nodeS("StructTypeReference", nonterminal, _STRTYPE);
		mkSubtree(b, a); push(b);}
		   ;

StructType: StructTypeDeclaration {}
	  | StructTypeReference {}
	  ;

TypeSpecifier : INT {NODE *a = nodeS("int", terminal, _TYPE); push(a);}
	      | VOID {NODE *a = nodeS("void", terminal, _TYPE); push(a);}
	      | CHAR {NODE *a = nodeS("char", terminal, _TYPE); push(a);}
	      | FLOAT {NODE *a = nodeS("float", terminal, _TYPE); push(a);}
	      | StructType {}
	      ;

Param: TypeSpecifier Value {NODE *a = nodeS("Param", nonterminal, _PARAM);
     			NODE *b = pop(); NODE *c = pop();
			mkSubtree(a, c); mkSibling(c, b);
			push(a);}
     ;

ParamList: ParamList COMMA Param 
	{NODE *a = pop(); NODE *b = pop(); NODE *temp = b;
	while(1) {
		if(temp->sibling == NULL) break;
		temp = temp->sibling;
		}
	mkSibling(temp, a);
	push(b);
	}
	 | Param {}
	 ;

Params: ParamList {NODE *a = nodeS("Params", nonterminal, _PARAMS);
      		mkSubtree(a, pop()); push(a);}
      | VOID {NODE *a = nodeS("void", terminal, _TYPE);
		NODE *b = nodeS("Params", nonterminal, _PARAMS);
		mkSubtree(b, a); push(b);}
      |  {NODE *a = nodeS("Params", nonterminal, _PARAMS); push(a);}
      ;

StructTypeDeclaration: STRUCT ID LM LocalDeclarationList RM 
		{NODE *a = nodeS($2, terminal, _ID); NODE *b = pop();
		NODE *c = nodeS("StructTypeDeclaration", nonterminal, _STRTYPE);
		mkSubtree(c, a); mkSibling(a, b); push(c);}
		     ;

StructDeclaration: StructTypeDeclaration SEMI 
		 {NODE *a = nodeS("StructDeclaration", nonterminal, _STRDEC);
		mkSubtree(a, pop()); push(a);}
		 ;

FuncDeclaration: TypeSpecifier ID LS Params RS CompoundStatement
	       {NODE *a = nodeS("FuncDeclaration", nonterminal, _FUNDEC);
		NODE *b = pop(); NODE *c = pop(); NODE *d = pop();
		NODE *e = nodeS($2, terminal, _ID);
		mkSubtree(a, d); mkSibling(d, e);
		mkSibling(e, c); mkSibling(c, b);
		push(a); }
	       | TypeSpecifier ID LS Params RS SEMI
	       {NODE *a = nodeS("FuncDeclaration", nonterminal, _FUNDEC);
		NODE *b = pop(); NODE *c = nodeS($2, terminal, _ID);
		NODE *d = pop();
		mkSubtree(a, d); mkSibling(d, c); mkSibling(c, b);
		push(a);}
	       ;

Value: Value LB INTEGER RB 
     {
     	NODE *a = nodeI($3, terminal);
	NODE *b = pop();
	if(b->child == NULL){
		NODE *c = nodeS("ID_Arr", nonterminal, _ID_ARR);		
		mkSubtree(c, b); mkSibling(b, a); 
		push(c);	
		}
	else {
		NODE *temp = b->child;
		while(1) {
			if(temp->sibling == NULL) break;
			temp = temp->sibling;
		}
		mkSibling(temp, a);
		push(b);
		}
	}
     | ID {NODE *a = nodeS($1, terminal, _ID); push(a);}
     ;

IDs: IDs COMMA Value 
   	{NODE *a = pop(); NODE *b = pop(); NODE *temp = b;
	 while(1) {
		if(temp->sibling == NULL) break;
		temp = temp->sibling;
		}
	mkSibling(temp, a);
	push(b);
	}
   | Value {}
   ;

VarDeclaration: TypeSpecifier IDs SEMI 
	      { NODE *a = nodeS("VarDeclaration", nonterminal, _VARDEC);
		NODE *b = pop(); NODE *c = pop(); 
		mkSubtree(a, c); mkSibling(c, b); push(a);}
	      ;

Declaration: VarDeclaration {}
	   | FuncDeclaration {}
	   | StructDeclaration {}
	   ;
 
DeclarationList: DeclarationList Declaration 
	        {NODE *a = pop(); NODE *b = pop(); NODE *temp = b;
		while(1) {
			if(temp->sibling == NULL) break;
			temp = temp->sibling;
			}
		mkSibling(temp, a);
		push(b);
		}
	       | Declaration {}
	       ;

Program: DeclarationList {NODE *a = nodeS("Program", nonterminal, _PROG); 
       			mkSubtree(a, pop());
			push(a);}
       ;

%%
int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	initStack();
	yyin = fopen(argv[1], "r");
	yyparse();
	printTree(pop());
	fclose(yyin);
	return 0;
}

