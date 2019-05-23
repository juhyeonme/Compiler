/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    REAL = 259,
    NOTSEMI = 260,
    SEMI = 261,
    LB = 262,
    RB = 263,
    LM = 264,
    RM = 265,
    LS = 266,
    RS = 267,
    PUN = 268,
    COMMA = 269,
    INS = 270,
    PLUS = 271,
    MINUS = 272,
    MUL = 273,
    DIV = 274,
    MOD = 275,
    OR = 276,
    AND = 277,
    BIG = 278,
    BIGEQ = 279,
    SMALL = 280,
    SMALLEQ = 281,
    EQUAL = 282,
    NOT = 283,
    INC = 284,
    DEC = 285,
    PLUS2 = 286,
    MINUS2 = 287,
    MUL2 = 288,
    DIV2 = 289,
    MOD2 = 290,
    STRING = 291,
    ID = 292,
    STRUCT = 293,
    INT = 294,
    VOID = 295,
    CHAR = 296,
    FLOAT = 297,
    IF = 298,
    ELSE = 299,
    SWITCH = 300,
    CASE = 301,
    DEFAULT = 302,
    RETURN = 303,
    BREAK = 304,
    WHILE = 305,
    FOR = 306
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define NOTSEMI 260
#define SEMI 261
#define LB 262
#define RB 263
#define LM 264
#define RM 265
#define LS 266
#define RS 267
#define PUN 268
#define COMMA 269
#define INS 270
#define PLUS 271
#define MINUS 272
#define MUL 273
#define DIV 274
#define MOD 275
#define OR 276
#define AND 277
#define BIG 278
#define BIGEQ 279
#define SMALL 280
#define SMALLEQ 281
#define EQUAL 282
#define NOT 283
#define INC 284
#define DEC 285
#define PLUS2 286
#define MINUS2 287
#define MUL2 288
#define DIV2 289
#define MOD2 290
#define STRING 291
#define ID 292
#define STRUCT 293
#define INT 294
#define VOID 295
#define CHAR 296
#define FLOAT 297
#define IF 298
#define ELSE 299
#define SWITCH 300
#define CASE 301
#define DEFAULT 302
#define RETURN 303
#define BREAK 304
#define WHILE 305
#define FOR 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "bar.y" /* yacc.c:1909  */

	int iVal;
	float rVal;
	char cVal;

#line 162 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
