/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ws_yy_parse
#define yylex           ws_yy_lex
#define yyerror         ws_yy_error
#define yydebug         ws_yy_debug
#define yynerrs         ws_yy_nerrs


/* Copy the first part of user declarations.  */
#line 1 "wmlscript/wsgram.y" /* yacc.c:339  */

/*
 *
 * wsgram.y
 *
 * Author: Markku Rossi <mtr@iki.fi>
 *
 * Copyright (c) 1999-2000 WAPIT OY LTD.
 *		 All rights reserved.
 *
 * Bison grammar for the WMLScript compiler.
 *
 */

#include "wmlscript/wsint.h"


#line 90 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_WS_YY_Y_TAB_H_INCLUDED
# define YY_WS_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ws_yy_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tINVALID = 258,
    tTRUE = 259,
    tFALSE = 260,
    tINTEGER = 261,
    tFLOAT = 262,
    tSTRING = 263,
    tIDENTIFIER = 264,
    tACCESS = 265,
    tAGENT = 266,
    tBREAK = 267,
    tCONTINUE = 268,
    tIDIV = 269,
    tIDIVA = 270,
    tDOMAIN = 271,
    tELSE = 272,
    tEQUIV = 273,
    tEXTERN = 274,
    tFOR = 275,
    tFUNCTION = 276,
    tHEADER = 277,
    tHTTP = 278,
    tIF = 279,
    tISVALID = 280,
    tMETA = 281,
    tNAME = 282,
    tPATH = 283,
    tRETURN = 284,
    tTYPEOF = 285,
    tUSE = 286,
    tUSER = 287,
    tVAR = 288,
    tWHILE = 289,
    tURL = 290,
    tDELETE = 291,
    tIN = 292,
    tLIB = 293,
    tNEW = 294,
    tNULL = 295,
    tTHIS = 296,
    tVOID = 297,
    tWITH = 298,
    tCASE = 299,
    tCATCH = 300,
    tCLASS = 301,
    tCONST = 302,
    tDEBUGGER = 303,
    tDEFAULT = 304,
    tDO = 305,
    tENUM = 306,
    tEXPORT = 307,
    tEXTENDS = 308,
    tFINALLY = 309,
    tIMPORT = 310,
    tPRIVATE = 311,
    tPUBLIC = 312,
    tSIZEOF = 313,
    tSTRUCT = 314,
    tSUPER = 315,
    tSWITCH = 316,
    tTHROW = 317,
    tTRY = 318,
    tEQ = 319,
    tLE = 320,
    tGE = 321,
    tNE = 322,
    tAND = 323,
    tOR = 324,
    tPLUSPLUS = 325,
    tMINUSMINUS = 326,
    tLSHIFT = 327,
    tRSSHIFT = 328,
    tRSZSHIFT = 329,
    tADDA = 330,
    tSUBA = 331,
    tMULA = 332,
    tDIVA = 333,
    tANDA = 334,
    tORA = 335,
    tXORA = 336,
    tREMA = 337,
    tLSHIFTA = 338,
    tRSSHIFTA = 339,
    tRSZSHIFTA = 340
  };
#endif
/* Tokens.  */
#define tINVALID 258
#define tTRUE 259
#define tFALSE 260
#define tINTEGER 261
#define tFLOAT 262
#define tSTRING 263
#define tIDENTIFIER 264
#define tACCESS 265
#define tAGENT 266
#define tBREAK 267
#define tCONTINUE 268
#define tIDIV 269
#define tIDIVA 270
#define tDOMAIN 271
#define tELSE 272
#define tEQUIV 273
#define tEXTERN 274
#define tFOR 275
#define tFUNCTION 276
#define tHEADER 277
#define tHTTP 278
#define tIF 279
#define tISVALID 280
#define tMETA 281
#define tNAME 282
#define tPATH 283
#define tRETURN 284
#define tTYPEOF 285
#define tUSE 286
#define tUSER 287
#define tVAR 288
#define tWHILE 289
#define tURL 290
#define tDELETE 291
#define tIN 292
#define tLIB 293
#define tNEW 294
#define tNULL 295
#define tTHIS 296
#define tVOID 297
#define tWITH 298
#define tCASE 299
#define tCATCH 300
#define tCLASS 301
#define tCONST 302
#define tDEBUGGER 303
#define tDEFAULT 304
#define tDO 305
#define tENUM 306
#define tEXPORT 307
#define tEXTENDS 308
#define tFINALLY 309
#define tIMPORT 310
#define tPRIVATE 311
#define tPUBLIC 312
#define tSIZEOF 313
#define tSTRUCT 314
#define tSUPER 315
#define tSWITCH 316
#define tTHROW 317
#define tTRY 318
#define tEQ 319
#define tLE 320
#define tGE 321
#define tNE 322
#define tAND 323
#define tOR 324
#define tPLUSPLUS 325
#define tMINUSMINUS 326
#define tLSHIFT 327
#define tRSSHIFT 328
#define tRSZSHIFT 329
#define tADDA 330
#define tSUBA 331
#define tMULA 332
#define tDIVA 333
#define tANDA 334
#define tORA 335
#define tXORA 336
#define tREMA 337
#define tLSHIFTA 338
#define tRSSHIFTA 339
#define tRSZSHIFTA 340

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "wmlscript/wsgram.y" /* yacc.c:355  */

    WsUInt32 integer;
    WsFloat vfloat;
    char *identifier;
    WsUtf8String *string;

    WsBool boolean;
    WsList *list;
    WsFormalParm *parm;
    WsVarDec *vardec;

    WsPragmaMetaBody *meta_body;

    WsStatement *stmt;
    WsExpression *expr;

#line 317 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int ws_yy_parse (WsCompiler* compiler);

#endif /* !YY_WS_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 39 "wmlscript/wsgram.y" /* yacc.c:358  */

