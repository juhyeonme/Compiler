%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
enum tnumber {TEOF, TKEYWORD, TIDENTIFIER, TCHARACTER, TSTRING, TINTEGER, TREAL, TCOMMENT, TOPERATOR, TPUNCTUATION};
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
CHARACTER	 \'{LETTER_}\'|\'{DIGIT}\'|\'\\\"\'|\'\\\?\'|\'\\\\\'|\'\\a\'|\'\\b\'|\'\\f\'|\'\\n\'|\'\\r\'|\'\\t\'|\'\\v\'|\'\\0\'|\'\!\'|\'\#\'|\'\%\'|\'\^\' |\'\&\'|\'\*\'|\'\_\'|\'\)\'|\'\(\'|\'\-\'|\'\+\'|\'\=\'|\'\~\'|\'\]\'|\'\[\'|\'\|\'|\'\\\'\'|\'\;\'|\'\:\'|\'\}\'|\'\{\'|\'\,\'|\'\.\'|\'\>\'|\'\<\'|\'\/\'
STRING		\"{TEMP}*\"
INTEGER		0|[1-9][0-9]*|0[0-7]+|(0x|0X)({DIGIT}|[A-F]|[a-f])*
REALCONSTANT	{DIGIT}+\.{DIGIT}+|{DIGIT}+\.{DIGIT}+[eE][+-]{DIGIT}+|{DIGIT}+\.[eE]{DIGIT}+
COMMENT		\/\*([^\*]|\*+[^\*\/])*\*+\/|\/\/[^\n]*
OPERATOR	\+|\-|\*|\/|\%|\!|\=|\<|\>|\+\=|\-\=|\*\=|\/\=|\%\=|\=\=|\!\=|\<\=|\>\=|\<\<|\>\>|\&\&|\|\||\+\+|\-\-|\,
PUNCTUATION	\(|\)|\{|\}|\[|\]|\;|\:|\.
%%
{LINE}		{ll++; position=0;}
{WS}		{position+=yyleng;}
{KEYWORD}	{return (TKEYWORD);}
{IDENTIFIER}	{return (TIDENTIFIER);}
{CHARACTER}	{return (TCHARACTER);}
{STRING}	{return (TSTRING);}
{INTEGER}	{return (TINTEGER);}
{REALCONSTANT}	{return (TREAL);}
{COMMENT}	{return (TCOMMENT);}
{OPERATOR}	{return (TOPERATOR);}
{PUNCTUATION}	{return (TPUNCTUATION);}
%%

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
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\'', ll, position);
                        		break;
                        
                    		case '\"' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\"', ll, position);
                        		break;
                        
                    		case '\?' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\?', ll, position);
                        		break;
                        
                    		case '\\' :
                       			printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\\', ll, position);
                        		break;
                        
                    		case 'a' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\a', ll, position);
                        		break;
                        
                    		case 'b' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\b', ll, position);
                        		break;
                        
                    		case 'f' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\f', ll, position);
                        		break;
                        
                    		case 'n' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\n', ll, position);
                        		break;
                        
                    		case 'r' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\r', ll, position);
                        		break;
                        
                    		case 't' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\t', ll, position);
                        		break;
                        
                    		case 'v' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\v', ll, position);
                        		break;
                        
                    		case '0' :
                        		printf("%-15s   ->      %18s,   %10d,   %5d,    %5d\n", yytext, tokenType[2], '\0', ll, position);
                        		break;
                    		}

                	}
	
                	else {
                    		printf("%-15s   ->      %18s,   %10d,   %5d,   %5d\n", yytext, tokenType[2], *(yytext+1), ll, position);
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
			for(i=0; i<yyleng; i++){
                    		if(yytext[i] == '\n') 
                        	ll++;
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

// Define functions here if you declare the additional functions at the top.
