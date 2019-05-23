%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);
%}

%union{
	int iVal;
	float rVal;
	char cVal;
}
%token <iVal> INTEGER
%token <rVal> REAL
%token NOTSEMI SEMI LB RB LM RM LS RS PUN COMMA
%token INS PLUS MINUS MUL DIV MOD
%token OR AND BIG BIGEQ SMALL SMALLEQ EQUAL NOT
%token INC DEC PLUS2 MINUS2 MUL2 DIV2 MOD2
%token STRING ID STRUCT
%token INT VOID CHAR FLOAT IF ELSE SWITCH CASE DEFAULT RETURN BREAK WHILE FOR

%start Program
%%

Assign: INS {printf("Assign -> =\n");}
      | PLUS2 {printf("Assign -> +=\n");}
      | MINUS2 {printf("Assign -> -=\n");}
      | MUL2 {printf("Assign -> *=\n");}
      | DIV2 {printf("Assign -> /=\n");}
      | MOD2 {printf("Assign -> %%=\n");}
      ;

IncDec: INC {printf("IncDec -> ++\n");}
      | DEC {printf("IncDec -> --\n");}
      ;

Oper1: PLUS {printf("Oper1 -> +\n");}
     | MINUS {printf("Oper1 -> -\n");}
     ;

Oper2: MUL {printf("Oper2 -> *\n");}
     | DIV {printf("Oper2 -> /\n");}
     | MOD {printf("Oper2 -> %%\n");}
     ;

RelOperator: BIG {printf("RelOperator -> <\n");}
	   | BIGEQ {printf("RelOperator -> <=\n");}
	   | SMALL {printf("RelOperator -> >\n");}
	   | SMALLEQ {printf("RelOperator -> >=\n");}
	   | EQUAL {printf("RelOperator -> ==\n");}
	   | NOT {printf("RelOperator -> !=\n");}
	   ;

NumberLiteral: INTEGER {printf("NumberLiteral -> %d\n", $1);}
	     | REAL {printf("NumberLiteral -> %f\n", $1);}
	     ;

ArgumentList: ArgumentList COMMA Expression {printf("ArgumentList -> ArgumentList , Expression\n");}
	    | ArgumentList COMMA STRING {printf("ArgumentList -> ArgumentList , STRING\n");}
	    | Expression {printf("ArgumentList -> Expression\n");}
	    | STRING {printf("ArgumentList -> STRING\n");}
	    ;

Arguments: ArgumentList {printf("Arguments -> ArgumentList\n");}
	 |  {printf("Arguments -> Empty\n");}
	 ;

FunctionCall: ID LS Arguments RS {printf("FunctionCall -> ID ( Arguments )\n");}
	    ;

ForStatement: FOR LS Expression SEMI Expression SEMI Expression RS SEMI
	    {printf("ForStatement -> for ( Expression ; Expression ; Expression ) ;\n");}
	    | FOR LS Expression SEMI Expression SEMI Expression RS CompoundStatement
	    {printf("ForStatement -> for ( Expression ; Expression ; Expression ) CompoundStatement\n");}
	    ;

WhileStatement: WHILE LS Expression RS CompoundStatement
	      {printf("WhileStatement -> while ( Expression ) CompoundStatement\n");}
	      | WHILE LS Expression RS SEMI {printf("WhileStatement -> while ( Expression ) ;\n");}
	      ;

Factor: LS Expression RS {printf("Factor -> ( Expression )\n");}
      | FunctionCall {printf("Factor -> FunctionCall\n");}
      | MINUS Factor {printf("Factor -> - Factor\n");}
      | Variable {printf("Factor -> Variable\n");}
      | Variable IncDec {printf("Factor -> Variable IncDec\n");}
      | IncDec Variable {printf("Factor -> IncDec Variable\n");}
      | NumberLiteral {printf("Factor -> NumberLiteral\n");}
      ;

Term: Term Oper2 Factor {printf("Term -> Term Oper2 Factor\n");}
    | Factor {printf("Term -> Factor\n");}
    ;

AddExpression: AddExpression Oper1 Term {printf("AddExpression -> AddExpression Oper1 Term\n");}
	     | Term {printf("AddExpression -> Term\n");}
	     ;

RelExpression: RelExpression RelOperator AddExpression {printf("RelExpression -> RelExpression RelOperator AddExpression\n");}
	     | AddExpression {printf("RelExpression -> AddExpression\n");}
	     ;

AndExpression: AndExpression AND RelExpression {printf("AndExpression -> AndExpression && RelExpression\n");}
	     | RelExpression {printf("AndExpression -> RelExpression\n");}
	     ;

SimpleExpression: SimpleExpression OR AndExpression {printf("SimpleExpression || AndExpression\n");}
		| AndExpression {printf("SimpleExpression -> AndExpression\n");}
		;

Selector: PUN ID {printf("Selector -> . ID\n");}
	| LB Expression RB {printf("Selector -> [ Expression ]\n");}
	;

SelectorList: SelectorList Selector {printf("SelectorList -> SelectorList Selector\n");}
	    | Selector {printf("SelectorList -> Selector\n");}
	    ;

Variable: ID {printf("Variable -> ID\n");}
	| ID SelectorList {printf("Variable -> ID SelectorList\n");}
	;

AssignExpression: Variable Assign Expression {printf("AssignExpression -> Variable Assign Expression\n");}
		;

Expression: AssignExpression {printf("Expression -> AssignExpression\n");}
	  | SimpleExpression {printf("Expression -> SimpleExpression\n");}
	  ;

ExpressionStatement: Expression SEMI {printf("ExpressionStatement -> Expression ;\n");}
		   | SEMI {printf("ExpressionStatement -> ;\n");}
		   ;