/* The required yyerror() function.  This is actually not used but to
   report the internal parser errors.  All other errors are reported
   by using the `wserror.h' functions. */
extern void yyerror(YYLTYPE* locp, WsCompiler* compiler, const char* msg);

#if WS_DEBUG
/* Just for debugging purposes. */
WsCompilerPtr global_compiler = NULL;
#endif /* WS_DEBUG */


#line 359 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   448

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  109
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,   107,     2,   104,    97,     2,
      87,    88,   102,   100,    89,   101,   108,   103,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    94,    86,
      98,    92,    99,    93,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    95,    91,   105,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   126,   127,   134,   135,   139,   140,   145,
     146,   147,   151,   156,   160,   168,   177,   199,   203,   204,
     205,   209,   225,   243,   277,   279,   283,   284,   285,   290,
     291,   295,   310,   311,   316,   317,   320,   322,   326,   344,
     365,   373,   374,   376,   378,   379,   380,   382,   384,   387,
     395,   404,   405,   409,   414,   419,   421,   426,   431,   436,
     452,   453,   458,   460,   465,   467,   471,   474,   480,   487,
     488,   493,   494,   499,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   518,   520,   522,   524,   529,   530,   535,
     536,   541,   542,   547,   548,   553,   554,   559,   560,   565,
     566,   568,   573,   574,   576,   578,   580,   585,   586,   588,
     590,   595,   596,   598,   603,   604,   606,   608,   610,   615,
     616,   618,   620,   622,   624,   640,   642,   644,   649,   650,
     652,   657,   658,   668,   670,   675,   677,   679,   681,   683,
     685,   687,   689,   694,   696,   701,   706
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINVALID", "tTRUE", "tFALSE",
  "tINTEGER", "tFLOAT", "tSTRING", "tIDENTIFIER", "tACCESS", "tAGENT",
  "tBREAK", "tCONTINUE", "tIDIV", "tIDIVA", "tDOMAIN", "tELSE", "tEQUIV",
  "tEXTERN", "tFOR", "tFUNCTION", "tHEADER", "tHTTP", "tIF", "tISVALID",
  "tMETA", "tNAME", "tPATH", "tRETURN", "tTYPEOF", "tUSE", "tUSER", "tVAR",
  "tWHILE", "tURL", "tDELETE", "tIN", "tLIB", "tNEW", "tNULL", "tTHIS",
  "tVOID", "tWITH", "tCASE", "tCATCH", "tCLASS", "tCONST", "tDEBUGGER",
  "tDEFAULT", "tDO", "tENUM", "tEXPORT", "tEXTENDS", "tFINALLY", "tIMPORT",
  "tPRIVATE", "tPUBLIC", "tSIZEOF", "tSTRUCT", "tSUPER", "tSWITCH",
  "tTHROW", "tTRY", "tEQ", "tLE", "tGE", "tNE", "tAND", "tOR", "tPLUSPLUS",
  "tMINUSMINUS", "tLSHIFT", "tRSSHIFT", "tRSZSHIFT", "tADDA", "tSUBA",
  "tMULA", "tDIVA", "tANDA", "tORA", "tXORA", "tREMA", "tLSHIFTA",
  "tRSSHIFTA", "tRSZSHIFTA", "';'", "'('", "')'", "','", "'{'", "'}'",
  "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'~'", "'!'", "'#'", "'.'", "$accept",
  "CompilationUnit", "Pragmas", "Pragma", "PragmaDeclaration",
  "ExternalCompilationUnitPragma", "AccessControlPragma",
  "AccessControlSpecifier", "MetaPragma", "MetaSpecifier", "MetaName",
  "MetaHttpEquiv", "MetaUserAgent", "MetaBody", "MetaPropertyName",
  "MetaContent", "MetaScheme", "FunctionDeclarations",
  "FunctionDeclaration", "ExternOpt", "FormalParameterListOpt",
  "SemicolonOpt", "FormalParameterList", "Statement", "Block",
  "StatementListOpt", "StatementList", "VariableStatement",
  "VariableDeclarationList", "VariableDeclaration",
  "VariableInitializedOpt", "IfStatement", "IterationStatement",
  "ForStatement", "ReturnStatement", "ExpressionOpt", "Expression",
  "AssignmentExpression", "ConditionalExpression", "LogicalORExpression",
  "LogicalANDExpression", "BitwiseORExpression", "BitwiseXORExpression",
  "BitwiseANDExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PostfixExpression", "CallExpression",
  "PrimaryExpression", "Arguments", "ArgumentList", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    59,    40,    41,    44,
     123,   125,    61,    63,    58,   124,    94,    38,    60,    62,
      43,    45,    42,    47,    37,   126,    33,    35,    46
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -53

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      59,    39,  -135,    28,    68,    63,  -135,    38,  -135,    62,
      37,    54,    13,   -43,  -135,  -135,  -135,  -135,  -135,  -135,
      38,  -135,    57,    67,    87,  -135,    92,   108,   109,  -135,
    -135,  -135,  -135,   121,  -135,    47,   123,  -135,   108,  -135,
    -135,   141,   108,  -135,   155,   164,  -135,  -135,   166,  -135,
    -135,    89,   107,  -135,  -135,  -135,     1,   188,  -135,   132,
     112,  -135,  -135,  -135,  -135,  -135,  -135,  -135,   340,   115,
     120,   124,   125,   296,   308,   296,    35,   126,   198,   201,
    -135,   308,   296,   296,   296,   296,  -135,  -135,   129,   175,
    -135,  -135,  -135,  -135,  -135,   -83,  -135,  -135,   -48,   146,
     122,   119,   127,    12,   -25,    45,     5,    44,  -135,  -135,
    -135,  -135,  -135,  -135,   308,  -135,  -135,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   222,   308,
     207,   212,  -135,  -135,  -135,   264,   308,   -38,  -135,   148,
     147,  -135,  -135,   143,    -1,  -135,   308,  -135,  -135,    43,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,   308,   296,   308,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,    66,  -135,   152,   152,   231,   156,    70,
    -135,   296,  -135,  -135,   231,    82,  -135,  -135,   146,   149,
     122,   119,   127,    12,   -25,   -25,    45,    45,    45,    45,
       5,     5,     5,    44,    44,  -135,  -135,  -135,  -135,  -135,
     308,  -135,  -135,    25,   308,    22,  -135,  -135,    22,   308,
    -135,   308,   158,   224,  -135,  -135,   162,   308,    22,   308,
     161,  -135,   163,    22,    22,  -135,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,    33,     0,     0,     0,     5,     3,    29,     0,
       0,     0,     0,     0,     9,    10,    11,     1,     8,     6,
       2,    30,     0,     0,     0,    13,     0,     0,     0,    17,
      18,    19,    20,     0,     7,     0,    14,    15,     0,    26,
      21,     0,     0,    12,    34,     0,    22,    27,    24,    23,
      38,     0,    35,    16,    28,    25,     0,     0,    50,     0,
      36,    39,   136,   137,   138,   139,   140,   141,   135,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,    53,    40,     0,     0,
      41,    44,    45,    65,    48,     0,    71,    73,    87,    89,
      91,    93,    95,    97,    99,   102,   107,   111,   114,   119,
     128,   131,    37,    31,     0,   129,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,    47,    46,    69,     0,   135,   121,     0,
      70,   120,    56,    60,     0,    57,     0,   122,   123,     0,
     124,   125,   126,   127,    49,    54,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      78,    79,    75,    76,    83,    85,    84,    77,    80,    81,
      82,   143,   145,     0,    74,     0,     0,     0,     0,     0,
      68,     0,    59,    55,     0,     0,   142,    72,    90,     0,
      92,    94,    96,    98,   100,   101,   105,   106,   103,   104,
     108,   109,   110,   112,   113,   117,   115,   116,   118,   144,
       0,   133,   134,     0,    69,     0,    61,    58,     0,     0,
     146,    69,     0,    63,    64,    88,     0,    69,     0,    69,
       0,    62,     0,     0,     0,    66,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,   245,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,    29,  -135,  -135,  -135,   248,    17,  -135,
    -135,  -135,  -135,   -85,   199,  -135,  -135,  -135,    60,    50,
    -135,  -135,  -135,  -135,  -135,  -134,   -74,  -109,    55,  -135,
     100,    99,   102,    98,   101,   -22,   -65,   -46,    20,    14,
    -135,  -135,  -135,   -10,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    13,    14,    15,    25,    16,    29,
      30,    31,    32,    40,    41,    48,    55,     7,     8,     9,
      51,   113,    52,    86,    87,    88,    89,    90,   144,   145,
     202,    91,    92,    93,    94,   139,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   132,   193
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     140,   198,    58,   156,   155,   179,   157,   149,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   192,
     194,   158,    33,    58,    21,    62,    63,    64,    65,    66,
      67,    68,   115,   116,    69,    70,   142,    21,    10,    -4,
     166,   167,    71,    34,   143,   159,    72,    73,   207,   128,
     209,    74,    75,    23,    11,    76,    77,     2,   175,   -32,
       1,   140,   199,    12,    18,    24,    35,    46,    17,   130,
     131,    49,   205,   168,   169,    36,   164,    26,     2,   165,
     -32,    27,     2,    22,   -32,   203,    28,   138,   204,   141,
       3,    59,    78,    79,     3,    37,   150,   151,   152,   153,
     242,   216,   217,   218,   219,   173,   174,   246,    80,    81,
      38,   241,    59,   250,   204,   252,    39,   170,   171,   172,
      42,   240,    82,    83,   220,   221,   222,    84,    85,    43,
     245,   206,   157,    58,    44,    62,    63,    64,    65,    66,
      67,    68,   214,   215,    69,    70,   176,   177,   178,    47,
     243,    45,    71,   244,   229,   230,    72,    73,   235,   157,
     140,    74,    75,   251,    50,    76,    77,   140,   255,   256,
     238,   157,    53,   140,    54,   140,    58,    56,    62,    63,
      64,    65,    66,    67,    68,   231,   232,    69,    70,   225,
     226,   227,   228,   223,   224,    71,    57,    61,   112,    72,
      73,   133,    78,    79,    74,    75,   134,   147,    76,    77,
     148,   135,   136,   146,   160,   162,   195,   161,    80,    81,
     154,   196,    59,   -51,   163,    62,    63,    64,    65,    66,
      67,    68,    82,    83,   200,   201,   157,    84,    85,   128,
     143,   248,   234,   239,   247,    78,    79,    73,   249,   253,
      19,   254,    75,    20,   237,    60,   236,   233,   208,   210,
     212,    80,    81,   211,   213,    59,   -52,    62,    63,    64,
      65,    66,    67,    68,     0,    82,    83,     0,     0,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,    78,    79,    75,     0,     0,   197,     0,    62,
      63,    64,    65,    66,    67,   137,     0,     0,     0,    81,
     191,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,    73,    82,    83,     0,     0,    75,    84,    85,     0,
       0,     0,     0,    73,    78,    79,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    83,    78,    79,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,    82,    83,     0,     0,
       0,    84,    85,     0,     0,     0,     0,     0,    82,    83,
     115,   116,     0,    84,    85,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,     0,     0,
       0,     0,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,   131
};

