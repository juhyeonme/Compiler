/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bar.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 8 "bar.y" /* yacc.c:355  */

	int iVal;
	float rVal;
	char cVal;

#line 221 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 238 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    29,    30,    33,    34,
      37,    38,    41,    42,    43,    46,    47,    48,    49,    50,
      51,    54,    55,    58,    59,    60,    61,    64,    65,    68,
      71,    73,    77,    79,    82,    83,    84,    85,    86,    87,
      88,    91,    92,    95,    96,    99,   100,   103,   104,   107,
     108,   111,   112,   115,   116,   119,   120,   123,   126,   127,
     130,   131,   134,   137,   138,   141,   142,   145,   146,   149,
     153,   154,   158,   159,   160,   161,   162,   163,   164,   165,
     169,   170,   173,   174,   177,   178,   181,   184,   187,   188,
     191,   192,   193,   194,   195,   198,   201,   202,   205,   206,
     207,   210,   213,   216,   218,   222,   223,   226,   227,   228,
     229,   230,   231,   234,   237,   238,   239,   242,   243,   246
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "NOTSEMI", "SEMI",
  "LB", "RB", "LM", "RM", "LS", "RS", "PUN", "COMMA", "INS", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "OR", "AND", "BIG", "BIGEQ", "SMALL",
  "SMALLEQ", "EQUAL", "NOT", "INC", "DEC", "PLUS2", "MINUS2", "MUL2",
  "DIV2", "MOD2", "STRING", "ID", "STRUCT", "INT", "VOID", "CHAR", "FLOAT",
  "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "RETURN", "BREAK", "WHILE",
  "FOR", "$accept", "Assign", "IncDec", "Oper1", "Oper2", "RelOperator",
  "NumberLiteral", "ArgumentList", "Arguments", "FunctionCall",
  "ForStatement", "WhileStatement", "Factor", "Term", "AddExpression",
  "RelExpression", "AndExpression", "SimpleExpression", "Selector",
  "SelectorList", "Variable", "AssignExpression", "Expression",
  "ExpressionStatement", "BreakStatement", "ReturnStatement",
  "DefaultCase", "CaseList", "SwitchStatement", "OpenStatement",
  "MatchedStatement", "Statement", "StatementList", "LocalDeclarationList",
  "CompoundStatement", "StructTypeReference", "StructType",
  "TypeSpecifier", "Param", "ParamList", "Params", "StructTypeDeclaration",
  "StructDeclaration", "FuncDeclaration", "Value", "IDs", "VarDeclaration",
  "Declaration", "DeclarationList", "Program", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -100

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,   -21,  -151,  -151,  -151,  -151,  -151,  -151,    -5,    30,
    -151,  -151,  -151,  -151,    75,    41,    40,    45,    10,    12,
    -151,  -151,  -151,  -151,   192,    59,    47,  -151,    33,    49,
      66,    33,  -151,    85,    89,  -151,    94,  -151,  -151,   191,
     191,  -151,  -151,  -151,    26,    71,  -151,  -151,  -151,    62,
      69,   199,    81,    88,   181,  -151,  -151,  -151,    23,  -151,
      33,  -151,   104,    75,     5,  -151,   107,  -151,    63,   191,
     125,    83,  -151,    58,    58,  -151,  -151,  -151,  -151,   191,
    -151,  -151,   191,  -151,  -151,  -151,  -151,  -151,  -151,   191,
     191,   191,  -151,  -151,  -151,  -151,  -151,  -151,   191,  -151,
     153,  -151,  -151,  -151,  -151,  -151,   116,  -151,   111,   120,
    -151,  -151,  -151,  -151,    62,    69,   199,    81,  -151,  -151,
    -151,    75,  -151,   155,  -151,    18,  -151,  -151,  -151,  -151,
     122,   123,   170,   129,   128,   130,  -151,  -151,   134,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,   191,   191,  -151,
     137,  -151,   191,   191,  -151,   133,   136,  -151,   141,   154,
     101,   156,     6,   191,   119,  -151,   121,  -151,  -151,   162,
     101,   166,    48,   191,  -151,  -151,   172,   168,   173,   165,
     167,  -151,   175,  -151,  -151,    25,   101,  -151,   101,  -151,
    -151,   101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    90,    91,    92,    93,    89,    94,     0,    88,
     116,   115,   114,   118,   119,     0,    87,   106,   110,     0,
     102,   117,     1,    85,   100,     0,     0,   113,     0,     0,
      91,     0,    97,    98,     0,    88,     0,    21,    22,     0,
       0,     8,     9,   112,    55,     0,    40,    35,    42,    44,
      46,    48,    50,    59,    37,    58,   111,   106,   107,   101,
       0,    84,    95,     0,     0,   105,     0,    36,    37,     0,
      28,     0,    54,    56,    55,    39,    12,    13,    14,     0,
      10,    11,     0,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     0,    38,
       0,    96,   104,    85,   103,    34,     0,    26,    27,     0,
      25,    51,    53,    41,    43,    45,    47,    49,    57,   109,
     108,    83,    52,     0,    29,     0,    24,    23,    61,    86,
       0,     0,     0,     0,     0,     0,    73,    74,     0,    72,
      77,    75,    78,    81,    80,    82,    76,     0,     0,    64,
       0,    62,     0,     0,    60,     0,     0,    63,     0,     0,
       0,     0,     0,     0,    80,    70,     0,    33,    32,     0,
       0,     0,    66,     0,    71,    79,     0,     0,     0,     0,
       0,    83,     0,    83,    69,     0,    68,    83,    65,    30,
      31,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,   -49,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,   -33,   106,    97,   103,   110,  -151,   124,  -151,
     -37,  -151,   -26,  -151,  -151,  -151,  -151,  -151,  -151,    28,
    -150,    43,  -108,   102,   -62,  -151,  -151,   -23,   143,  -151,
    -151,     9,  -151,  -151,    29,  -151,   -25,   190,  -151,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,    45,    82,    79,    89,    46,   108,   109,    47,
     136,   137,    48,    49,    50,    51,    52,    53,    72,    73,
      54,    55,   138,   139,   140,   141,   179,   172,   142,   143,
     144,   145,   125,    29,   146,     6,     7,     8,    32,    33,
      34,    35,    10,    11,    18,    19,    12,    13,    14,    15
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      56,    31,   104,    68,    61,    99,    60,    67,    75,     9,
     164,   102,   167,    66,   103,   103,    16,    25,    27,    99,
     175,    37,    38,     9,   128,    26,    28,   103,   129,    39,
      25,   189,    17,    69,   103,    40,    20,    70,   100,    71,
      31,    22,    68,   106,   110,    68,   113,    41,    42,    23,
      37,    38,    68,    68,    68,    44,    24,    58,    39,    59,
      62,   130,    36,   131,    40,    69,   132,   133,   134,   135,
      57,    71,   118,   186,   120,   188,    41,    42,   -99,   191,
      76,    77,    78,    43,    44,    80,    81,     1,     2,     3,
       4,     5,    41,    42,   177,   178,    61,   127,    60,    63,
     168,    64,    65,    90,    37,    38,   150,   128,    74,    91,
     103,    25,    39,     1,     2,     3,     4,     5,    40,   105,
     111,   155,   156,   190,   122,   123,   158,   159,    37,    38,
      41,    42,   124,   147,   148,   151,    39,   169,    44,   152,
     154,   153,    40,   157,   130,   160,   131,   180,   161,   132,
     133,   134,   135,   162,    41,    42,    37,    38,    37,    38,
     163,   107,    44,   170,    39,   166,    39,   171,   173,   176,
      40,   182,    40,    37,    38,   184,   149,   181,   183,   185,
     187,    39,    41,    42,    41,    42,   115,    40,   114,   119,
      44,   126,    44,   116,    37,    38,    92,   112,   174,    41,
      42,   117,    39,   165,    21,   121,   101,    44,    40,     0,
      41,    42,    93,    94,    95,    96,    97,     0,     0,     0,
      41,    42,    83,    84,    85,    86,    87,    88,    44,     0,
       1,     2,    30,     4,     5
};

