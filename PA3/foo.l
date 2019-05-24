%{
#include "y.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//enum tnumber {TEOF, TKEYWORD, TIDENTIFIER, TCHARACTER, TSTRING, TINTEGER, TREAL, TCOMMENT, TOPERATOR, TPUNCTUATION};
char *tokenType[] = {"Keyword", "Identifier", "Character constant", "String constant", "Integer constant", "Real constant", "Comment", "Operator", "Punctuation symbol"};

// You can declare additional global variables or functions here if you need.
int ll = 0;
int position = 0;
char temp[30];

%}
LINE		\n
WS		[ \t]+
TEMP		(.)+
KEYWORD		break|case|char|default|else|float|for|if|int|return|struct|switch|void|while
DIGIT		[0-9]
LETTER_		[A-Za-z_]
IDENTIFIER	([A-Z]|[a-z]|_)({LETTER_}|{DIGIT})*
CHARACTER	\'{LETTER_}\'|\'{DIGIT}\'|\'\\\"\'|\'\\\?\'|\'\\\\\'|\'\\a\'|\'\\b\'|\'\\f\'|\'\\n\'|\'\\r\'|\'\\t\'|\'\\v\'|\'\\0\'|\'\!\'|\'\#\'|\'\%\'|\'\^\'|\'\&\'|\'\*\'|\'\_\'|\'\)\'|\'\(\'|\'\-\'|\'\+\'|\'\=\'|\'\~\'|\'\]\'|\'\[\'|\'\|\'|\'\\\'\'|\'\;\'|\'\:\'|\'\}\'|\'\{\'|\'\,\'|\'\.\'|\'\>\'|\'\<\'|\'\/\'
STRING		\"{TEMP}*\"
INTEGER		0|[1-9][0-9]*|0[0-7]+|(0x|0X)({DIGIT}|[A-F]|[a-f])*
REALCONSTANT	{DIGIT}+\.{DIGIT}+|{DIGIT}+\.{DIGIT}+[eE][+-]{DIGIT}+|{DIGIT}+\.[eE]{DIGIT}+
COMMENT		\/\*([^\*]|\*+[^\*\/])*\*+\/|\/\/[^\n]*
OPERATOR	\+|\-|\*|\/|\%|\!|\=|\<|\>|\+\=|\-\=|\*\=|\/\=|\%\=|\=\=|\!\=|\<\=|\>\=|\<\<|\>\>|\&\&|\|\||\+\+|\-\-|\,
PUNCTUATION	\(|\)|\{|\}|\[|\]|\;|\:|\.

%%

{LINE}		{ll++; position=0;}
{WS}		{position+=yyleng;}
":"		{return NOTSEMI;}
";"		{return SEMI;}
"["		{return LB;}
"]"		{return RB;}
"{"		{return LM;}
"}"		{return RM;}
"("		{return LS;}
")"		{return RS;}
"."		{return PUN;}
","		{return COMMA;}
"="		{return INS;}
"+"		{return PLUS;}
"-"		{return MINUS;}
"*"		{return MUL;}
"/"		{return DIV;}
"%"		{return MOD;}
"||"		{return OR;}
"&&"		{return AND;}
"<"		{return BIG;}
"<="		{return BIGEQ;}
">"		{return SMALL;}
">="		{return SMALLEQ;}
"=="		{return EQUAL;}
"!="		{return NOT;}
"++"		{return INC;}
"--"		{return DEC;}
"+="		{return PLUS2;}
"-="		{return MINUS2;}
"*="		{return MUL2;}
"/="		{return DIV2;}
"%="		{return MOD2;}
"struct"	{return STRUCT;}
"int"		{return INT;}
"void"		{return VOID;}
"char"		{return CHAR;}
"float"		{return FLOAT;}
"if"		{return IF;}
"else"		{return ELSE;}
"switch"	{return SWITCH;}
"case"		{return CASE;}
"default"	{return DEFAULT;}
"return"	{return RETURN;}
"break"		{return BREAK;}
"while"		{return WHILE;}
"for"		{return FOR;}