static const yytype_int16 yycheck[] =
{
      74,   135,     1,    86,    89,   114,    89,    81,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    69,     9,     1,     7,     3,     4,     5,     6,     7,
       8,     9,    70,    71,    12,    13,     1,    20,    10,     0,
      65,    66,    20,    86,     9,    93,    24,    25,   157,    87,
     159,    29,    30,    16,    26,    33,    34,    19,    14,    21,
       1,   135,   136,    35,     1,    28,     9,    38,     0,   107,
     108,    42,   146,    98,    99,     8,    64,    23,    19,    67,
      21,    27,    19,    21,    21,    86,    32,    73,    89,    75,
      31,    90,    70,    71,    31,     8,    82,    83,    84,    85,
     234,   166,   167,   168,   169,   100,   101,   241,    86,    87,
      18,    86,    90,   247,    89,   249,     8,    72,    73,    74,
      11,   230,   100,   101,   170,   171,   172,   105,   106,     8,
     239,    88,    89,     1,    87,     3,     4,     5,     6,     7,
       8,     9,   164,   165,    12,    13,   102,   103,   104,     8,
     235,    28,    20,   238,    88,    89,    24,    25,    88,    89,
     234,    29,    30,   248,     9,    33,    34,   241,   253,   254,
      88,    89,     8,   247,     8,   249,     1,    88,     3,     4,
       5,     6,     7,     8,     9,   195,   196,    12,    13,   175,
     176,   177,   178,   173,   174,    20,    89,     9,    86,    24,
      25,    86,    70,    71,    29,    30,    86,     9,    33,    34,
       9,    87,    87,    87,    68,    96,     9,    95,    86,    87,
      91,     9,    90,    91,    97,     3,     4,     5,     6,     7,
       8,     9,   100,   101,    86,    92,    89,   105,   106,    87,
       9,    17,    86,    94,    86,    70,    71,    25,    86,    88,
       5,    88,    30,     5,   204,    56,   201,   197,   158,   160,
     162,    86,    87,   161,   163,    90,    91,     3,     4,     5,
       6,     7,     8,     9,    -1,   100,   101,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    70,    71,    30,    -1,    -1,    33,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    25,   100,   101,    -1,    -1,    30,   105,   106,    -1,
      -1,    -1,    -1,    25,    70,    71,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    70,    71,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,   100,   101,    -1,    -1,
      -1,   105,   106,    -1,    -1,    -1,    -1,    -1,   100,   101,
      70,    71,    -1,   105,   106,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    19,    31,   110,   111,   112,   126,   127,   128,
      10,    26,    35,   113,   114,   115,   117,     0,     1,   112,
     126,   127,    21,    16,    28,   116,    23,    27,    32,   118,
     119,   120,   121,     9,    86,     9,     8,     8,    18,     8,
     122,   123,    11,     8,    87,    28,   122,     8,   124,   122,
       9,   129,   131,     8,     8,   125,    88,    89,     1,    90,
     133,     9,     3,     4,     5,     6,     7,     8,     9,    12,
      13,    20,    24,    25,    29,    30,    33,    34,    70,    71,
      86,    87,   100,   101,   105,   106,   132,   133,   134,   135,
     136,   140,   141,   142,   143,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,    86,   130,    15,    70,    71,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    87,    92,
     107,   108,   162,    86,    86,    87,    87,     9,   158,   144,
     145,   158,     1,     9,   137,   138,    87,     9,     9,   145,
     158,   158,   158,   158,    91,   132,    86,    89,    69,    93,
      68,    95,    96,    97,    64,    67,    65,    66,    98,    99,
      72,    73,    74,   100,   101,    14,   102,   103,   104,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,    88,   146,   163,   146,     9,     9,    33,   144,   145,
      86,    92,   139,    86,    89,   145,    88,   146,   149,   146,
     150,   151,   152,   153,   154,   154,   155,   155,   155,   155,
     156,   156,   156,   157,   157,   158,   158,   158,   158,    88,
      89,   162,   162,   137,    86,    88,   147,   138,    88,    94,
     146,    86,   144,   132,   132,   146,   144,    86,    17,    86,
     144,   132,   144,    88,    88,   132,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   115,   116,   116,   116,   117,   118,   118,
     118,   119,   120,   121,   122,   122,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   159,   159,
     159,   160,   160,   160,   160,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   162,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     3,     2,     2,     2,     4,     2,     1,     1,
       1,     2,     3,     3,     2,     3,     1,     1,     1,     1,
       2,     8,     0,     1,     0,     1,     0,     1,     1,     3,
       1,     1,     1,     2,     1,     1,     2,     2,     1,     3,
       1,     0,     1,     1,     2,     3,     2,     1,     3,     2,
       0,     2,     7,     5,     5,     1,     9,    10,     3,     0,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     5,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     1,     3
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
      yyerror (&yylloc, compiler, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, compiler); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, WsCompiler* compiler)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (compiler);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, WsCompiler* compiler)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, compiler);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, WsCompiler* compiler)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , compiler);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, compiler); \
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
    default: /* Avoid compiler warnings. */
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, WsCompiler* compiler)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (compiler);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (WsCompiler* compiler)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, compiler);
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
  *++yylsp = yylloc;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 128 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_error_syntax(compiler, (yylsp[0]).first_line); }