static const yytype_int16 yycheck[] =
{
      26,    24,    64,    40,    29,    54,    29,    40,    45,     0,
     160,     6,     6,    39,     9,     9,    37,     7,     6,    68,
     170,     3,     4,    14,     6,    15,    14,     9,    10,    11,
       7,     6,    37,     7,     9,    17,     6,    11,    15,    13,
      63,     0,    79,    69,    70,    82,    79,    29,    30,     9,
       3,     4,    89,    90,    91,    37,    11,    28,    11,    10,
      31,    43,     3,    45,    17,     7,    48,    49,    50,    51,
      37,    13,    98,   181,   100,   183,    29,    30,    12,   187,
      18,    19,    20,    36,    37,    16,    17,    38,    39,    40,
      41,    42,    29,    30,    46,    47,   121,   123,   121,    14,
     162,    12,     8,    22,     3,     4,   132,     6,    37,    21,
       9,     7,    11,    38,    39,    40,    41,    42,    17,    12,
      37,   147,   148,   185,     8,    14,   152,   153,     3,     4,
      29,    30,    12,    11,    11,     6,    11,   163,    37,    11,
       6,    11,    17,     6,    43,    12,    45,   173,    12,    48,
      49,    50,    51,    12,    29,    30,     3,     4,     3,     4,
       6,    36,    37,    44,    11,     9,    11,    46,     6,     3,
      17,     3,    17,     3,     4,    10,     6,     5,     5,    12,
       5,    11,    29,    30,    29,    30,    89,    17,    82,    36,
      37,    36,    37,    90,     3,     4,    15,    73,   170,    29,
      30,    91,    11,   160,    14,   103,    63,    37,    17,    -1,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      29,    30,    23,    24,    25,    26,    27,    28,    37,    -1,
      38,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,    40,    41,    42,    87,    88,    89,    93,
      94,    95,    98,    99,   100,   101,    37,    37,    96,    97,
       6,    99,     0,     9,    11,     7,    15,     6,    14,    85,
      40,    89,    90,    91,    92,    93,     3,     3,     4,    11,
      17,    29,    30,    36,    37,    54,    58,    61,    64,    65,
      66,    67,    68,    69,    72,    73,    74,    37,    96,    10,
      89,    98,    96,    14,    12,     8,    74,    64,    72,     7,
      11,    13,    70,    71,    37,    72,    18,    19,    20,    56,
      16,    17,    55,    23,    24,    25,    26,    27,    28,    57,
      22,    21,    15,    31,    32,    33,    34,    35,    53,    54,
      15,    90,     6,     9,    86,    12,    74,    36,    59,    60,
      74,    37,    70,    64,    65,    66,    67,    68,    74,    36,
      74,    85,     8,    14,    12,    84,    36,    74,     6,    10,
      43,    45,    48,    49,    50,    51,    62,    63,    74,    75,
      76,    77,    80,    81,    82,    83,    86,    11,    11,     6,
      74,     6,    11,    11,     6,    74,    74,     6,    74,    74,
      12,    12,    12,     6,    82,    83,     9,     6,    86,    74,
      44,    46,    79,     6,    81,    82,     3,    46,    47,    78,
      74,     5,     3,     5,    10,    12,    84,     5,    84,     6,
      86,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    54,    54,
      55,    55,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    60,    60,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    87,    88,    88,
      89,    89,    89,    89,    89,    90,    91,    91,    92,    92,
      92,    93,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    97,    97,    98,    99,    99,    99,   100,   100,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     0,     4,
       9,     9,     5,     5,     3,     1,     2,     1,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     2,     3,     2,     1,     1,     2,     3,     1,     1,
       2,     1,     2,     3,     2,     3,     0,     5,     4,     8,
       5,     7,     1,     1,     1,     1,     1,     1,     1,     7,
       1,     1,     2,     0,     2,     0,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       0,     5,     2,     6,     6,     4,     1,     3,     5,     5,
       1,     3,     3,     3,     1,     1,     1,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 25 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> =\n");}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 26 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> +=\n");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 27 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> -=\n");}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 28 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> *=\n");}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 29 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> /=\n");}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 30 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> %%=\n");}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 33 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> ++\n");}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 34 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> --\n");}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 37 "bar.y" /* yacc.c:1646  */
    {printf("Oper1 -> +\n");}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 38 "bar.y" /* yacc.c:1646  */
    {printf("Oper1 -> -\n");}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 41 "bar.y" /* yacc.c:1646  */
    {printf("Oper2 -> *\n");}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 42 "bar.y" /* yacc.c:1646  */
    {printf("Oper2 -> /\n");}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 43 "bar.y" /* yacc.c:1646  */
    {printf("Oper2 -> %%\n");}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 46 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> <\n");}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 47 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> <=\n");}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 48 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> >\n");}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 49 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> >=\n");}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 50 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> ==\n");}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 51 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> !=\n");}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 54 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %d\n", (yyvsp[0].iVal));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 55 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %f\n", (yyvsp[0].rVal));}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 58 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumentList , Expression\n");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 59 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumentList , STRING\n");}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 60 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> Expression\n");}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 61 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> STRING\n");}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 64 "bar.y" /* yacc.c:1646  */
    {printf("Arguments -> ArgumentList\n");}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 65 "bar.y" /* yacc.c:1646  */
    {printf("Arguments -> Empty\n");}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 68 "bar.y" /* yacc.c:1646  */
    {printf("FunctionCall -> ID ( Arguments )\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 72 "bar.y" /* yacc.c:1646  */
    {printf("ForStatement -> for ( Expression ; Expression ; Expression ) ;\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 74 "bar.y" /* yacc.c:1646  */
    {printf("ForStatement -> for ( Expression ; Expression ; Expression ) CompoundStatement\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 78 "bar.y" /* yacc.c:1646  */
    {printf("WhileStatement -> while ( Expression ) CompoundStatement\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 79 "bar.y" /* yacc.c:1646  */
    {printf("WhileStatement -> while ( Expression ) ;\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 82 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> ( Expression )\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 83 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> FunctionCall\n");}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 84 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> - Factor\n");}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 85 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> Variable\n");}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 86 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> Variable IncDec\n");}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 87 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> IncDec Variable\n");}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 88 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> NumberLiteral\n");}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Term Oper2 Factor\n");}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 92 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Factor\n");}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "bar.y" /* yacc.c:1646  */
    {printf("AddExpression -> AddExpression Oper1 Term\n");}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "bar.y" /* yacc.c:1646  */
    {printf("AddExpression -> Term\n");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 99 "bar.y" /* yacc.c:1646  */
    {printf("RelExpression -> RelExpression RelOperator AddExpression\n");}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 100 "bar.y" /* yacc.c:1646  */
    {printf("RelExpression -> AddExpression\n");}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 103 "bar.y" /* yacc.c:1646  */
    {printf("AndExpression -> AndExpression && RelExpression\n");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 104 "bar.y" /* yacc.c:1646  */
    {printf("AndExpression -> RelExpression\n");}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 107 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpression || AndExpression\n");}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpression -> AndExpression\n");}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 111 "bar.y" /* yacc.c:1646  */
    {printf("Selector -> . ID\n");}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 112 "bar.y" /* yacc.c:1646  */
    {printf("Selector -> [ Expression ]\n");}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 115 "bar.y" /* yacc.c:1646  */
    {printf("SelectorList -> SelectorList Selector\n");}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 116 "bar.y" /* yacc.c:1646  */
    {printf("SelectorList -> Selector\n");}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 119 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> ID\n");}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 120 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> ID SelectorList\n");}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 123 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpression -> Variable Assign Expression\n");}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 126 "bar.y" /* yacc.c:1646  */
    {printf("Expression -> AssignExpression\n");}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 127 "bar.y" /* yacc.c:1646  */
    {printf("Expression -> SimpleExpression\n");}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 130 "bar.y" /* yacc.c:1646  */
    {printf("ExpressionStatement -> Expression ;\n");}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 131 "bar.y" /* yacc.c:1646  */
    {printf("ExpressionStatement -> ;\n");}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 134 "bar.y" /* yacc.c:1646  */
    {printf("BreakStatement -> break ;\n");}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 137 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStatement -> return Expression ;\n");}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 138 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStatement -> return ;\n");}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 141 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> default : StatementList\n");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 142 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> Empty\n");}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 145 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> CaseList case %d : StatementList\n", (yyvsp[-2].iVal));}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 146 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> case %d : StatementList\n", (yyvsp[-2].iVal));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "bar.y" /* yacc.c:1646  */
    {printf("SwitchStatement -> switch ( Expression ) { CaseList DefaultCase }\n");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 153 "bar.y" /* yacc.c:1646  */
    {printf("OpenStatement -> if ( Expression ) Statement\n");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "bar.y" /* yacc.c:1646  */
    {printf("OpenStatement -> if ( Expression ) MatchedStatement else OpenStatement\n");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> ExpressionStatement\n");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> ForStatement\n");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> WhileStatement\n");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> ReturnStatement\n");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 162 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> CompoundStatement\n");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 163 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> BreakStatement\n");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> SwitchStatement\n");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 166 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> if ( Expression ) MatchedStatement else MatchedStatement\n");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 169 "bar.y" /* yacc.c:1646  */
    {printf("Statement -> MatchedStatement\n");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 170 "bar.y" /* yacc.c:1646  */
    {printf("Statement -> OpenStatement\n");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "bar.y" /* yacc.c:1646  */
    {printf("StatementList -> StatementList Statement\n");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 174 "bar.y" /* yacc.c:1646  */
    {printf("StatementList -> Empty\n");}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 177 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclarationList -> LocalDeclarationList VarDeclaration\n");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 178 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclarationList -> Empty\n");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "bar.y" /* yacc.c:1646  */
    {printf("CompoundStatement -> { LocalDeclarationList StatementList }\n");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 184 "bar.y" /* yacc.c:1646  */
    {printf("StructTypeReference -> struct ID\n");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 187 "bar.y" /* yacc.c:1646  */
    {printf("StructType -> StructTypeDeclaration\n");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 188 "bar.y" /* yacc.c:1646  */
    {printf("StructType -> StructTypeReference\n");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 191 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> int\n");}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 192 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> void\n");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 193 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> char\n");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 194 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> float\n");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 195 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> StructType\n");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 198 "bar.y" /* yacc.c:1646  */
    {printf("Param -> TypeSpecifier Value\n");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> ParamList , Param\n");}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 202 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> Param\n");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 205 "bar.y" /* yacc.c:1646  */
    {printf("Params -> ParamList\n");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 206 "bar.y" /* yacc.c:1646  */
    {printf("Params -> void\n");}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 207 "bar.y" /* yacc.c:1646  */
    {printf("Params -> Empty\n");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 210 "bar.y" /* yacc.c:1646  */
    {printf("StructTypeDeclaration -> struct ID { LocalDeclarationList }\n");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 213 "bar.y" /* yacc.c:1646  */
    {printf("StructDeclaration -> StructTypeDeclaration\n");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 217 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) CompoundStatement\n");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 219 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) ;\n");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 222 "bar.y" /* yacc.c:1646  */
    {printf("Value -> Value [ %d ]\n", (yyvsp[-1].iVal));}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 223 "bar.y" /* yacc.c:1646  */
    {printf("Value -> ID\n");}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 226 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value\n");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 227 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value = Expression\n");}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 228 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value = STRING\n");}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 229 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value\n");}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 230 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value = Expression\n");}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 231 "bar.y" /* yacc.c:1646  */
    {printf("IDS -> Value = STRING\n");}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 234 "bar.y" /* yacc.c:1646  */
    {printf("VarDeclaration -> TypeSpecifier IDs ;\n");}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 237 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> VarDeclaration\n");}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 238 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> FuncDeclaration\n");}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 239 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> StructDeclaration\n");}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 242 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> DeclarationList Declaration\n");}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 243 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> Declaration\n");}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 246 "bar.y" /* yacc.c:1646  */
    {printf("Program -> DeclarationList\n");}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2179 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 249 "bar.y" /* yacc.c:1906  */

int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