{IDENTIFIER}	{int i=0;
		yylval.sVal = (char*)malloc(yyleng+1);
		for(i=0; i<yyleng; i++) yylval.sVal[i] = yytext[i];
		yylval.sVal[yyleng] = '\0';
		return ID;}
{CHARACTER}	{if(yyleng>3) {
			if(*(yytext+2) == '\'') yylval.cVal = '\'';
			else if(*(yytext+2) == '\"') yylval.cVal = '\"';
			else if(*(yytext+2) == '\?') yylval.cVal = '\?';
			else if(*(yytext+2) == '\\') yylval.cVal = '\\';
			else if(*(yytext+2) == 'a') yylval.cVal = '\a';
			else if(*(yytext+2) == 'b') yylval.cVal = '\b';
			else if(*(yytext+2) == 'f') yylval.cVal = '\f';
			else if(*(yytext+2) == 'n') yylval.cVal = '\n';
			else if(*(yytext+2) == 'r') yylval.cVal = '\r';
			else if(*(yytext+2) == 't') yylval.cVal = '\t';
			else if(*(yytext+2) == 'v') yylval.cVal = '\v';
			else if(*(yytext+2) == '0') yylval.cVal = '\0';
		}
		else {yylval.cVal = *(yytext+1);} 
		return INTEGER;}
{STRING}	{int i=0;
		yylval.sVal = (char*)malloc(yyleng+1);
		for(i=0; i<yyleng; i++) yylval.sVal[i] = yytext[i];
		yylval.sVal[yyleng] = '\0';
		return STRING;}
{INTEGER}	{
		strcpy(temp, yytext);
		if(temp[0] == '0') {
			if(temp[1] == 'X' || temp[1] == 'x') {
				yylval.iVal = (int)strtol(yytext, NULL, 16);
			}
			else{
				yylval.iVal = (int)strtol(yytext, NULL, 8);
			}
		}
		else yylval.iVal = atoi(yytext);
		return INTEGER;
		}
{REALCONSTANT}	{
		yylval.rVal = atof(yytext);
		return REAL;
		}

%%
/*
int main(void){
	enum tnumber tn;
	int i;
	while((tn = yylex()) != TEOF){
		switch(tn) {
		case TKEYWORD:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[0], 0,  ll, position);
			position+=yyleng;
			break;
		case TIDENTIFIER:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[1], 0, ll, position);
			position+=yyleng;
			break;
		case TCHARACTER:
			if(yyleng > 3) {
				switch(*(yytext+2)){
				case '\'' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\'', ll, position);
					break;
				case '\"' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\"', ll, position);
					break;
				case '\?' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\?', ll, position);
					break;
				case '\\' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\\', ll, position);
					break;
				case 'a' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\a', ll, position);
					break;
				case 'b' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\b', ll, position);
					break;
				case 'f' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\f', ll, position);
					break;
				case 'n' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\n', ll, position);
					break;
				case 'r' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\r', ll, position);
					break;
				case 't' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\t', ll, position);
					break;
				case 'v' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\v', ll, position);
					break;
				case '0' :
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], '\0', ll, position);
					break;
				}
				
			}
			else {
				printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[2], *(yytext+1), ll, position);
			}
			position+=yyleng;
			break;
		case TSTRING:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[3], 0, ll, position);
			position+=yyleng;
			break;
		case TINTEGER:
			strcpy(temp, yytext);
			if(temp[0] == '0') {
				if(temp[1] == 'X' || temp[1] =='x') {
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[4], (int)strtol(yytext, NULL, 16), ll, position);
					position+=yyleng;
					break;
				}
				else {
					printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[4], (int)strtol(yytext, NULL, 8), ll, position);
					position+=yyleng;
					break;
				}
			}
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[4], atoi(yytext), ll, position);
			position+=yyleng;
			break;
		case TREAL:
			printf("%-15s	->	%18s,	%10.2f,	%5d,	%5d\n", yytext, tokenType[5], atof(yytext), ll, position);
			position+=yyleng;
			break;
		case TCOMMENT:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[6], 0, ll, position);
			position+=yyleng;
			for(i=0;i<yyleng;i++){
				if(yytext[i] == '\n') ll++;
			}
			break;
		case TOPERATOR:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[7], 0, ll, position);
			position+=yyleng;
			break;
		case TPUNCTUATION:
			printf("%-15s	->	%18s,	%10d,	%5d,	%5d\n", yytext, tokenType[8], 0, ll, position);
			position+=yyleng;
			break;
		//default:
			//printf("%-15s	->	UNKNOWN,	0,	%5d,	%5d\n", yytext, ll, position);
			//break;
		}
	}	
	return 0;
}
*/

// Define functions here if you declare the additional functions at the top.