#line 1793 "y.tab.c" /* yacc.c:1648  */
    break;

  case 8:
#line 141 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_error_syntax(compiler, (yylsp[0]).first_line); }
#line 1799 "y.tab.c" /* yacc.c:1648  */
    break;

  case 12:
#line 152 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_pragma_use(compiler, (yylsp[-1]).first_line, (yyvsp[-1].identifier), (yyvsp[0].string)); }
#line 1805 "y.tab.c" /* yacc.c:1648  */
    break;

  case 14:
#line 161 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    /* Pass this to the byte-code */
		    if (!ws_bc_add_pragma_access_domain(compiler->bc, (yyvsp[0].string)->data,
						        (yyvsp[0].string)->len))
		        ws_error_memory(compiler);
		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1817 "y.tab.c" /* yacc.c:1648  */
    break;

  case 15:
#line 169 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    /* Pass this to the byte-code */
		    if (!ws_bc_add_pragma_access_path(compiler->bc, (yyvsp[0].string)->data,
						      (yyvsp[0].string)->len))
		        ws_error_memory(compiler);

		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1830 "y.tab.c" /* yacc.c:1648  */
    break;

  case 16:
#line 178 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    WsBool success = WS_TRUE;

		    /* Pass these to the byte-code */
		    if (!ws_bc_add_pragma_access_domain(compiler->bc, (yyvsp[-2].string)->data,
						        (yyvsp[-2].string)->len))
		        success = WS_FALSE;

		    if (!ws_bc_add_pragma_access_path(compiler->bc, (yyvsp[0].string)->data,
						      (yyvsp[0].string)->len))
		        success = WS_FALSE;

		    if (!success)
		        ws_error_memory(compiler);

		    ws_lexer_free_utf8(compiler, (yyvsp[-2].string));
		    ws_lexer_free_utf8(compiler, (yyvsp[0].string));
		}