BreakStatement: BREAK SEMI {printf("BreakStatement -> break ;\n");}
	      ;

ReturnStatement: RETURN Expression SEMI {printf("ReturnStatement -> return Expression ;\n");}
	       | RETURN SEMI {printf("ReturnStatement -> return ;\n");}
	       ;

DefaultCase: DEFAULT NOTSEMI StatementList {printf("DefaultCase -> default : StatementList\n");}
	   |  {printf("DefaultCase -> Empty\n");}
	   ;

CaseList: CaseList CASE INTEGER NOTSEMI StatementList {printf("CaseList -> CaseList case %d : StatementList\n", $3);}
	| CASE INTEGER NOTSEMI StatementList {printf("CaseList -> case %d : StatementList\n", $2);}
	;

SwitchStatement: SWITCH LS Expression RS LM CaseList DefaultCase RM
	       {printf("SwitchStatement -> switch ( Expression ) { CaseList DefaultCase }\n");}
	       ;

OpenStatement: IF LS Expression RS Statement {printf("OpenStatement -> if ( Expression ) Statement\n");}
	     | IF LS Expression RS MatchedStatement ELSE OpenStatement 
		{printf("OpenStatement -> if ( Expression ) MatchedStatement else OpenStatement\n");}
	     ;

MatchedStatement: ExpressionStatement {printf("MatchedStatement -> ExpressionStatement\n");}
		| ForStatement {printf("MatchedStatement -> ForStatement\n");}
		| WhileStatement {printf("MatchedStatement -> WhileStatement\n");}
		| ReturnStatement {printf("MatchedStatement -> ReturnStatement\n");}
		| CompoundStatement {printf("MatchedStatement -> CompoundStatement\n");}
		| BreakStatement {printf("MatchedStatement -> BreakStatement\n");}
		| SwitchStatement {printf("MatchedStatement -> SwitchStatement\n");}
		| IF LS Expression RS MatchedStatement ELSE MatchedStatement
		{printf("MatchedStatement -> if ( Expression ) MatchedStatement else MatchedStatement\n");}
		;

Statement: MatchedStatement {printf("Statement -> MatchedStatement\n");}
	 | OpenStatement {printf("Statement -> OpenStatement\n");}
	 ;

StatementList: StatementList Statement {printf("StatementList -> StatementList Statement\n");}
	     |  {printf("StatementList -> Empty\n");}
	     ;

LocalDeclarationList: LocalDeclarationList VarDeclaration {printf("LocalDeclarationList -> LocalDeclarationList VarDeclaration\n");}
		    |  {printf("LocalDeclarationList -> Empty\n");}
		    ;

CompoundStatement: LM LocalDeclarationList StatementList RM {printf("CompoundStatement -> { LocalDeclarationList StatementList }\n");}
		 ;

StructTypeReference: STRUCT ID {printf("StructTypeReference -> struct ID\n");}
		   ;

StructType: StructTypeDeclaration {printf("StructType -> StructTypeDeclaration\n");}
	  | StructTypeReference {printf("StructType -> StructTypeReference\n");}
	  ;

TypeSpecifier : INT {printf("TypeSpecifier -> int\n");}
	      | VOID {printf("TypeSpecifier -> void\n");}
	      | CHAR {printf("TypeSpecifier -> char\n");}
	      | FLOAT {printf("TypeSpecifier -> float\n");}
	      | StructType {printf("TypeSpecifier -> StructType\n");}
	      ;

Param: TypeSpecifier Value {printf("Param -> TypeSpecifier Value\n");}
     ;

ParamList: ParamList COMMA Param {printf("ParamList -> ParamList , Param\n");}
	 | Param {printf("ParamList -> Param\n");}
	 ;

Params: ParamList {printf("Params -> ParamList\n");}
      | VOID {printf("Params -> void\n");}
      |  {printf("Params -> Empty\n");}
      ;

StructTypeDeclaration: STRUCT ID LM LocalDeclarationList RM {printf("StructTypeDeclaration -> struct ID { LocalDeclarationList }\n");}
		     ;

StructDeclaration: StructTypeDeclaration SEMI {printf("StructDeclaration -> StructTypeDeclaration\n");}
		 ;

FuncDeclaration: TypeSpecifier ID LS Params RS CompoundStatement
	       {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) CompoundStatement\n");}
	       | TypeSpecifier ID LS Params RS SEMI
	       {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) ;\n");}
	       ;

Value: Value LB INTEGER RB {printf("Value -> Value [ %d ]\n", $3);}
     | ID {printf("Value -> ID\n");}
     ;

IDs: IDs COMMA Value {printf("IDs -> IDs , Value\n");}
   | IDs COMMA Value INS Expression {printf("IDs -> IDs , Value = Expression\n");}
   | IDs COMMA Value INS STRING {printf("IDs -> IDs , Value = STRING\n");}
   | Value {printf("IDs -> Value\n");}
   | Value INS Expression {printf("IDs -> Value = Expression\n");}
   | Value INS STRING {printf("IDS -> Value = STRING\n");}
   ;

VarDeclaration: TypeSpecifier IDs SEMI {printf("VarDeclaration -> TypeSpecifier IDs ;\n");}
	      ;

Declaration: VarDeclaration {printf("Declaration -> VarDeclaration\n");}
	   | FuncDeclaration {printf("Declaration -> FuncDeclaration\n");}
	   | StructDeclaration {printf("Declaration -> StructDeclaration\n");}
	   ;

DeclarationList: DeclarationList Declaration {printf("DeclarationList -> DeclarationList Declaration\n");}
	       | Declaration {printf("DeclarationList -> Declaration\n");}
	       ;

Program: DeclarationList {printf("Program -> DeclarationList\n");}
       ;

%%
int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