#line 1853 "y.tab.c" /* yacc.c:1648  */
    break;

  case 21:
#line 210 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    /* Meta information for the origin servers.  Show it
                     * to the user if requested. */
		    if (compiler->params.meta_name_cb)
		        (*compiler->params.meta_name_cb)(
					(yyvsp[0].meta_body)->property_name, (yyvsp[0].meta_body)->content,
					(yyvsp[0].meta_body)->scheme,
					compiler->params.meta_name_cb_context);

		    /* We do not need the MetaBody anymore. */
		    ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));
		}
#line 1870 "y.tab.c" /* yacc.c:1648  */
    break;

  case 22:
#line 226 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    /* Meta information HTTP header that should be
                     * included to an HTTP response header.  Show it to
                     * the user if requested. */
		    if (compiler->params.meta_http_equiv_cb)
		        (*compiler->params.meta_http_equiv_cb)(
				(yyvsp[0].meta_body)->property_name,
				(yyvsp[0].meta_body)->content,
				(yyvsp[0].meta_body)->scheme,
				compiler->params.meta_http_equiv_cb_context);

		    /* We do not need the MetaBody anymore. */
		    ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));
		}
#line 1889 "y.tab.c" /* yacc.c:1648  */
    break;

  case 23:
#line 244 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    WsBool success;

		    /* Pass this pragma to the byte-code */
		    if ((yyvsp[0].meta_body)) {
		        if ((yyvsp[0].meta_body)->scheme)
		  	    success
			  = ws_bc_add_pragma_user_agent_property_and_scheme(
						compiler->bc,
						(yyvsp[0].meta_body)->property_name->data,
						(yyvsp[0].meta_body)->property_name->len,
						(yyvsp[0].meta_body)->content->data,
						(yyvsp[0].meta_body)->content->len,
						(yyvsp[0].meta_body)->scheme->data,
						(yyvsp[0].meta_body)->scheme->len);
		        else
		  	    success = ws_bc_add_pragma_user_agent_property(
						compiler->bc,
						(yyvsp[0].meta_body)->property_name->data,
						(yyvsp[0].meta_body)->property_name->len,
						(yyvsp[0].meta_body)->content->data,
						(yyvsp[0].meta_body)->content->len);

		        /* Free the MetaBody. */
		        ws_pragma_meta_body_free(compiler, (yyvsp[0].meta_body));

		        if (!success)
		  	    ws_error_memory(compiler);
		    }
		}
#line 1924 "y.tab.c" /* yacc.c:1648  */
    break;

  case 24:
#line 278 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.meta_body) = ws_pragma_meta_body(compiler, (yyvsp[-1].string), (yyvsp[0].string), NULL); }
#line 1930 "y.tab.c" /* yacc.c:1648  */
    break;

  case 25:
#line 280 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.meta_body) = ws_pragma_meta_body(compiler, (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].string)); }
#line 1936 "y.tab.c" /* yacc.c:1648  */
    break;

  case 31:
#line 297 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    char *name = ws_strdup((yyvsp[-5].identifier));

		    ws_lexer_free_block(compiler, (yyvsp[-5].identifier));

		    if (name)
		        ws_function(compiler, (yyvsp[-7].boolean), name, (yylsp[-5]).first_line, (yyvsp[-3].list), (yyvsp[-1].list));
		    else
		        ws_error_memory(compiler);
		}
#line 1951 "y.tab.c" /* yacc.c:1648  */
    break;

  case 32:
#line 310 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.boolean) = WS_FALSE; }
#line 1957 "y.tab.c" /* yacc.c:1648  */
    break;

  case 33:
#line 311 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.boolean) = WS_TRUE;  }
#line 1963 "y.tab.c" /* yacc.c:1648  */
    break;

  case 34:
#line 316 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.list) = ws_list_new(compiler); }
#line 1969 "y.tab.c" /* yacc.c:1648  */
    break;

  case 38:
#line 327 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
                    char *id;
                    WsFormalParm *parm;

		    id = ws_f_strdup((compiler)->pool_stree, (yyvsp[0].identifier));
                    parm = ws_formal_parameter(compiler, (yylsp[0]).first_line, id);

		    ws_lexer_free_block(compiler, (yyvsp[0].identifier));

		    if (id == NULL || parm == NULL) {
		        ws_error_memory(compiler);
		        (yyval.list) = NULL;
		    } else {
		        (yyval.list) = ws_list_new(compiler);
		        ws_list_append(compiler, (yyval.list), parm);
		    }
		}
#line 1991 "y.tab.c" /* yacc.c:1648  */
    break;

  case 39:
#line 345 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
                    char *id;
                    WsFormalParm *parm;

		    id = ws_f_strdup(compiler->pool_stree, (yyvsp[0].identifier));
                    parm = ws_formal_parameter(compiler, (yylsp[-2]).first_line, id);

		    ws_lexer_free_block(compiler, (yyvsp[0].identifier));

		    if (id == NULL || parm == NULL) {
		        ws_error_memory(compiler);
		        (yyval.list) = NULL;
		    } else
		        ws_list_append(compiler, (yyvsp[-2].list), parm);
		}
#line 2011 "y.tab.c" /* yacc.c:1648  */
    break;

  case 40:
#line 366 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    if ((yyvsp[0].list))
		        (yyval.stmt) = ws_stmt_block(compiler, (yyvsp[0].list)->first_line, (yyvsp[0].list)->last_line,
				           (yyvsp[0].list));
		    else
		        (yyval.stmt) = NULL;
		}
#line 2023 "y.tab.c" /* yacc.c:1648  */
    break;

  case 42:
#line 375 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_empty(compiler, (yylsp[0]).first_line); }
#line 2029 "y.tab.c" /* yacc.c:1648  */
    break;

  case 43:
#line 377 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_expr(compiler, (yyvsp[-1].expr)->line, (yyvsp[-1].expr)); }
#line 2035 "y.tab.c" /* yacc.c:1648  */
    break;

  case 46:
#line 381 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_continue(compiler, (yylsp[-1]).first_line); }
#line 2041 "y.tab.c" /* yacc.c:1648  */
    break;

  case 47:
#line 383 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_break(compiler, (yylsp[-1]).first_line); }
#line 2047 "y.tab.c" /* yacc.c:1648  */
    break;

  case 49:
#line 388 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    (yyval.list) = (yyvsp[-1].list);
		    if ((yyval.list)) {
		        (yyval.list)->first_line = (yylsp[-2]).first_line;
		        (yyval.list)->last_line = (yylsp[0]).first_line;
		    }
		}
#line 2059 "y.tab.c" /* yacc.c:1648  */
    break;

  case 50:
#line 396 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    ws_error_syntax(compiler, (yylsp[0]).first_line);
		    (yyval.list) = NULL;
		}
#line 2068 "y.tab.c" /* yacc.c:1648  */
    break;

  case 51:
#line 404 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.list) = ws_list_new(compiler); }
#line 2074 "y.tab.c" /* yacc.c:1648  */
    break;

  case 53:
#line 410 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    (yyval.list) = ws_list_new(compiler);
		    ws_list_append(compiler, (yyval.list), (yyvsp[0].stmt));
		}
#line 2083 "y.tab.c" /* yacc.c:1648  */
    break;

  case 54:
#line 415 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_list_append(compiler, (yyvsp[-1].list), (yyvsp[0].stmt)); }
#line 2089 "y.tab.c" /* yacc.c:1648  */
    break;

  case 55:
#line 420 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_variable(compiler, (yylsp[-2]).first_line, (yyvsp[-1].list)); }
#line 2095 "y.tab.c" /* yacc.c:1648  */
    break;

  case 56:
#line 422 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_error_syntax(compiler, (yylsp[0]).first_line); }
#line 2101 "y.tab.c" /* yacc.c:1648  */
    break;

  case 57:
#line 427 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    (yyval.list) = ws_list_new(compiler);
		    ws_list_append(compiler, (yyval.list), (yyvsp[0].vardec));
		}
#line 2110 "y.tab.c" /* yacc.c:1648  */
    break;

  case 58:
#line 432 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_list_append(compiler, (yyvsp[-2].list), (yyvsp[0].vardec)); }
#line 2116 "y.tab.c" /* yacc.c:1648  */
    break;

  case 59:
#line 437 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    char *id = ws_f_strdup(compiler->pool_stree,
					   (yyvsp[-1].identifier));

		    ws_lexer_free_block(compiler, (yyvsp[-1].identifier));
		    if (id == NULL) {
		        ws_error_memory(compiler);
		        (yyval.vardec) = NULL;
		    } else
		        (yyval.vardec) = ws_variable_declaration(compiler, id, (yyvsp[0].expr));
		}
#line 2132 "y.tab.c" /* yacc.c:1648  */
    break;

  case 60:
#line 452 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = NULL; }
#line 2138 "y.tab.c" /* yacc.c:1648  */
    break;

  case 61:
#line 454 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 2144 "y.tab.c" /* yacc.c:1648  */
    break;

  case 62:
#line 459 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_if(compiler, (yylsp[-6]).first_line, (yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 2150 "y.tab.c" /* yacc.c:1648  */
    break;

  case 63:
#line 461 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_if(compiler, (yylsp[-4]).first_line, (yyvsp[-2].expr), (yyvsp[0].stmt), NULL); }
#line 2156 "y.tab.c" /* yacc.c:1648  */
    break;

  case 64:
#line 466 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_while(compiler, (yylsp[-4]).first_line, (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2162 "y.tab.c" /* yacc.c:1648  */
    break;

  case 66:
#line 473 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_for(compiler, (yylsp[-8]).first_line, NULL, (yyvsp[-6].expr), (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2168 "y.tab.c" /* yacc.c:1648  */
    break;

  case 67:
#line 476 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_for(compiler, (yylsp[-9]).first_line, (yyvsp[-6].list), NULL, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].stmt)); }
#line 2174 "y.tab.c" /* yacc.c:1648  */
    break;

  case 68:
#line 481 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.stmt) = ws_stmt_return(compiler, (yylsp[-2]).first_line, (yyvsp[-1].expr)); }
#line 2180 "y.tab.c" /* yacc.c:1648  */
    break;

  case 69:
#line 487 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = NULL; }
#line 2186 "y.tab.c" /* yacc.c:1648  */
    break;

  case 72:
#line 495 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_comma(compiler, (yylsp[-1]).first_line, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2192 "y.tab.c" /* yacc.c:1648  */
    break;

  case 74:
#line 501 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), '=', (yyvsp[0].expr)); }
#line 2198 "y.tab.c" /* yacc.c:1648  */
    break;

  case 75:
#line 503 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tMULA, (yyvsp[0].expr)); }
#line 2204 "y.tab.c" /* yacc.c:1648  */
    break;

  case 76:
#line 505 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tDIVA, (yyvsp[0].expr)); }
#line 2210 "y.tab.c" /* yacc.c:1648  */
    break;

  case 77:
#line 507 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tREMA, (yyvsp[0].expr)); }
#line 2216 "y.tab.c" /* yacc.c:1648  */
    break;

  case 78:
#line 509 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tADDA, (yyvsp[0].expr)); }
#line 2222 "y.tab.c" /* yacc.c:1648  */
    break;

  case 79:
#line 511 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tSUBA, (yyvsp[0].expr)); }
#line 2228 "y.tab.c" /* yacc.c:1648  */
    break;

  case 80:
#line 513 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tLSHIFTA, (yyvsp[0].expr)); }
#line 2234 "y.tab.c" /* yacc.c:1648  */
    break;

  case 81:
#line 515 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tRSSHIFTA, (yyvsp[0].expr)); }
#line 2240 "y.tab.c" /* yacc.c:1648  */
    break;

  case 82:
#line 517 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tRSZSHIFTA, (yyvsp[0].expr)); }
#line 2246 "y.tab.c" /* yacc.c:1648  */
    break;

  case 83:
#line 519 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tANDA, (yyvsp[0].expr)); }
#line 2252 "y.tab.c" /* yacc.c:1648  */
    break;

  case 84:
#line 521 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tXORA, (yyvsp[0].expr)); }
#line 2258 "y.tab.c" /* yacc.c:1648  */
    break;

  case 85:
#line 523 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tORA, (yyvsp[0].expr)); }
#line 2264 "y.tab.c" /* yacc.c:1648  */
    break;

  case 86:
#line 525 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_assign(compiler, (yylsp[-2]).first_line, (yyvsp[-2].identifier), tIDIVA, (yyvsp[0].expr)); }
#line 2270 "y.tab.c" /* yacc.c:1648  */
    break;

  case 88:
#line 531 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_conditional(compiler, (yylsp[-3]).first_line, (yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2276 "y.tab.c" /* yacc.c:1648  */
    break;

  case 90:
#line 537 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_logical(compiler, (yylsp[-1]).first_line, WS_ASM_SCOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2282 "y.tab.c" /* yacc.c:1648  */
    break;

  case 92:
#line 543 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_logical(compiler, (yylsp[-1]).first_line, WS_ASM_SCAND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2288 "y.tab.c" /* yacc.c:1648  */
    break;

  case 94:
#line 549 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2294 "y.tab.c" /* yacc.c:1648  */
    break;

  case 96:
#line 555 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_XOR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2300 "y.tab.c" /* yacc.c:1648  */
    break;

  case 98:
#line 561 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2306 "y.tab.c" /* yacc.c:1648  */
    break;

  case 100:
#line 567 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2312 "y.tab.c" /* yacc.c:1648  */
    break;

  case 101:
#line 569 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_NE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2318 "y.tab.c" /* yacc.c:1648  */
    break;

  case 103:
#line 575 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2324 "y.tab.c" /* yacc.c:1648  */
    break;

  case 104:
#line 577 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2330 "y.tab.c" /* yacc.c:1648  */
    break;

  case 105:
#line 579 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_LE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2336 "y.tab.c" /* yacc.c:1648  */
    break;

  case 106:
#line 581 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_GE, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2342 "y.tab.c" /* yacc.c:1648  */
    break;

  case 108:
#line 587 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_LSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2348 "y.tab.c" /* yacc.c:1648  */
    break;

  case 109:
#line 589 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_RSSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2354 "y.tab.c" /* yacc.c:1648  */
    break;

  case 110:
#line 591 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_B_RSZSHIFT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2360 "y.tab.c" /* yacc.c:1648  */
    break;

  case 112:
#line 597 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_ADD, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2366 "y.tab.c" /* yacc.c:1648  */
    break;

  case 113:
#line 599 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2372 "y.tab.c" /* yacc.c:1648  */
    break;

  case 115:
#line 605 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_MUL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2378 "y.tab.c" /* yacc.c:1648  */
    break;

  case 116:
#line 607 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_DIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2384 "y.tab.c" /* yacc.c:1648  */
    break;

  case 117:
#line 609 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_IDIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2390 "y.tab.c" /* yacc.c:1648  */
    break;

  case 118:
#line 611 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_REM, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2396 "y.tab.c" /* yacc.c:1648  */
    break;

  case 120:
#line 617 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary(compiler, (yylsp[-1]).first_line, WS_ASM_TYPEOF, (yyvsp[0].expr)); }
#line 2402 "y.tab.c" /* yacc.c:1648  */
    break;

  case 121:
#line 619 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary(compiler, (yylsp[-1]).first_line, WS_ASM_ISVALID, (yyvsp[0].expr)); }
#line 2408 "y.tab.c" /* yacc.c:1648  */
    break;

  case 122:
#line 621 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary_var(compiler, (yylsp[-1]).first_line, WS_TRUE, (yyvsp[0].identifier)); }
#line 2414 "y.tab.c" /* yacc.c:1648  */
    break;

  case 123:
#line 623 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary_var(compiler, (yylsp[-1]).first_line, WS_FALSE, (yyvsp[0].identifier)); }
#line 2420 "y.tab.c" /* yacc.c:1648  */
    break;

  case 124:
#line 625 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
                    /* There is no direct way to compile unary `+'.
                     * It doesn't do anything except require type conversion
		     * (section 7.2, 7.3.2), and we do that by converting
		     * it to a binary expression: `UnaryExpression - 0'.
                     * Using `--UnaryExpression' would not be correct because
                     * it might overflow if UnaryExpression is the smallest
                     * possible integer value (see 6.2.7.1).
                     * Using `UnaryExpression + 0' would not be correct
                     * because binary `+' accepts strings, which makes the
		     * type conversion different.
                     */
                    (yyval.expr) = ws_expr_binary(compiler, (yylsp[-1]).first_line, WS_ASM_SUB, (yyvsp[0].expr),
                              ws_expr_const_integer(compiler, (yylsp[-1]).first_line, 0));
		}
#line 2440 "y.tab.c" /* yacc.c:1648  */
    break;

  case 125:
#line 641 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary(compiler, (yylsp[-1]).first_line, WS_ASM_UMINUS, (yyvsp[0].expr)); }
#line 2446 "y.tab.c" /* yacc.c:1648  */
    break;

  case 126:
#line 643 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary(compiler, (yylsp[-1]).first_line, WS_ASM_B_NOT, (yyvsp[0].expr)); }
#line 2452 "y.tab.c" /* yacc.c:1648  */
    break;

  case 127:
#line 645 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_unary(compiler, (yylsp[-1]).first_line, WS_ASM_NOT, (yyvsp[0].expr)); }
#line 2458 "y.tab.c" /* yacc.c:1648  */
    break;

  case 129:
#line 651 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_postfix_var(compiler, (yylsp[-1]).first_line, WS_TRUE, (yyvsp[-1].identifier)); }
#line 2464 "y.tab.c" /* yacc.c:1648  */
    break;

  case 130:
#line 653 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_postfix_var(compiler, (yylsp[-1]).first_line, WS_FALSE, (yyvsp[-1].identifier)); }
#line 2470 "y.tab.c" /* yacc.c:1648  */
    break;

  case 132:
#line 659 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    WsFunctionHash *f = ws_function_hash(compiler, (yyvsp[-1].identifier));

		    /* Add an usage count for the local script function. */
		    if (f)
		      f->usage_count++;

		    (yyval.expr) = ws_expr_call(compiler, (yylsp[-1]).first_line, ' ', NULL, (yyvsp[-1].identifier), (yyvsp[0].list));
		}
#line 2484 "y.tab.c" /* yacc.c:1648  */
    break;

  case 133:
#line 669 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_call(compiler, (yylsp[-1]).first_line, '#', (yyvsp[-3].identifier), (yyvsp[-1].identifier), (yyvsp[0].list)); }
#line 2490 "y.tab.c" /* yacc.c:1648  */
    break;

  case 134:
#line 671 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_call(compiler, (yylsp[-1]).first_line, '.', (yyvsp[-3].identifier), (yyvsp[-1].identifier), (yyvsp[0].list)); }
#line 2496 "y.tab.c" /* yacc.c:1648  */
    break;

  case 135:
#line 676 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_symbol(compiler, (yylsp[0]).first_line, (yyvsp[0].identifier)); }
#line 2502 "y.tab.c" /* yacc.c:1648  */
    break;

  case 136:
#line 678 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_invalid(compiler, (yylsp[0]).first_line); }
#line 2508 "y.tab.c" /* yacc.c:1648  */
    break;

  case 137:
#line 680 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_true(compiler, (yylsp[0]).first_line); }
#line 2514 "y.tab.c" /* yacc.c:1648  */
    break;

  case 138:
#line 682 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_false(compiler, (yylsp[0]).first_line); }
#line 2520 "y.tab.c" /* yacc.c:1648  */
    break;

  case 139:
#line 684 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_integer(compiler, (yylsp[0]).first_line, (yyvsp[0].integer)); }
#line 2526 "y.tab.c" /* yacc.c:1648  */
    break;

  case 140:
#line 686 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_float(compiler, (yylsp[0]).first_line, (yyvsp[0].vfloat)); }
#line 2532 "y.tab.c" /* yacc.c:1648  */
    break;

  case 141:
#line 688 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = ws_expr_const_string(compiler, (yylsp[0]).first_line, (yyvsp[0].string)); }
#line 2538 "y.tab.c" /* yacc.c:1648  */
    break;

  case 142:
#line 690 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2544 "y.tab.c" /* yacc.c:1648  */
    break;

  case 143:
#line 695 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.list) = ws_list_new(compiler); }
#line 2550 "y.tab.c" /* yacc.c:1648  */
    break;

  case 144:
#line 697 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { (yyval.list) = (yyvsp[-1].list); }
#line 2556 "y.tab.c" /* yacc.c:1648  */
    break;

  case 145:
#line 702 "wmlscript/wsgram.y" /* yacc.c:1648  */
    {
		    (yyval.list) = ws_list_new(compiler);
		    ws_list_append(compiler, (yyval.list), (yyvsp[0].expr));
		}
#line 2565 "y.tab.c" /* yacc.c:1648  */
    break;

  case 146:
#line 707 "wmlscript/wsgram.y" /* yacc.c:1648  */
    { ws_list_append(compiler, (yyvsp[-2].list), (yyvsp[0].expr)); }
#line 2571 "y.tab.c" /* yacc.c:1648  */
    break;


#line 2575 "y.tab.c" /* yacc.c:1648  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, compiler, YY_("syntax error"));
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
        yyerror (&yylloc, compiler, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, compiler);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, compiler);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, compiler, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, compiler);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, compiler);
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
#line 710 "wmlscript/wsgram.y" /* yacc.c:1907  */


void
yyerror(YYLTYPE* locp, WsCompiler* compiler, const char* msg)
{
#if WS_DEBUG
  fprintf(stderr, "*** %s:%ld: wsc: %s - this msg will be removed ***\n",
	  global_compiler->input_name, global_compiler->linenum, msg);
#endif /* WS_DEBUG */
}
