/* A Bison parser, made by GNU Bison 2.3-rofi.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3-rofi"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0


/* Substitute the variable and function names.  */
#define yyparse mc99parse
#define yylex   mc99lex
#define yyerror mc99error
#define yylval  mc99lval
#define yychar  mc99char
#define yydebug mc99debug
#define yynerrs mc99nerrs
#define yylloc  mc99lloc



#include "c99-parser.h"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */
#line 64 "c99.y"

static AST ambiguityHandler (YYSTYPE x0, YYSTYPE x1);


/* Line 234 of glr.c.  */
#line 100 "c99-parser.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif


#ifdef __cplusplus
# define YYOPTIONAL_LOC(Name) /* empty */
#else
# define YYOPTIONAL_LOC(Name) Name __attribute__ ((__unused__))
#endif

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  247
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6739

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  210
/* YYNRULES -- Number of rules.  */
#define YYNRULES  624
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1069
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 12
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   396

#define YYTRANSLATE(YYX)						\
  ((YYX <= 0) ? YYEOF :							\
   (unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    73,    74,     2,
      75,    76,    77,    78,    79,    80,    81,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    84,
      85,    86,    87,    88,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    89,     2,    90,    91,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    93,    94,    95,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    11,    14,    16,    19,
      21,    24,    26,    29,    31,    33,    35,    37,    39,    42,
      44,    46,    48,    52,    54,    58,    61,    63,    70,    76,
      78,    82,    84,    86,    91,    98,   107,   118,   131,   132,
     134,   136,   137,   139,   143,   148,   156,   158,   162,   165,
     168,   170,   174,   178,   181,   184,   186,   188,   190,   193,
     197,   200,   203,   205,   207,   211,   214,   217,   219,   221,
     224,   226,   229,   231,   233,   235,   237,   239,   241,   243,
     245,   247,   249,   251,   253,   255,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   281,   284,   287,
     289,   291,   293,   298,   303,   305,   307,   309,   311,   313,
     315,   317,   319,   321,   323,   325,   328,   331,   335,   339,
     341,   345,   347,   350,   353,   356,   360,   364,   368,   373,
     378,   380,   383,   386,   390,   392,   395,   397,   400,   403,
     407,   409,   413,   418,   423,   427,   432,   438,   444,   451,
     458,   463,   469,   473,   478,   483,   487,   489,   492,   494,
     496,   498,   500,   504,   509,   514,   518,   523,   529,   535,
     542,   549,   554,   560,   564,   566,   572,   577,   582,   586,
     588,   591,   595,   597,   599,   603,   605,   608,   610,   613,
     615,   618,   622,   625,   629,   633,   638,   641,   645,   649,
     652,   656,   661,   665,   670,   672,   674,   678,   680,   684,
     686,   690,   693,   695,   698,   702,   706,   709,   711,   715,
     720,   723,   725,   729,   732,   737,   741,   747,   750,   752,
     755,   759,   762,   766,   771,   774,   778,   781,   783,   786,
     788,   793,   797,   799,   802,   805,   809,   811,   813,   815,
     818,   822,   825,   827,   829,   832,   834,   838,   840,   843,
     846,   850,   853,   857,   862,   866,   869,   871,   873,   875,
     877,   879,   881,   883,   885,   887,   889,   893,   898,   902,
     909,   912,   914,   918,   921,   923,   926,   932,   940,   942,
     944,   950,   952,   957,   964,   970,   976,   982,   990,   997,
    1005,  1013,  1022,  1024,  1026,  1029,  1032,  1035,  1039,  1043,
    1048,  1050,  1054,  1056,  1060,  1067,  1074,  1083,  1090,  1093,
    1095,  1097,  1099,  1101,  1106,  1110,  1115,  1119,  1123,  1126,
    1129,  1136,  1144,  1146,  1150,  1152,  1155,  1158,  1161,  1164,
    1169,  1172,  1175,  1180,  1183,  1186,  1189,  1191,  1193,  1195,
    1197,  1199,  1201,  1203,  1208,  1210,  1214,  1218,  1222,  1224,
    1228,  1232,  1234,  1238,  1242,  1244,  1248,  1252,  1256,  1260,
    1264,  1268,  1270,  1274,  1278,  1280,  1284,  1286,  1290,  1292,
    1296,  1298,  1302,  1304,  1308,  1310,  1316,  1321,  1323,  1327,
    1329,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1375,  1377,  1379,  1381,  1384,  1386,  1388,  1391,
    1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1434,
    1439,  1442,  1445,  1446,  1448,  1450,  1452,  1455,  1459,  1464,
    1468,  1470,  1472,  1475,  1480,  1481,  1483,  1485,  1488,  1492,
    1494,  1496,  1498,  1503,  1508,  1511,  1516,  1517,  1519,  1521,
    1525,  1528,  1530,  1532,  1534,  1536,  1538,  1543,  1550,  1552,
    1554,  1556,  1558,  1560,  1563,  1568,  1569,  1571,  1573,  1576,
    1580,  1582,  1584,  1586,  1588,  1592,  1595,  1597,  1601,  1605,
    1608,  1613,  1614,  1616,  1618,  1622,  1625,  1627,  1629,  1631,
    1634,  1639,  1640,  1642,  1644,  1648,  1651,  1653,  1655,  1657,
    1660,  1665,  1666,  1668,  1670,  1674,  1677,  1679,  1681,  1683,
    1685,  1688,  1693,  1694,  1696,  1698,  1702,  1705,  1707,  1709,
    1711,  1714,  1718,  1721,  1726,  1727,  1729,  1733,  1737,  1740,
    1744,  1749,  1750,  1752,  1756,  1759,  1763,  1770,  1775,  1780,
    1785,  1790,  1795,  1800,  1805,  1810,  1817,  1819,  1824,  1826,
    1828,  1830,  1832,  1834,  1836,  1838,  1840,  1842,  1846,  1855,
    1864,  1866,  1868,  1870,  1872,  1875,  1879,  1883,  1887,  1894,
    1898,  1905,  1906,  1908,  1910,  1914,  1917,  1922,  1926,  1928,
    1930,  1934,  1936,  1939,  1941,  1945,  1949,  1953,  1956,  1959,
    1962,  1964,  1967,  1969,  1971,  1973,  1975,  1978,  1982,  1985,
    1987,  1991,  1995,  1998,  2000
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     167,     0,    -1,   169,    -1,   168,    -1,    -1,   115,   279,
      -1,   116,   249,    -1,   116,    -1,   117,   169,    -1,   117,
      -1,   118,   197,    -1,   170,    -1,   169,   170,    -1,   171,
      -1,   232,    -1,   183,    -1,   178,    -1,   172,    -1,   101,
     171,    -1,   283,    -1,    70,    -1,    71,    -1,   104,   173,
      84,    -1,    32,    -1,   173,    79,    32,    -1,   174,   175,
      -1,   175,    -1,   109,    75,    75,   176,    76,    76,    -1,
     109,    75,    75,    76,    76,    -1,   177,    -1,   176,    79,
     177,    -1,    32,    -1,    14,    -1,    32,    75,   263,    76,
      -1,     6,   179,    75,   284,    76,    84,    -1,     6,   179,
      75,   284,    83,   180,    76,    84,    -1,     6,   179,    75,
     284,    83,   180,    83,   180,    76,    84,    -1,     6,   179,
      75,   284,    83,   180,    83,   180,    83,   180,    76,    84,
      -1,    -1,    66,    -1,   181,    -1,    -1,   182,    -1,   181,
      79,   182,    -1,   284,    75,   279,    76,    -1,    89,    32,
      90,   284,    75,   279,    76,    -1,   284,    -1,   187,   202,
      84,    -1,   188,    84,    -1,   202,    84,    -1,    84,    -1,
     185,   202,    84,    -1,   186,   195,   189,    -1,   186,   195,
      -1,   195,   189,    -1,   195,    -1,   186,    -1,   192,    -1,
     186,   192,    -1,   189,   195,   190,    -1,   189,   195,    -1,
     195,   190,    -1,   195,    -1,   190,    -1,   189,   196,   189,
      -1,   189,   196,    -1,   196,   189,    -1,   196,    -1,   191,
      -1,   189,   191,    -1,   192,    -1,   189,   192,    -1,   192,
      -1,   175,    -1,   193,    -1,   194,    -1,    62,    -1,   211,
      -1,    54,    -1,    64,    -1,    39,    -1,    53,    -1,   105,
      -1,   106,    -1,     7,    -1,    49,    -1,    56,    -1,    24,
      -1,   110,    -1,    34,    -1,   196,    -1,   198,    -1,   105,
      -1,   235,    -1,   214,    -1,   201,    -1,   189,   195,   190,
      -1,   189,   195,    -1,   195,   190,    -1,   195,    -1,   199,
      -1,   200,    -1,   107,    75,   279,    76,    -1,   107,    75,
     218,    76,    -1,    32,    -1,    12,    -1,     8,    -1,    53,
      -1,    35,    -1,    39,    -1,    54,    -1,    64,    -1,    25,
      -1,    20,    -1,    65,    -1,   237,    32,    -1,    22,    32,
      -1,   237,   174,    32,    -1,    22,   174,    32,    -1,   203,
      -1,   202,    79,   203,    -1,   205,    -1,   205,   226,    -1,
     205,   204,    -1,   205,   174,    -1,   205,   204,   174,    -1,
     205,   204,   226,    -1,   205,   174,   226,    -1,   205,   204,
     174,   226,    -1,     6,    75,   284,    76,    -1,   212,    -1,
     206,   205,    -1,   174,   212,    -1,   174,   206,   205,    -1,
      77,    -1,    77,   210,    -1,   208,    -1,   206,   207,    -1,
     174,   208,    -1,   174,   206,   207,    -1,   209,    -1,   208,
      75,    76,    -1,   208,    75,   223,    76,    -1,   208,    75,
     221,    76,    -1,   208,    89,    90,    -1,   208,    89,   278,
      90,    -1,   208,    89,   210,   278,    90,    -1,   208,    89,
      56,   278,    90,    -1,   208,    89,    56,   210,   278,    90,
      -1,   208,    89,   210,    56,   278,    90,    -1,   208,    89,
      77,    90,    -1,   208,    89,   210,    77,    90,    -1,    75,
     207,    76,    -1,   213,    75,   223,    76,    -1,   213,    75,
     221,    76,    -1,   213,    75,    76,    -1,   211,    -1,   210,
     211,    -1,    14,    -1,    66,    -1,   108,    -1,   213,    -1,
     212,    75,    76,    -1,   212,    75,   221,    76,    -1,   212,
      75,   223,    76,    -1,   212,    89,    90,    -1,   212,    89,
     278,    90,    -1,   212,    89,   210,   278,    90,    -1,   212,
      89,    56,   278,    90,    -1,   212,    89,    56,   210,   278,
      90,    -1,   212,    89,   210,    56,   278,    90,    -1,   212,
      89,    77,    90,    -1,   212,    89,   210,    77,    90,    -1,
      75,   205,    76,    -1,   260,    -1,    22,    32,    92,   215,
      94,    -1,    22,    92,   215,    94,    -1,    22,    32,    92,
      94,    -1,    22,    92,    94,    -1,   216,    -1,   216,    79,
      -1,   216,    79,   217,    -1,   217,    -1,    32,    -1,    32,
      86,   281,    -1,   197,    -1,   197,   219,    -1,   206,    -1,
     206,   219,    -1,   220,    -1,   174,   206,    -1,   174,   206,
     219,    -1,   174,   220,    -1,    75,   219,    76,    -1,    75,
     223,    76,    -1,   220,    75,   223,    76,    -1,    75,    76,
      -1,   220,    75,    76,    -1,    89,   281,    90,    -1,    89,
      90,    -1,    89,    77,    90,    -1,   220,    89,   278,    90,
      -1,   220,    89,    90,    -1,   220,    89,    77,    90,    -1,
     222,    -1,    32,    -1,   222,    79,    32,    -1,   224,    -1,
     224,    79,    61,    -1,   225,    -1,   224,    79,   225,    -1,
     187,   205,    -1,   187,    -1,   187,   219,    -1,   187,   205,
     174,    -1,   187,   219,   174,    -1,    86,   227,    -1,   278,
      -1,    92,   228,    94,    -1,    92,   228,    79,    94,    -1,
      92,    94,    -1,   227,    -1,   228,    79,   227,    -1,   229,
     227,    -1,   228,    79,   229,   227,    -1,    32,    83,   227,
      -1,   228,    79,    32,    83,   227,    -1,   230,    86,    -1,
     231,    -1,   230,   231,    -1,    89,   281,    90,    -1,    81,
      32,    -1,   187,   207,   234,    -1,   187,   207,   233,   234,
      -1,   207,   234,    -1,   207,   233,   234,    -1,   101,   232,
      -1,   184,    -1,   233,   184,    -1,   248,    -1,   236,    92,
     238,    94,    -1,   236,    92,    94,    -1,   237,    -1,   237,
      32,    -1,   237,   174,    -1,   237,   174,    32,    -1,    58,
      -1,    63,    -1,   239,    -1,   238,   239,    -1,   187,   240,
      84,    -1,   188,    84,    -1,   283,    -1,    84,    -1,   101,
     239,    -1,   241,    -1,   240,    79,   241,    -1,   205,    -1,
     205,   242,    -1,    83,   281,    -1,    32,    83,   281,    -1,
     205,   174,    -1,   205,   174,   242,    -1,    32,   174,    83,
     281,    -1,   174,    83,   281,    -1,    86,   281,    -1,   244,
      -1,   250,    -1,   251,    -1,   245,    -1,   246,    -1,   248,
      -1,   253,    -1,   255,    -1,   257,    -1,   247,    -1,    32,
      83,   243,    -1,    11,   281,    83,   243,    -1,    17,    83,
     243,    -1,    11,   281,    61,   281,    83,   243,    -1,   279,
      84,    -1,   171,    -1,    92,   249,    94,    -1,    92,    94,
      -1,   243,    -1,   249,   243,    -1,    33,    75,   254,    76,
     243,    -1,    33,    75,   254,    76,   252,    21,   243,    -1,
     244,    -1,   251,    -1,    60,    75,   254,    76,   243,    -1,
     279,    -1,   197,   205,    86,   278,    -1,   197,   205,   204,
     174,    86,   278,    -1,   197,   205,   174,    86,   278,    -1,
     197,   205,   204,    86,   278,    -1,    67,    75,   254,    76,
     243,    -1,    19,   243,    67,    75,   279,    76,    84,    -1,
      28,    75,   256,    84,    76,   243,    -1,    28,    75,   256,
     254,    84,    76,   243,    -1,    28,    75,   256,    84,   279,
      76,   243,    -1,    28,    75,   256,   254,    84,   279,    76,
     243,    -1,   246,    -1,   183,    -1,    10,    84,    -1,    15,
      84,    -1,    50,    84,    -1,    50,   279,    84,    -1,    29,
      32,    84,    -1,    29,    77,   279,    84,    -1,   282,    -1,
      75,   279,    76,    -1,   260,    -1,    75,   248,    76,    -1,
      96,    75,   278,    79,   218,    76,    -1,    97,    75,   218,
      79,   259,    76,    -1,    98,    75,   278,    79,   278,    79,
     278,    76,    -1,    99,    75,   218,    79,   218,    76,    -1,
      32,   230,    -1,    32,    -1,   261,    -1,    32,    -1,   258,
      -1,   262,    89,   279,    90,    -1,   262,    75,    76,    -1,
     262,    75,   263,    76,    -1,   262,    81,   260,    -1,   262,
      48,   260,    -1,   262,    47,    -1,   262,    40,    -1,    75,
     218,    76,    92,   228,    94,    -1,    75,   218,    76,    92,
     228,    79,    94,    -1,   278,    -1,   263,    79,   278,    -1,
     262,    -1,    47,   264,    -1,    40,   264,    -1,   265,   266,
      -1,    55,   264,    -1,    55,    75,   218,    76,    -1,   101,
     266,    -1,   100,   264,    -1,   100,    75,   218,    76,    -1,
     102,   266,    -1,   103,   266,    -1,     4,    32,    -1,    77,
      -1,    74,    -1,    78,    -1,    80,    -1,    72,    -1,    95,
      -1,   264,    -1,    75,   218,    76,   266,    -1,   266,    -1,
     267,    77,   266,    -1,   267,    82,   266,    -1,   267,    73,
     266,    -1,   267,    -1,   268,    78,   267,    -1,   268,    80,
     267,    -1,   268,    -1,   269,    36,   268,    -1,   269,    51,
     268,    -1,   269,    -1,   270,    85,   269,    -1,   270,    87,
     269,    -1,   270,    30,   269,    -1,   270,    38,   269,    -1,
     270,   111,   269,    -1,   270,   112,   269,    -1,   270,    -1,
     271,    23,   270,    -1,   271,    43,   270,    -1,   271,    -1,
     272,    74,   271,    -1,   272,    -1,   273,    91,   272,    -1,
     273,    -1,   274,    93,   273,    -1,   274,    -1,   275,     4,
     274,    -1,   275,    -1,   276,    46,   275,    -1,   276,    -1,
     276,    88,   279,    83,   278,    -1,   276,    88,    83,   278,
      -1,   277,    -1,   276,   280,   278,    -1,   278,    -1,   279,
      79,   278,    -1,    86,    -1,    42,    -1,    18,    -1,     3,
      -1,    59,    -1,    37,    -1,    52,    -1,     5,    -1,    45,
      -1,    68,    -1,    41,    -1,   114,    -1,   113,    -1,   277,
      -1,    16,    -1,    44,    -1,    31,    -1,    27,    -1,    26,
      -1,     9,    -1,    13,    -1,   284,    -1,    69,    -1,    57,
      -1,   284,    57,    -1,   285,    -1,   286,    -1,   249,   286,
      -1,   352,    -1,   287,    -1,   290,    -1,   296,    -1,   302,
      -1,   309,    -1,   323,    -1,   318,    -1,   328,    -1,   333,
      -1,   338,    -1,   340,    -1,   345,    -1,   350,    -1,   352,
      -1,   287,    -1,   289,    -1,   344,    -1,   347,    -1,   143,
     156,   291,   134,    -1,   143,   157,   291,   134,    -1,   288,
     295,    -1,   288,   170,    -1,    -1,   292,    -1,   332,    -1,
     293,    -1,   292,   332,    -1,    75,   263,    76,    -1,   155,
      75,   263,    76,    -1,   155,    75,    76,    -1,   155,    -1,
     243,    -1,   297,   295,    -1,   143,   139,   298,   134,    -1,
      -1,   299,    -1,   300,    -1,   299,   300,    -1,   299,    79,
     300,    -1,   301,    -1,   353,    -1,   294,    -1,   131,    75,
     279,    76,    -1,   137,    75,   279,    76,    -1,   303,   255,
      -1,   143,   129,   304,   134,    -1,    -1,   305,    -1,   306,
      -1,   305,    79,   306,    -1,   305,   306,    -1,   307,    -1,
     353,    -1,   314,    -1,   294,    -1,   138,    -1,   147,    75,
     308,    76,    -1,   147,    75,   308,    79,   279,    76,    -1,
     153,    -1,   126,    -1,   130,    -1,   146,    -1,   148,    -1,
     310,   315,    -1,   143,   150,   311,   134,    -1,    -1,   312,
      -1,   313,    -1,   312,   313,    -1,   312,    79,   313,    -1,
     353,    -1,   314,    -1,   294,    -1,   136,    -1,    92,   316,
      94,    -1,   317,   295,    -1,   295,    -1,   316,   317,   295,
      -1,   143,   149,   134,    -1,   319,   295,    -1,   143,   142,
     320,   134,    -1,    -1,   321,    -1,   322,    -1,   321,    79,
     322,    -1,   321,   322,    -1,   353,    -1,   301,    -1,   294,
      -1,   324,   295,    -1,   143,   152,   325,   134,    -1,    -1,
     326,    -1,   327,    -1,   326,    79,   327,    -1,   326,   327,
      -1,   353,    -1,   314,    -1,   294,    -1,   329,   255,    -1,
     143,   140,   330,   134,    -1,    -1,   331,    -1,   332,    -1,
     331,    79,   332,    -1,   331,   332,    -1,   301,    -1,   307,
      -1,   353,    -1,   294,    -1,   334,   315,    -1,   143,   141,
     335,   134,    -1,    -1,   336,    -1,   337,    -1,   336,    79,
     337,    -1,   336,   337,    -1,   301,    -1,   353,    -1,   294,
      -1,   339,   295,    -1,   143,   133,   134,    -1,   341,   295,
      -1,   143,   123,   342,   134,    -1,    -1,   343,    -1,    75,
      32,    76,    -1,   143,   120,   134,    -1,   346,   246,    -1,
     143,   119,   134,    -1,   143,   128,   348,   134,    -1,    -1,
     349,    -1,    75,   355,    76,    -1,   351,   295,    -1,   143,
     138,   134,    -1,   143,   154,    75,   355,    76,   134,    -1,
     144,    75,   355,    76,    -1,   122,    75,   355,    76,    -1,
     127,    75,   355,    76,    -1,   132,    75,   355,    76,    -1,
     151,    75,   355,    76,    -1,   124,    75,   151,    76,    -1,
     124,    75,   135,    76,    -1,   124,    75,   125,    76,    -1,
     145,    75,   354,    83,   355,    76,    -1,   356,    -1,   121,
      75,   355,    76,    -1,    78,    -1,    77,    -1,    80,    -1,
      74,    -1,    91,    -1,    93,    -1,     4,    -1,    46,    -1,
     260,    -1,   355,    79,   260,    -1,   145,    75,   260,    79,
     281,    83,   355,    76,    -1,   145,    75,   354,    79,   281,
      83,   355,    76,    -1,   359,    -1,   357,    -1,   358,    -1,
     357,    -1,   158,   360,    -1,   158,   361,   170,    -1,   158,
     361,   243,    -1,   160,   362,   159,    -1,   160,    75,   365,
      76,   362,   159,    -1,   161,   362,   159,    -1,   161,    75,
     365,    76,   362,   159,    -1,    -1,   363,    -1,   364,    -1,
     363,    79,   364,    -1,   363,   364,    -1,   162,    75,   365,
      76,    -1,   162,    75,    76,    -1,   162,    -1,   366,    -1,
     365,    79,   366,    -1,   367,    -1,   366,   367,    -1,   370,
      -1,    75,   368,    76,    -1,    89,   368,    90,    -1,    92,
     368,    94,    -1,    75,    76,    -1,    89,    90,    -1,    92,
      94,    -1,   369,    -1,   368,   369,    -1,   367,    -1,    79,
      -1,   163,    -1,   371,    -1,   372,   243,    -1,   164,    32,
     373,    -1,   164,    32,    -1,   374,    -1,   373,    79,   374,
      -1,    32,    83,   279,    -1,   165,   375,    -1,   213,    -1,
     375,    89,   278,    90,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1603,  1603,  1608,  1613,  1618,  1622,  1626,  1630,  1634,
    1638,  1648,  1652,  1658,  1662,  1668,  1672,  1677,  1681,  1686,
    1690,  1694,  1701,  1707,  1712,  1721,  1725,  1731,  1735,  1741,
    1745,  1752,  1758,  1764,  1773,  1778,  1784,  1790,  1799,  1802,
    1808,  1813,  1819,  1823,  1829,  1833,  1839,  1847,  1851,  1855,
    1859,  1866,  1872,  1876,  1880,  1884,  1888,  1895,  1899,  1905,
    1909,  1913,  1917,  1921,  1933,  1937,  1941,  1945,  1951,  1955,
    1961,  1965,  1971,  1975,  1980,  1984,  1988,  1993,  1998,  2002,
    2006,  2010,  2015,  2019,  2025,  2029,  2033,  2037,  2042,  2048,
    2054,  2057,  2062,  2068,  2072,  2076,  2091,  2095,  2099,  2103,
    2109,  2113,  2118,  2122,  2129,  2135,  2139,  2143,  2147,  2151,
    2155,  2159,  2163,  2167,  2171,  2177,  2183,  2190,  2198,  2211,
    2215,  2221,  2225,  2230,  2234,  2238,  2242,  2246,  2250,  2257,
    2264,  2268,  2273,  2277,  2283,  2287,  2297,  2301,  2306,  2310,
    2316,  2320,  2326,  2330,  2334,  2338,  2342,  2346,  2352,  2358,
    2364,  2370,  2376,  2382,  2386,  2390,  2398,  2402,  2408,  2412,
    2417,  2423,  2427,  2433,  2437,  2441,  2445,  2449,  2453,  2459,
    2465,  2471,  2477,  2483,  2489,  2496,  2502,  2506,  2512,  2518,
    2524,  2529,  2533,  2539,  2545,  2553,  2557,  2563,  2567,  2571,
    2576,  2580,  2584,  2590,  2594,  2598,  2602,  2608,  2614,  2618,
    2622,  2628,  2632,  2636,  2644,  2649,  2655,  2663,  2667,  2674,
    2678,  2684,  2688,  2692,  2697,  2701,  2707,  2713,  2717,  2721,
    2725,  2731,  2735,  2739,  2745,  2752,  2760,  2770,  2776,  2780,
    2786,  2790,  2798,  2802,  2807,  2811,  2816,  2822,  2826,  2832,
    2842,  2846,  2852,  2856,  2863,  2869,  2879,  2883,  2889,  2893,
    2899,  2903,  2907,  2912,  2917,  2923,  2927,  2933,  2937,  2945,
    2949,  2957,  2964,  2968,  2974,  2980,  2990,  2994,  2998,  3004,
    3008,  3012,  3016,  3020,  3024,  3028,  3035,  3041,  3045,  3050,
    3056,  3067,  3073,  3077,  3083,  3087,  3095,  3102,  3109,  3113,
    3119,  3125,  3129,  3134,  3140,  3146,  3154,  3158,  3162,  3166,
    3170,  3174,  3180,  3184,  3190,  3194,  3198,  3202,  3206,  3213,
    3223,  3227,  3231,  3245,  3249,  3253,  3257,  3261,  3274,  3280,
    3288,  3294,  3300,  3304,  3308,  3312,  3316,  3320,  3324,  3328,
    3333,  3337,  3343,  3348,  3355,  3359,  3363,  3367,  3371,  3375,
    3380,  3384,  3388,  3392,  3396,  3400,  3408,  3412,  3416,  3420,
    3424,  3428,  3434,  3438,  3444,  3448,  3452,  3456,  3462,  3466,
    3470,  3476,  3480,  3484,  3490,  3494,  3498,  3502,  3506,  3511,
    3515,  3521,  3525,  3529,  3535,  3539,  3545,  3549,  3555,  3559,
    3565,  3569,  3575,  3579,  3585,  3589,  3594,  3600,  3604,  3610,
    3614,  3622,  3626,  3630,  3634,  3638,  3642,  3646,  3650,  3654,
    3658,  3662,  3667,  3671,  3677,  3687,  3691,  3695,  3699,  3703,
    3707,  3711,  3715,  3721,  3727,  3731,  3891,  3897,  3901,  3907,
    3911,  3915,  3922,  3926,  3930,  3934,  3938,  3942,  3946,  3950,
    3954,  3958,  3962,  3968,  3972,  3976,  3982,  3986,  3993,  3999,
    4005,  4011,  4018,  4021,  4028,  4032,  4036,  4042,  4048,  4052,
    4056,  4064,  4070,  4076,  4083,  4086,  4092,  4096,  4100,  4106,
    4110,  4114,  4120,  4124,  4130,  4136,  4143,  4146,  4152,  4156,
    4160,  4166,  4170,  4174,  4178,  4184,  4188,  4192,  4198,  4202,
    4206,  4210,  4214,  4220,  4226,  4233,  4236,  4242,  4246,  4250,
    4256,  4260,  4264,  4269,  4275,  4281,  4286,  4291,  4298,  4304,
    4310,  4317,  4320,  4326,  4330,  4334,  4340,  4344,  4348,  4354,
    4360,  4367,  4370,  4376,  4380,  4384,  4390,  4394,  4398,  4404,
    4410,  4417,  4420,  4426,  4430,  4434,  4440,  4444,  4448,  4452,
    4458,  4464,  4471,  4474,  4480,  4484,  4488,  4494,  4498,  4502,
    4508,  4514,  4520,  4526,  4533,  4536,  4542,  4551,  4557,  4563,
    4569,  4576,  4579,  4585,  4591,  4597,  4603,  4609,  4613,  4617,
    4621,  4625,  4629,  4633,  4637,  4641,  4646,  4650,  4656,  4660,
    4664,  4668,  4672,  4676,  4680,  4684,  4690,  4694,  4700,  4705,
    4748,  4752,  4758,  4762,  4770,  4776,  4782,  4788,  4792,  4798,
    4802,  4809,  4812,  4818,  4822,  4826,  4832,  4836,  4840,  4846,
    4852,  4860,  4864,  4870,  4874,  4881,  4888,  4895,  4899,  4903,
    4909,  4913,  4919,  4924,  4930,  4948,  4956,  4961,  4965,  4971,
    4975,  4981,  5002,  5008,  5012
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD_ASSIGN", "ANDAND", "AND_ASSIGN",
  "ASM", "AUTO", "BOOL", "BOOLEAN_LITERAL", "BREAK", "CASE", "CHAR",
  "CHARACTER_LITERAL", "CONST", "CONTINUE", "DECIMAL_LITERAL", "DEFAULT",
  "DIV_ASSIGN", "DO", "DOUBLE", "ELSE", "ENUM", "EQUAL", "EXTERN", "FLOAT",
  "FLOATING_LITERAL", "HEXADECIMAL_FLOAT", "FOR", "GOTO",
  "GREATER_OR_EQUAL", "HEXADECIMAL_LITERAL", "IDENTIFIER", "IF", "INLINE",
  "INT", "LEFT", "LEFT_ASSIGN", "LESS_OR_EQUAL", "LONG", "MINUSMINUS",
  "MOD_ASSIGN", "MUL_ASSIGN", "NOT_EQUAL", "OCTAL_LITERAL", "OR_ASSIGN",
  "OROR", "PLUSPLUS", "PTR_OP", "REGISTER", "RETURN", "RIGHT",
  "RIGHT_ASSIGN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRING_LITERAL",
  "STRUCT", "SUB_ASSIGN", "SWITCH", "ELLIPSIS", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "XOR_ASSIGN", "UNKNOWN_PRAGMA",
  "PP_COMMENT", "PP_TOKEN", "'!'", "'%'", "'&'", "'('", "')'", "'*'",
  "'+'", "','", "'-'", "'.'", "'/'", "':'", "';'", "'<'", "'='", "'>'",
  "'?'", "'['", "']'", "'^'", "'{'", "'|'", "'}'", "'~'", "BUILTIN_VA_ARG",
  "BUILTIN_OFFSETOF", "BUILTIN_CHOOSE_EXPR", "BUILTIN_TYPES_COMPATIBLE_P",
  "ALIGNOF", "EXTENSION", "REAL", "IMAG", "LABEL", "COMPLEX", "IMAGINARY",
  "TYPEOF", "RESTRICT", "ATTRIBUTE", "THREAD", "MAX_OPERATOR",
  "MIN_OPERATOR", "MAX_OPERATOR_ASSIGN", "MIN_OPERATOR_ASSIGN",
  "SUBPARSE_EXPRESSION", "SUBPARSE_STATEMENT", "SUBPARSE_DECLARATION",
  "SUBPARSE_TYPE", "OMP_ATOMIC", "OMP_BARRIER", "OMP_COPYIN",
  "OMP_COPYPRIVATE", "OMP_CRITICAL", "OMP_DEFAULT", "OMP_DEFAULT_CUSTOM",
  "OMP_DYNAMIC", "OMP_FIRSTPRIVATE", "OMP_FLUSH", "OMP_FOR", "OMP_GUIDED",
  "OMP_IF", "OMP_LASTPRIVATE", "OMP_MASTER", "OMP_NEWLINE", "OMP_NONE",
  "OMP_NOWAIT", "OMP_NUM_THREADS", "OMP_ORDERED", "OMP_PARALLEL",
  "OMP_PARALLEL_FOR", "OMP_PARALLEL_SECTIONS", "OMP_PARALLEL_SINGLE",
  "OMP_PRAGMA", "OMP_PRIVATE", "OMP_REDUCTION", "OMP_RUNTIME",
  "OMP_SCHEDULE", "OMP_SCHEDULE_CUSTOM", "OMP_SECTION", "OMP_SECTIONS",
  "OMP_SHARED", "OMP_SINGLE", "OMP_STATIC", "OMP_THREADPRIVATE",
  "OMP_CUSTOM_CLAUSE", "OMP_CUSTOM_DIRECTIVE", "OMP_CUSTOM_CONSTRUCT",
  "PRAGMA_CUSTOM", "PRAGMA_CUSTOM_NEWLINE", "PRAGMA_CUSTOM_DIRECTIVE",
  "PRAGMA_CUSTOM_CONSTRUCT", "PRAGMA_CUSTOM_CLAUSE",
  "PRAGMA_CLAUSE_ARG_TEXT", "CONSTRUCT", "SUBPARSE_SUPERSCALAR_DECLARATOR",
  "$accept", "translation_unit", "subparsing", "declaration_sequence",
  "declaration", "block_declaration", "label_declaration",
  "label_declarator_seq", "attributes", "attribute", "attribute_list",
  "attribute_value", "asm_definition", "volatile_optional",
  "asm_operand_list", "asm_operand_list_nonempty", "asm_operand",
  "simple_declaration", "old_style_parameter",
  "old_style_decl_specifier_seq",
  "nontype_specifier_without_attribute_seq", "decl_specifier_seq",
  "decl_specifier_alone_seq", "nontype_specifier_seq",
  "nontype_specifier_no_end_attrib_seq", "nontype_specifier",
  "nontype_specifier_without_attribute", "storage_class_specifier",
  "function_specifier", "type_specifier", "type_specifier_alone",
  "type_specifier_seq", "simple_type_specifier", "type_name",
  "builtin_types", "elaborated_type_specifier", "init_declarator_list",
  "init_declarator", "asm_specification", "declarator", "ptr_operator",
  "functional_declarator", "functional_direct_declarator",
  "functional_declarator_id", "cv_qualifier_seq", "cv_qualifier",
  "direct_declarator", "declarator_id", "enum_specifier",
  "enumeration_list", "enumeration_list_proper", "enumeration_definition",
  "type_id", "abstract_declarator", "abstract_direct_declarator",
  "identifier_list", "identifier_list_kr", "parameter_type_list",
  "parameter_declaration_list", "parameter_declaration", "initializer",
  "initializer_clause", "initializer_list", "designation",
  "designator_list", "designator", "function_definition",
  "old_style_parameter_list", "function_body", "class_specifier",
  "class_head", "class_key", "member_specification_seq",
  "member_declaration", "member_declarator_list", "member_declarator",
  "constant_initializer", "statement", "no_if_statement",
  "labeled_statement", "expression_statement", "declaration_statement",
  "compound_statement", "statement_seq", "if_statement",
  "if_else_statement", "if_else_eligible_statements",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "primary_expression",
  "offsetof_member_designator", "id_expression", "unqualified_id",
  "postfix_expression", "expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "expression", "assignment_operator",
  "constant_expression", "literal", "unknown_pragma", "string_literal",
  "openmp_construct", "openmp_directive", "omp_custom_directive",
  "omp_custom_construct_line", "omp_custom_construct_statement",
  "omp_custom_construct_declaration", "omp_custom_clause_opt_seq",
  "omp_custom_clause_seq", "omp_custom_parameter_clause",
  "omp_custom_clause", "structured_block", "parallel_construct",
  "parallel_directive", "parallel_clause_seq_opt", "parallel_clause_seq",
  "parallel_clause", "unique_parallel_clause", "for_construct",
  "for_directive", "for_clause_opt_seq", "for_clause_seq", "for_clause",
  "unique_for_clause", "schedule_kind", "sections_construct",
  "sections_directive", "sections_clause_opt_seq", "sections_clause_seq",
  "sections_clause", "nowait_clause", "section_scope", "section_sequence",
  "section_directive", "parallel_single_construct",
  "parallel_single_directive", "parallel_single_clause_opt_seq",
  "parallel_single_clause_seq", "parallel_single_clause",
  "single_construct", "single_directive", "single_clause_opt_seq",
  "single_clause_seq", "single_clause", "parallel_for_construct",
  "parallel_for_directive", "parallel_for_clause_opt_seq",
  "parallel_for_clause_seq", "parallel_for_clause",
  "parallel_sections_construct", "parallel_sections_directive",
  "parallel_sections_clause_opt_seq", "parallel_sections_clause_seq",
  "parallel_sections_clause", "master_construct", "master_directive",
  "critical_construct", "critical_directive", "region_phrase_opt",
  "region_phrase", "barrier_directive", "atomic_construct",
  "atomic_directive", "flush_directive", "flush_vars_opt", "flush_vars",
  "ordered_construct", "ordered_directive", "threadprivate_directive",
  "data_clause", "reduction_operator", "variable_list",
  "user_defined_reduction", "pragma_custom_directive",
  "pragma_custom_construct_declaration",
  "pragma_custom_construct_statement", "pragma_custom_line_directive",
  "pragma_custom_line_construct", "pragma_custom_clause_opt_seq",
  "pragma_custom_clause_seq", "pragma_custom_clause",
  "pragma_clause_arg_list", "pragma_clause_arg", "pragma_clause_arg_item",
  "pragma_clause_arg_item_nested", "pragma_clause_arg_item_nested_item",
  "pragma_clause_arg_text", "custom_construct_statement",
  "custom_construct_header", "custom_construct_parameters_seq",
  "custom_construct_parameter", "superscalar_declarator", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   166,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   171,   171,
     171,   171,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   183,   183,   183,
     183,   184,   185,   185,   185,   185,   185,   186,   186,   187,
     187,   187,   187,   187,   188,   188,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   193,   193,   193,   193,   193,   194,
     195,   195,   195,   196,   196,   196,   197,   197,   197,   197,
     198,   198,   198,   198,   199,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   201,   201,   201,   201,   202,
     202,   203,   203,   203,   203,   203,   203,   203,   203,   204,
     205,   205,   205,   205,   206,   206,   207,   207,   207,   207,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   209,   209,   209,   210,   210,   211,   211,
     211,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   213,   214,   214,   214,   214,   215,
     215,   216,   216,   217,   217,   218,   218,   219,   219,   219,
     219,   219,   219,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   221,   222,   222,   223,   223,   224,
     224,   225,   225,   225,   225,   225,   226,   227,   227,   227,
     227,   228,   228,   228,   228,   228,   228,   229,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   233,   233,   234,
     235,   235,   236,   236,   236,   236,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   240,   240,   241,   241,   241,
     241,   241,   241,   241,   241,   242,   243,   243,   243,   244,
     244,   244,   244,   244,   244,   244,   245,   245,   245,   245,
     246,   247,   248,   248,   249,   249,   250,   251,   252,   252,
     253,   254,   254,   254,   254,   254,   255,   255,   255,   255,
     255,   255,   256,   256,   257,   257,   257,   257,   257,   257,
     258,   258,   258,   258,   258,   258,   258,   258,   259,   259,
     260,   261,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   263,   263,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   265,   265,   265,   265,
     265,   265,   266,   266,   267,   267,   267,   267,   268,   268,
     268,   269,   269,   269,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   272,   272,   273,   273,   274,   274,
     275,   275,   276,   276,   277,   277,   277,   278,   278,   279,
     279,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   281,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   284,   284,   244,   249,   249,   170,
     170,   170,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   286,   286,   287,   288,
     289,   290,   291,   291,   292,   292,   292,   293,   294,   294,
     294,   295,   296,   297,   298,   298,   299,   299,   299,   300,
     300,   300,   301,   301,   302,   303,   304,   304,   305,   305,
     305,   306,   306,   306,   306,   307,   307,   307,   308,   308,
     308,   308,   308,   309,   310,   311,   311,   312,   312,   312,
     313,   313,   313,   314,   315,   316,   316,   316,   317,   318,
     319,   320,   320,   321,   321,   321,   322,   322,   322,   323,
     324,   325,   325,   326,   326,   326,   327,   327,   327,   328,
     329,   330,   330,   331,   331,   331,   332,   332,   332,   332,
     333,   334,   335,   335,   336,   336,   336,   337,   337,   337,
     338,   339,   340,   341,   342,   342,   343,   344,   345,   346,
     347,   348,   348,   349,   350,   351,   352,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   354,   354,   354,   355,   355,   356,   356,
     244,   244,   170,   170,   357,   358,   359,   360,   360,   361,
     361,   362,   362,   363,   363,   363,   364,   364,   364,   365,
     365,   366,   366,   367,   367,   367,   367,   367,   367,   367,
     368,   368,   369,   369,   370,   243,   371,   372,   372,   373,
     373,   374,   168,   375,   375
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     0,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     1,     3,     2,     1,     6,     5,     1,
       3,     1,     1,     4,     6,     8,    10,    12,     0,     1,
       1,     0,     1,     3,     4,     7,     1,     3,     2,     2,
       1,     3,     3,     2,     2,     1,     1,     1,     2,     3,
       2,     2,     1,     1,     3,     2,     2,     1,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       3,     1,     2,     2,     2,     3,     3,     3,     4,     4,
       1,     2,     2,     3,     1,     2,     1,     2,     2,     3,
       1,     3,     4,     4,     3,     4,     5,     5,     6,     6,
       4,     5,     3,     4,     4,     3,     1,     2,     1,     1,
       1,     1,     3,     4,     4,     3,     4,     5,     5,     6,
       6,     4,     5,     3,     1,     5,     4,     4,     3,     1,
       2,     3,     1,     1,     3,     1,     2,     1,     2,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     2,
       3,     4,     3,     4,     1,     1,     3,     1,     3,     1,
       3,     2,     1,     2,     3,     3,     2,     1,     3,     4,
       2,     1,     3,     2,     4,     3,     5,     2,     1,     2,
       3,     2,     3,     4,     2,     3,     2,     1,     2,     1,
       4,     3,     1,     2,     2,     3,     1,     1,     1,     2,
       3,     2,     1,     1,     2,     1,     3,     1,     2,     2,
       3,     2,     3,     4,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     6,
       2,     1,     3,     2,     1,     2,     5,     7,     1,     1,
       5,     1,     4,     6,     5,     5,     5,     7,     6,     7,
       7,     8,     1,     1,     2,     2,     2,     3,     3,     4,
       1,     3,     1,     3,     6,     6,     8,     6,     2,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       2,     2,     4,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     4,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     2,     0,     1,     1,     1,     2,     3,     4,     3,
       1,     1,     2,     4,     0,     1,     1,     2,     3,     1,
       1,     1,     4,     4,     2,     4,     0,     1,     1,     3,
       2,     1,     1,     1,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     2,     4,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     3,     2,     1,     3,     3,     2,
       4,     0,     1,     1,     3,     2,     1,     1,     1,     2,
       4,     0,     1,     1,     3,     2,     1,     1,     1,     2,
       4,     0,     1,     1,     3,     2,     1,     1,     1,     1,
       2,     4,     0,     1,     1,     3,     2,     1,     1,     1,
       2,     3,     2,     4,     0,     1,     3,     3,     2,     3,
       4,     0,     1,     3,     2,     3,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     8,     8,
       1,     1,     1,     1,     2,     3,     3,     3,     6,     3,
       6,     0,     1,     1,     3,     2,     4,     3,     1,     1,
       3,     1,     2,     1,     3,     3,     3,     2,     2,     2,
       1,     2,     1,     1,     1,     1,     2,     3,     2,     1,
       3,     3,     2,     1,     4
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       4,    38,    84,   106,   105,   158,   113,     0,    87,   112,
     321,    89,   108,    80,    85,    81,    78,    86,   246,    76,
     247,    79,   114,   159,   413,    20,    21,     0,   134,    50,
       0,     0,    82,    83,     0,   160,     0,    88,     0,     7,
       9,     0,     0,     0,     0,     0,     3,     2,    11,    13,
      17,     0,    73,    16,    15,     0,     0,     0,    63,    68,
      72,    74,    75,    62,    90,    91,   100,   101,    95,     0,
     119,   121,     0,     0,   136,   140,    77,   130,   161,    94,
      14,    93,     0,   242,   174,   320,    19,   420,     0,   421,
     419,   583,   582,    39,     0,   116,     0,     0,    26,   321,
       0,     0,   135,   156,    18,   236,    23,     0,     0,     0,
       0,   410,   411,   405,   409,   408,   407,     0,   406,     0,
       0,   414,   350,   347,     0,   346,   348,   349,   351,     0,
       0,     0,     0,     0,     0,     0,     0,   322,   312,   334,
     352,     0,   354,   358,   361,   364,   371,   374,   376,   378,
     380,   382,   384,   387,   389,     5,   310,   412,     0,     0,
       0,     0,     0,     0,     0,   321,     0,     0,     0,     0,
       0,   346,     0,     0,     0,     0,     0,   281,     0,     0,
       0,   161,   284,   266,   269,   270,   275,   271,     6,   267,
     268,   272,   273,   274,   312,     0,   416,   417,   434,     0,
     435,   422,     0,   423,     0,   424,     0,   426,     0,   425,
       0,   427,     0,   428,     0,   429,     0,   430,     0,   436,
     431,     0,   437,   432,     0,   433,   581,   580,   615,     0,
       8,   104,    73,     0,    72,    99,    90,    10,     0,   442,
     442,   591,   591,   584,     0,   623,   622,     1,    12,    25,
       0,   138,   132,     0,     0,    48,    69,    72,    60,    90,
      80,    81,    78,    79,    82,     0,    61,    66,     0,    49,
       0,     0,   124,   123,   122,   131,   137,   237,     0,    56,
      57,    55,     0,   234,   239,     0,     0,     0,     0,     0,
       0,   115,   244,   441,     0,     0,   183,   178,     0,   179,
     182,   118,   173,   152,   157,     0,    22,   185,     0,     0,
       0,   345,     0,   336,   335,     0,   338,     0,     0,     0,
       0,     0,     0,     0,     0,   341,   340,   343,   344,   329,
     328,     0,     0,     0,     0,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   394,   398,   393,   396,   401,
     392,   399,     0,   397,   395,   400,   391,     0,   403,   402,
       0,     0,   415,   304,   384,   404,     0,   305,     0,     0,
       0,     0,     0,     0,     0,     0,   306,     0,     0,     0,
     283,     0,     0,     0,   544,   551,   466,     0,     0,   454,
     521,   532,   501,   485,   511,     0,   618,     0,     0,   285,
     418,   280,   451,   440,   452,   464,     0,   483,   499,   509,
     519,   530,   540,   542,   548,   554,   616,    97,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,   450,     0,   443,   445,   529,   526,   527,
     444,   528,   566,     0,     0,   598,     0,   592,   593,     0,
       0,   585,     0,   133,   139,    47,     0,   232,    59,    64,
     120,     0,     0,   216,   217,   127,   125,   126,     0,    58,
      53,    54,   238,   235,   104,   141,   212,     0,     0,   204,
       0,   207,   209,     0,   346,   144,     0,     0,   162,     0,
       0,     0,   346,   165,     0,     0,   155,     0,     0,   253,
     241,     0,     0,     0,     0,   248,   252,   117,     0,   177,
       0,     0,   176,   180,    24,     0,     0,     0,   187,   186,
     189,   103,   102,    32,    31,     0,     0,    29,     0,     0,
       0,   313,   311,     0,     0,     0,     0,     0,   327,   324,
       0,   332,   326,     0,   357,   355,   356,   359,   360,   362,
     363,   367,   368,   365,   366,   369,   370,   372,   373,   375,
     377,   379,   381,   383,     0,     0,   388,   390,     0,     0,
     278,     0,   303,   302,     0,   308,     0,   276,     0,     0,
     291,   307,     0,     0,   282,   549,   547,     0,     0,   545,
       0,     0,   552,   493,   474,     0,   467,   468,   471,   473,
     472,   541,   555,   461,     0,   455,   456,   459,   460,     0,
     522,   523,   539,   537,     0,   533,   534,   538,   508,   507,
       0,   502,   503,   506,   492,     0,   486,   487,   491,   490,
     518,   517,     0,   512,   513,   516,   586,     0,   617,   619,
       0,   496,     0,     0,    96,   576,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     438,   446,   439,     0,     0,     0,   614,     0,   599,   601,
     603,     0,   587,     0,   595,     0,   589,     0,   233,     0,
     321,     0,     0,   220,   221,     0,     0,     0,   228,   128,
      51,    52,     0,     0,   211,   187,   213,   143,     0,   142,
       0,     0,     0,   150,     0,   346,     0,   145,   163,   164,
       0,     0,   171,     0,   346,     0,   166,   154,   153,   254,
     321,     0,     0,   257,     0,   255,   251,   240,   249,     0,
      41,   175,   184,   181,   196,     0,     0,   346,   199,     0,
     190,   192,   188,     0,     0,     0,    28,     0,     0,     0,
     339,     0,   353,     0,     0,     0,     0,   342,   325,     0,
     323,   386,     0,     0,   277,     0,     0,     0,   309,     0,
       0,     0,     0,     0,   543,     0,   550,   465,     0,   470,
     453,     0,   457,   520,     0,   525,   531,     0,   536,   500,
       0,   505,   484,     0,   488,   510,     0,   515,     0,     0,
       0,   494,     0,     0,   495,     0,     0,   447,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   574,   575,
     571,   569,   568,   570,   572,   573,     0,     0,   479,   480,
     481,   482,   478,     0,     0,   449,     0,   607,   613,   612,
       0,   610,   608,     0,   609,     0,   591,     0,   602,   597,
       0,   594,   591,   624,   129,     0,   231,     0,     0,   218,
     223,   227,   229,   190,   214,   215,   206,   208,   210,     0,
     147,     0,   151,   146,     0,   168,     0,   172,   167,     0,
       0,   259,     0,     0,   261,   258,     0,   250,    34,     0,
       0,    40,    42,    46,   193,   194,   200,   198,   191,   197,
       0,   346,   202,     0,     0,    27,    30,     0,     0,   319,
       0,     0,     0,   333,   385,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   266,   268,     0,   290,   296,   546,
     553,   469,   458,   524,   535,   504,   489,   514,   621,   620,
     498,   497,   556,   577,   567,   558,   564,   563,   562,   559,
     462,   560,   463,   557,     0,     0,     0,   476,     0,   561,
     448,   604,   611,   605,   606,     0,   600,   596,     0,   225,
     230,   321,   219,   222,     0,   148,   149,   169,   170,   260,
       0,   264,   265,   262,   256,     0,     0,    41,     0,     0,
     195,   203,   201,    33,     0,   330,   314,   318,   315,     0,
     317,   279,     0,   298,     0,     0,     0,   292,     0,     0,
       0,     0,     0,     0,     0,     0,   588,   590,     0,   224,
     263,     0,    35,     0,    43,     0,   331,     0,   297,   300,
     299,     0,   294,   295,     0,   287,     0,     0,   565,   477,
     226,     0,     0,    41,    44,   316,   301,   293,     0,     0,
       0,    36,     0,   578,   579,     0,     0,    45,    37
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    45,    46,    47,    48,   177,    50,   107,   178,    52,
     536,   537,    53,    94,   900,   901,   902,    54,   277,   278,
     279,   179,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   307,    65,    66,    67,    68,    69,    70,   273,    71,
     180,    73,    74,    75,   102,    76,    77,   181,    79,   298,
     299,   300,   317,   745,   530,   488,   489,   746,   491,   492,
     274,   694,   695,   696,   697,   698,    80,   282,   283,    81,
      82,    83,   514,   515,   734,   735,   895,   412,   183,   184,
     185,   186,   187,   188,   189,   190,   936,   191,   589,   192,
     584,   193,   137,   920,   138,    85,   139,   550,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   195,   370,   376,   156,    86,   157,   196,
     197,   198,   199,   200,    89,   444,   445,   446,   447,   413,
     201,   202,   614,   615,   616,   448,   203,   204,   605,   606,
     607,   449,   843,   205,   206,   635,   636,   637,   609,   417,
     652,   653,   207,   208,   630,   631,   632,   209,   210,   642,
     643,   644,   211,   212,   619,   620,   450,   213,   214,   624,
     625,   626,   215,   216,   217,   218,   598,   599,   219,   220,
     221,   222,   601,   602,   223,   224,   225,   451,   837,   656,
     452,   226,    92,   227,   243,   244,   456,   457,   458,   677,
     678,   849,   850,   851,   680,   228,   229,   648,   649,   246
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -948
static const short int yypact[] =
{
    2390,   -17,  -948,  -948,  -948,  -948,  -948,    55,  -948,  -948,
    1670,  -948,  -948,  1502,  -948,  1606,  2591,  -948,  -948,  -948,
    -948,  2649,  -948,  -948,  -948,  -948,  -948,   106,    18,  -948,
    3454,    46,  2707,  -948,    79,  -948,   196,  -948,  6402,  2057,
    2503,  4610,   550,   462,   315,   358,  -948,  2503,  -948,  -948,
    -948,   106,   415,  -948,  -948,   106,   311,  4610,  -948,  -948,
     731,  -948,  -948,  4904,  4831,  -948,  -948,  -948,  -948,   119,
    -948,    50,   106,  4672,   362,  -948,  -948,   391,   406,  -948,
    -948,  -948,   332,    49,  -948,  -948,  -948,  -948,  2503,  -948,
    -948,  -948,  -948,  -948,   418,   379,    66,    58,  -948,  -948,
     434,   445,    18,  -948,  -948,  -948,  -948,   204,  3349,   467,
     536,  -948,  -948,  -948,  -948,  -948,  -948,  6480,  -948,  6480,
    6558,  -948,  -948,  -948,  2921,  -948,  -948,  -948,  -948,   502,
     516,   521,   527,  6636,  6402,  6402,  6402,  -948,  -948,   961,
    -948,  6402,  -948,   441,   378,   385,   717,   168,   513,   515,
     517,   640,  1347,  -948,  -948,   583,  -948,   613,   603,  6402,
     616,   631,  2170,   645,   258,  4794,   659,  5622,   668,   675,
    3028,   473,  1780,  2814,   939,   462,   703,  -948,   268,   268,
     268,  -948,  -948,  -948,  -948,  -948,  -948,  -948,  2057,  -948,
    -948,  -948,  -948,  -948,   777,   235,  -948,  -948,  -948,  2170,
    -948,  -948,  2170,  -948,    99,  -948,   662,  -948,  2170,  -948,
    2170,  -948,    99,  -948,   662,  -948,  2170,  -948,  2170,  -948,
    -948,  6402,  -948,  -948,  2170,  -948,  -948,  -948,  -948,  2170,
    2503,  -948,  -948,  4610,  -948,  4935,  -948,  -948,   694,  1319,
    1319,   -38,   -32,  -948,  2503,  -948,   689,  -948,  -948,  -948,
     106,   362,   391,   448,  4672,  -948,  -948,   756,  4972,  4867,
    -948,  -948,  -948,  -948,  -948,  4993,  -948,  4993,   268,  -948,
     730,  5700,   -27,   -27,  -948,  -948,  -948,  -948,   268,  4734,
    -948,  5051,  4672,  -948,  -948,  4296,  3540,  4359,  3618,  4422,
    3949,   738,    62,  -948,   755,    81,   748,  -948,   754,   763,
    -948,  -948,  -948,  -948,  -948,   825,  -948,   310,   796,    43,
     131,  -948,  2921,  -948,  -948,  2921,  -948,   807,   812,    98,
    6402,  4610,  6402,  4610,  2921,  -948,  -948,  -948,  -948,  -948,
    -948,   315,  5778,   315,  6402,  -948,  6402,  6402,  6402,  6402,
    6402,  6402,  6402,  6402,  6402,  6402,  6402,  6402,  6402,  6402,
    6402,  6402,  6402,  6402,  6402,  -948,  -948,  -948,  -948,  -948,
    -948,  -948,  6402,  -948,  -948,  -948,  -948,  5856,  -948,  -948,
    6402,  6402,  -948,  -948,   233,  -948,    -4,  -948,  2170,  3469,
     801,  3135,   809,  6402,  2170,  3349,  -948,   474,  3349,  3349,
    -948,  1944,   771,   773,   822,   849,  1616,   805,   813,  1193,
    3532,  1193,  1193,  2313,  2313,  2170,   898,   268,   268,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,  2283,  -948,  -948,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,  -948,  5072,  -948,   315,
    6402,   880,   882,   883,   887,   890,   896,   900,  -948,   904,
     906,   909,   912,   920,   836,  3532,  -948,  -948,  -948,  -948,
    -948,  -948,  -948,   862,   494,   922,   840,   -21,  -948,   494,
     841,  -948,  6402,  -948,  -948,  -948,  4672,  -948,  -948,  4993,
    -948,   755,  5244,  -948,  -948,  -948,   -27,  -948,   559,  -948,
    5109,  5130,  -948,  -948,   273,  -948,   624,  4610,   926,   925,
     929,   928,  -948,  3852,   923,  -948,  3696,   933,  -948,   936,
     940,  3852,   934,  -948,  3774,   937,  -948,   950,   952,  -948,
    -948,  4233,   642,   946,  4012,  -948,  -948,   941,   244,  -948,
     938,  6402,  -948,   999,  -948,  4075,  5934,   310,   310,  -948,
     419,  -948,  -948,  -948,   960,   962,   307,  -948,   963,   964,
    6012,  -948,  -948,   958,   965,   966,   969,   967,  -948,  -948,
     566,  -948,  -948,   395,  -948,  -948,  -948,   498,   512,   638,
     713,   385,   385,   385,   385,   385,   385,   717,   717,   168,
     975,   515,   517,  1047,  6402,   376,  -948,  -948,  6402,  2170,
    -948,   977,  -948,  -948,  3242,  -948,   605,  -948,   268,   980,
     583,  -948,   981,   985,  -948,  -948,  -948,  1032,   932,  -948,
     315,   935,  -948,  -948,  -948,   948,  1416,  -948,  -948,  -948,
    -948,  -948,  -948,  -948,   954,  1497,  -948,  -948,  -948,   956,
    1008,  -948,  -948,  -948,   968,  1774,  -948,  -948,  -948,  -948,
     971,  2497,  -948,  -948,  -948,   973,  1142,  -948,  -948,  -948,
    -948,  -948,   974,  1788,  -948,  -948,  -948,   987,   994,  -948,
    5240,  -948,   -18,  2170,  -948,  -948,   572,   593,   315,   315,
     267,   315,  6402,   315,  6402,   315,   876,   478,   315,  6090,
    -948,  -948,  -948,   281,   247,   373,  -948,   602,   494,  -948,
    -948,   338,  -948,   913,  -948,   636,  -948,   984,  -948,   349,
    1003,  1065,  6402,  -948,  -948,   363,  5700,   466,  -948,  -948,
    -948,  5188,  4154,   624,   989,   792,   989,  -948,  1067,  -948,
    4485,  3852,  1011,  -948,  6402,  1020,  1021,  -948,  -948,  -948,
    3852,  1022,  -948,  6402,  1024,  1025,  -948,  -948,  -948,  -948,
      -9,  6402,   897,    48,   614,  -948,  -948,  -948,  -948,  1034,
      93,  -948,  -948,  -948,  -948,  1033,  1040,  1030,  -948,  1031,
     310,   419,  -948,  4547,  6168,  6402,  -948,  1046,   278,  1041,
    1042,  5544,  -948,  4610,  1091,  6402,  4610,  1044,  -948,  6402,
    -948,  -948,  6402,  1043,  -948,  6402,  6246,  1053,  -948,    60,
    2170,  2170,  2170,  1049,  -948,   650,  -948,  -948,  1616,  -948,
    -948,  1193,  -948,  -948,  3532,  -948,  -948,  1193,  -948,  -948,
    1193,  -948,  -948,  2313,  -948,  -948,  2313,  -948,  6402,  1106,
    1010,  -948,   998,  2170,  -948,  1014,   315,  -948,   660,   673,
    1074,  1075,  1080,   695,   700,   710,   716,   720,  -948,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,  1078,   491,  -948,  -948,
    -948,  -948,  -948,   724,   743,  -948,   762,  -948,  -948,  -948,
     465,  -948,  -948,   820,  -948,   522,   913,   494,  -948,  -948,
     768,  -948,   913,  -948,  -948,  5700,  -948,  1071,  5344,  -948,
    -948,  -948,  -948,   945,   989,   989,  -948,  -948,  -948,  1076,
    -948,  1077,  -948,  -948,  1079,  -948,  1081,  -948,  -948,  6402,
      34,  -948,  6402,  6402,    48,  -948,   642,  -948,  -948,  1132,
     420,  1086,  -948,   284,  -948,  -948,  -948,  -948,  -948,  -948,
    1092,  1082,  -948,  1083,   770,  -948,  -948,   367,  1094,   345,
    1099,  1100,  1102,  -948,  -948,  2170,   779,  2170,   806,  6324,
    6402,   216,   231,  -948,  1159,  1160,  1162,  -948,  -948,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,  -948,  -948,  1105,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,  -948,  -948,  -948,  -948,
    -948,  -948,  -948,  -948,  6402,  6402,   315,  -948,  6402,  -948,
    -948,  -948,  -948,  -948,  -948,  1027,   494,  -948,  1028,  -948,
    -948,  1107,  -948,  -948,  5700,  -948,  -948,  -948,  -948,  -948,
    6402,  -948,  -948,  -948,  -948,  1098,  1108,    93,    93,  6402,
    -948,  -948,  -948,  -948,  5444,  -948,  -948,   345,  -948,  6402,
    -948,  -948,  1109,  -948,  2170,  2170,   827,  -948,  6402,  6402,
     294,  2170,  1112,  1118,   847,   852,  -948,  -948,  5700,  -948,
    -948,   755,  -948,   549,  -948,   856,  -948,  1126,  -948,  -948,
    -948,  2170,  -948,  -948,  6402,  -948,   315,   315,  -948,  -948,
    -948,   287,  1120,    93,  -948,  -948,  -948,  -948,   858,   865,
    6402,  -948,  1135,  -948,  -948,   869,  1124,  -948,  -948
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -948,  -948,  -948,  1173,    68,   479,  -948,  -948,   121,   210,
    -948,   456,  -948,  -948,  -947,  -948,   217,   839,  -277,  -948,
    -948,   276,  -248,   947,    12,   -46,   895,  -948,  -948,  1199,
    1019,   -22,  -948,  -948,  -948,  -948,     7,   949,   443,    25,
      65,     8,  1172,  -948,  -155,    42,   -49,   620,  -948,   930,
    -948,   701,   -90,  -301,  -491,   289,  -948,  -264,  -948,   519,
    -163,  -256,   470,  -814,   308,  -683,  1196,   979,  -221,  -948,
    -948,  -948,  -948,   435,  -948,   339,   343,   -23,   458,  -948,
    -180,  -948,   -28,  1069,  -948,   459,  -948,  -948,  -320,   272,
    -948,  -948,  -948,  -948,     0,  -948,  -948,  -413,   396,  -948,
     -33,   295,   353,   531,   568,   891,   893,   894,   892,   886,
    -147,  -128,   489,   -35,  -948,  -492,  -948,  -242,  -287,  -948,
    -168,    64,    67,  -948,  -948,  1009,  -948,  -948,   488,  -125,
    -948,  -948,  -948,  -948,  -555,  -161,  -948,  -948,  -948,  -948,
    -560,  -392,  -948,  -948,  -948,  -948,  -948,  -583,  -394,  1037,
    -948,   601,  -948,  -948,  -948,  -948,  -603,  -948,  -948,  -948,
    -948,  -520,  -948,  -948,  -948,  -948,  -374,  -948,  -948,  -948,
    -948,  -601,  -948,  -948,  -948,  -948,  -948,  -948,  -948,  -948,
    -948,  -948,  -948,  -948,  -948,  -948,   329,   795,  -948,  -406,
    -948,   375,  -948,  -948,  -948,  1085,  -241,  -948,  -435,  -421,
     398,  -446,   110,  -173,  -948,  -948,  -948,  -948,   468,  -948
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -269
static const short int yytable[] =
{
      84,   460,   252,   155,   608,   482,   529,   518,   679,   638,
     641,   256,   374,   679,   872,   473,   182,   657,   308,   237,
     410,   490,   684,   500,   798,   508,   621,    84,   801,   742,
      84,   375,     5,   467,   749,   101,   751,   454,   685,   194,
      84,   424,   513,   459,    84,   284,   789,    84,   516,    93,
    1033,    84,   100,   804,   984,    84,   270,   578,   683,   271,
     792,   483,   253,   254,    87,    72,   270,    88,   592,   593,
     103,   671,    84,   309,   889,   266,   811,   414,   106,   579,
     276,   291,    36,   418,    23,   419,   773,    95,    84,   319,
     301,   422,    72,   423,   517,    72,   318,   275,   296,   425,
      36,   326,   327,   328,    87,    72,  1062,    88,   335,   475,
     477,    87,    72,   296,    88,   248,   250,   990,   162,   532,
      72,    51,   371,   807,   455,   812,    35,   163,    97,   252,
     455,   496,   387,   504,   893,   319,   271,    72,    99,   380,
     326,   455,   318,    36,   304,   533,   930,    96,    51,   182,
     121,    51,    87,    72,   108,    88,   293,    36,    36,    36,
     297,    51,   194,   534,    36,   409,   169,    36,    51,    36,
     194,    36,   194,   194,   542,   519,    51,   371,    84,    84,
      84,    27,   899,    28,   689,   706,   253,   256,   194,   482,
     984,   349,   272,    51,   785,   100,   944,   945,   268,   194,
     867,   583,   194,   269,   292,   275,   426,   535,   194,    51,
     194,   350,   751,   103,   608,    36,   194,    98,   194,   256,
     946,   256,   538,   410,   194,   539,   284,   752,   941,   194,
      84,   544,   858,   546,   547,   679,   942,    98,   617,   891,
     623,   629,   638,   408,    84,   688,   795,   428,   861,   641,
      84,   232,   818,   819,   284,   823,   846,   825,   464,   827,
     860,   249,   844,   513,   777,    98,   513,   232,    84,   516,
     468,   109,   516,   232,   232,   463,    55,   319,    84,   362,
     319,    98,    98,   305,   318,   478,   947,   318,   306,   319,
     382,   651,   533,    98,    87,    72,   318,    88,   248,   553,
      99,   372,  1018,   554,   555,   556,    55,   249,    87,    72,
     534,    88,   461,   699,   371,    72,    55,  1019,   232,   411,
     739,   367,   673,    55,   872,    36,   848,   740,   103,    90,
     103,   548,   575,   552,   232,   383,   674,   852,   711,   675,
      36,   372,   914,   407,   372,    28,   720,    99,   586,  -104,
     590,    51,  -104,   590,   590,   580,   673,   847,   247,   999,
     848,   587,  1060,   588,    55,    51,   588,   588,   409,    90,
     674,    51,   528,   675,   374,    91,    90,    36,   194,   374,
    1044,   194,   646,   757,   194,   525,   758,    28,   249,    98,
      98,   194,   820,   375,   476,   255,   608,   989,   375,   526,
     991,   992,   821,    36,   752,   194,   372,    84,    84,   638,
     676,   679,   641,   673,   859,    91,   194,    90,   822,    36,
     943,   341,    91,   256,   290,   864,   691,   674,   527,   655,
     675,   374,   100,   463,   692,   256,   342,   285,   284,   654,
     870,   256,   868,   232,   676,   232,  1004,   -26,   673,   908,
     375,   286,   848,   903,   617,   371,   339,   869,   340,   772,
      98,  1005,   674,    91,   623,   675,   287,   854,   232,   232,
     629,   295,  1022,  1023,   371,   232,   415,   232,    98,    49,
     288,   289,   249,    98,   420,   770,    84,     5,    98,   910,
     -26,   232,   -26,   294,   753,   232,   996,   232,  1030,   232,
     232,   676,   249,   997,   -26,  -134,    55,   762,   754,   104,
     302,   704,    84,   313,   336,   314,   316,    98,   337,    49,
      55,   303,   232,   338,   -26,   232,    49,   268,   814,   325,
     858,   232,   465,   232,   232,   103,   676,   733,   304,    23,
     673,   971,   310,   103,   848,   374,   304,   691,  -134,   590,
    -134,   705,   871,   371,   674,   692,   774,   675,   591,    90,
    1024,   486,   588,   486,   375,   486,   512,    49,   311,   673,
     965,   336,   908,    90,   966,   337,   499,   320,   507,   194,
     338,    35,  -134,   674,   374,   336,   675,   351,    84,   337,
     528,   321,   750,   528,   338,   232,   322,   673,   232,   232,
     655,   848,   323,   375,   838,    91,   352,   703,   839,   979,
     353,   674,   983,   779,   675,   975,   974,    98,    98,    91,
      78,   978,   241,   242,   840,  1052,   841,   824,   676,   826,
     617,   842,  1053,   732,   557,   558,   623,   232,   268,   629,
    1058,  1059,   768,   700,   354,   769,   527,    78,   815,   527,
      78,   816,   104,   194,   252,   256,    99,   676,   655,   655,
      78,   655,   371,   655,   245,   655,   836,    78,   655,   817,
     372,    78,   769,   918,   730,    78,   922,   972,   856,   232,
     972,   857,   972,   252,   371,   676,   249,   373,   951,   778,
     232,   232,    78,   896,   559,   560,    98,   232,   897,   702,
     377,    28,    84,    84,   238,    84,   239,   240,    78,    49,
     903,   903,   862,   526,   378,   857,   339,   407,   340,    28,
     381,   232,    98,    49,   232,   731,   940,   100,  1029,   816,
     275,   -70,    84,    36,   385,   406,   954,   249,    98,   816,
     926,   928,   374,   388,  1051,   374,   374,   343,   983,   955,
     389,    36,   816,   304,   416,   344,   -71,   933,   937,   938,
     474,   375,   304,   -70,   375,   375,   903,   705,   873,   429,
     705,   959,  1050,   948,   816,   497,   960,   505,   462,   371,
     194,   194,   194,  -174,   853,   855,   961,   512,   -71,   816,
     512,   339,   962,   340,   232,   371,   963,   408,    98,   816,
     967,   486,   345,   968,   346,   471,   -70,   -70,   -70,   543,
     -70,   545,   121,   194,   -70,   528,   953,   374,   374,   969,
     -70,   551,   816,   703,    99,   874,   703,   875,   347,   348,
    -243,   -71,   -71,   -71,   521,   -71,   375,   375,   970,   -71,
     -70,   769,   523,   374,   977,   -71,  1003,   857,   522,   769,
      78,   890,  -174,  -174,   894,  1012,  -174,   524,   371,   576,
     577,  -174,   375,  -174,    78,   -71,  -174,   702,   581,    28,
      78,   527,   531,    84,   561,   562,   563,   564,   565,   566,
     828,   526,  1014,   540,   604,   371,  -174,   613,   541,   622,
     628,   634,   640,   585,  1016,   673,    84,   597,   463,   848,
     931,    36,  1011,  1041,  1013,   595,   371,   596,    99,   674,
     973,   232,   675,   249,    98,    98,    98,   567,   568,   551,
     232,   733,   829,  1048,   600,   194,   816,   194,  1049,    99,
     647,   371,  1054,  1025,  1063,   371,   234,   816,   705,   611,
      98,  1064,   249,    98,   816,  1067,   729,   612,   371,   738,
     830,   687,   257,   831,   832,   658,   833,   659,   660,   234,
      98,   474,   661,   232,  1035,   662,   655,   834,   280,   835,
     670,   663,   407,   232,    28,   664,   232,    99,   486,   665,
     892,   666,   712,   676,   667,   716,   486,   668,   233,    98,
     721,  1039,  1040,   725,   703,   669,   672,   681,  1045,   682,
     686,   329,   707,   234,   708,   709,    36,   710,   330,   331,
     265,   267,   718,   713,   194,   194,   719,   732,  1056,   234,
     702,   194,    28,   717,   722,  1065,   727,   726,   728,   486,
     736,   296,   741,  -245,   526,   755,   332,   763,   756,   759,
     760,   194,   333,   767,   764,   765,   655,   655,   766,   351,
     334,   354,   775,  1020,    36,   233,   780,   781,   392,   393,
     236,   782,   394,   771,   783,   234,   784,   395,   396,   786,
     808,   233,   397,   809,   863,   455,   259,   398,   399,   400,
     401,   402,   787,    98,   249,   249,   865,   794,   790,   403,
     793,   404,   236,   238,   604,   239,   240,   866,    36,   876,
     249,   880,   796,   613,   249,   799,    98,   802,   805,   904,
     882,   883,   885,   622,   887,   888,   905,   233,   898,   628,
     906,   907,   915,   919,   634,   939,   925,   236,   234,   431,
     432,   640,   433,   761,   761,   434,   761,   929,   647,   435,
     436,   249,    98,   236,   950,   437,   438,   810,   952,   280,
     956,   957,   439,   440,   234,   441,   958,   964,   551,   442,
     257,   980,   234,   443,   995,   998,   985,   986,  1000,   987,
    1006,   988,  1001,  1002,   479,  1008,   234,   280,  1010,  1009,
    -266,  -268,   265,  1021,   371,   474,  1026,  1027,  1031,   236,
    1028,   610,  1032,  1038,   618,  1046,   627,   633,   639,   645,
     879,  1047,  1055,   881,  1061,   265,   469,   234,  1068,   884,
     234,  1066,   886,   230,   916,  1034,   234,   470,   234,   234,
     582,   803,   932,   251,   743,   520,   105,  1007,   481,   878,
     249,   917,   487,   466,   487,   994,   487,   993,   934,   935,
     235,   391,   569,   913,   551,   570,   572,   571,   573,   453,
     474,   421,   236,   813,   921,   976,   258,     0,   923,   233,
     405,   924,   233,   431,   432,     0,   433,     0,   233,   434,
     233,   233,   281,   236,   436,     0,   604,   949,   603,   613,
     234,     0,     0,   234,   234,   622,   439,   440,   628,     0,
       0,   634,     0,   442,   640,     0,     0,   443,   236,     0,
       0,   236,     0,     0,   236,     0,   236,   235,   236,     0,
       0,     0,     0,     0,   431,   432,     0,   433,     0,     0,
     434,     0,     0,   235,   435,   436,     0,     0,     0,     0,
     437,   236,   233,     0,   236,   233,   233,   439,   440,     0,
     236,     0,   236,   236,   442,     0,     0,     0,   443,     0,
     355,     0,   356,     0,   474,     0,     0,   474,     0,     0,
       0,   280,     0,     0,   234,   357,     0,     0,     0,   235,
       0,     0,     0,     0,   265,   234,   234,     0,     0,     0,
       0,     0,   257,     0,   358,     0,     0,     0,   359,   360,
       0,     0,   361,   362,   430,     0,     0,     0,     0,   363,
       0,   610,     0,     0,   236,     0,   364,   236,   236,     0,
     618,     0,     0,     0,     0,   365,     0,     0,     0,  1017,
     627,     0,     0,     0,     0,     0,   633,   701,     0,     0,
       0,   639,   427,   366,     0,   367,     0,     0,   645,     0,
     431,   432,     0,   433,     0,     0,   434,     0,     0,     0,
     435,   436,     0,   281,     0,     0,   437,   438,     0,     0,
     368,   369,     0,   439,   440,     0,   441,     0,     0,     0,
     442,     0,   487,   474,   443,     0,     0,     0,   480,   234,
       0,   281,     0,     0,     0,   236,     0,     0,     0,     0,
       0,     0,     0,   474,     0,   788,     0,     0,  1037,     0,
       0,     0,  -109,     0,     0,     0,   236,  1042,  1043,   -80,
       0,   235,     0,     0,   235,     0,   -80,   474,     0,     0,
     235,     0,   235,   235,     0,     0,   -80,     0,     0,     0,
       0,   233,     0,  1057,   -80,     0,   -80,   431,   432,     0,
     433,   -80,     0,   434,   236,     0,     0,     0,   436,     0,
       0,   -80,   603,     0,   438,   -80,   -80,     0,   -80,     0,
     439,   440,     0,   441,   -80,     0,   -80,   442,   -80,     0,
       0,   443,     0,     0,     0,     0,   791,   -80,   -80,   -80,
       0,   -80,     0,   610,   235,   -80,   618,   235,   235,     0,
       0,   -80,   627,     0,     0,   633,   234,     0,   639,     0,
       0,   645,     0,   236,     0,     0,  -107,   -80,   -80,     0,
     -80,   -80,   -80,   -81,     0,     0,     0,     0,   431,   432,
     -81,   433,     0,     0,   434,     0,     0,     0,   435,   436,
     -81,     0,     0,     0,   437,     0,     0,     0,   -81,     0,
     -81,   439,   440,     0,     0,   -81,     0,     0,   442,   487,
       0,     0,   443,     0,     0,   -81,     0,   487,   234,   -81,
     -81,   234,   -81,     0,     0,   281,     0,     0,   -81,     0,
     -81,     0,   -81,     0,     0,     0,     0,  -104,     0,     0,
       0,   -81,   -81,   -81,  -104,   -81,   258,     0,     0,   -81,
       0,     0,     0,     0,  -104,   -81,     0,     0,     0,     0,
     487,     0,  -104,     0,  -104,     0,     0,     0,     0,  -104,
     233,   -81,   -81,   233,   -81,   -81,   -81,     0,     0,  -104,
       0,   236,     0,  -104,  -104,     0,  -104,     0,     0,   236,
       0,     0,  -104,     0,  -104,     0,  -104,   431,   432,     0,
     433,     0,     0,   434,     0,  -104,  -104,  -104,   436,  -104,
       0,     0,   603,     0,   438,     0,     0,     0,     0,  -104,
     439,   440,     0,   441,     0,     0,     0,   442,     0,     0,
       0,   443,   236,     0,     0,  -104,  -104,     0,  -104,  -104,
    -104,     0,   236,   235,   110,   236,     1,     2,     3,   111,
     158,   159,     4,   112,     5,   160,   113,   161,     0,   162,
       6,     0,     7,     0,     8,     9,   114,   115,   163,   164,
       0,   116,   165,   166,    11,    12,     0,     0,     0,    13,
     117,     0,     0,     0,   118,     0,     0,   119,     0,    14,
     167,     0,     0,    15,    16,   120,    17,   121,    18,     0,
     168,     0,    19,    20,    21,    22,    23,   169,     0,    24,
      25,    26,   122,   797,   123,   170,     0,   171,   126,     0,
     127,     0,     0,     0,    29,     0,     0,   806,     0,     0,
       0,     0,   172,     0,   390,   128,   129,   130,   131,   132,
     133,   173,   135,   136,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,   431,   432,     0,   433,     0,
       0,   434,     0,     0,     0,   435,   436,     0,     0,   431,
     432,   437,   433,     0,     0,   434,     0,     0,   439,   440,
     436,     0,     0,   174,   603,   442,     0,     0,     0,   443,
       0,     0,   439,   440,     0,     0,     0,     0,   175,   442,
       0,     0,     0,   443,   176,     0,     0,     0,   110,     0,
       1,     2,     3,   111,   158,   159,     4,   112,     5,   160,
     113,   161,   235,   162,     6,   235,     7,     0,     8,     9,
     114,   115,   163,   164,     0,   116,   165,   166,    11,    12,
       0,     0,     0,    13,   117,     0,     0,     0,   118,     0,
       0,   119,     0,    14,   167,     0,     0,    15,    16,   120,
      17,   121,    18,     0,   168,     0,    19,    20,    21,    22,
      23,   169,     0,    24,    25,    26,   122,     0,   123,   170,
       0,   171,   126,     0,   127,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,   172,     0,   594,   128,
     129,   130,   131,   132,   133,   173,   135,   136,    31,    32,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,   110,     0,     1,     2,     3,   111,   158,   159,     4,
     112,     5,   160,   113,   161,     0,   162,     6,     0,     7,
       0,     8,     9,   114,   115,   163,   164,   174,   116,   165,
     166,    11,    12,     0,     0,     0,    13,   117,     0,     0,
       0,   118,   175,     0,   119,     0,    14,   167,   176,     0,
      15,    16,   120,    17,   121,    18,     0,   168,     0,    19,
      20,    21,    22,    23,   169,     0,    24,    25,    26,   122,
       0,   123,   170,     0,   171,   126,     0,   127,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,   172,
       0,     0,   128,   129,   130,   131,   132,   133,   173,   135,
     136,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,     0,     0,   110,     0,     1,     2,     3,   111,
     158,   159,     4,   112,     5,   160,   113,   161,     0,   162,
       6,     0,     7,     0,     8,     9,   114,   115,   163,   164,
     174,   116,   165,   166,    11,    12,     0,     0,     0,    13,
     117,     0,     0,     0,   118,   175,     0,   119,     0,    14,
     167,   176,     0,    15,    16,   120,    17,   121,    18,     0,
     168,     0,    19,    20,    21,    22,    23,   169,     0,    24,
      25,    26,   122,     0,   123,   170,     0,   171,   126,     0,
     127,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,   172,     0,     0,   128,   129,   130,   131,   132,
     133,   173,   135,   136,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,   110,     0,     1,
       2,     3,   111,   158,   159,     4,   112,     5,   160,   113,
     161,     0,   162,     6,     0,     7,     0,     8,     9,   114,
     115,   163,   164,   379,   116,   165,   166,    11,    12,     0,
       0,     0,    13,   117,     0,     0,     0,   118,   175,     0,
     119,     0,    14,   167,   176,     0,    15,    16,   120,    17,
     121,    18,     0,   168,     0,    19,    20,    21,    22,    23,
     169,     0,    24,    25,    26,   122,     0,   123,   170,     0,
     171,   126,     0,   127,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,   128,   129,
     130,   131,   132,   133,   173,   135,   136,    31,    32,    33,
      34,    35,    36,    37,     0,     0,     1,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     0,     0,     0,     0,
       6,     0,     7,     0,     8,     9,     0,     0,     0,     0,
       0,     0,    10,     0,    11,    12,   650,     0,     0,    13,
       0,     0,     0,     0,   431,   432,     0,   433,     0,    14,
     434,   175,     0,    15,    16,   436,    17,   176,    18,   603,
       0,     0,    19,    20,    21,    22,    23,   439,   440,    24,
      25,    26,     0,     0,   442,    27,     0,    28,   443,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,    31,    32,    33,    34,    35,    36,
      37,     0,     0,     0,     0,    38,    39,    40,    41,     1,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     0,
       0,     0,     0,     6,     0,     7,     0,     8,     9,     0,
       0,     0,     0,    42,     0,    10,     0,    11,    12,     0,
       0,     0,    13,     0,     0,     0,     0,     0,    43,     0,
       0,     0,    14,     0,     0,    44,    15,    16,     0,    17,
       0,    18,     0,     0,     0,    19,    20,    21,    22,    23,
       0,     0,    24,    25,    26,     0,   800,     0,    27,     0,
      28,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,  -110,     0,     0,     0,     0,     0,     0,   -78,     0,
       0,     0,     0,     0,    30,   -78,     0,    31,    32,    33,
      34,    35,    36,    37,     0,   -78,     0,     0,   431,   432,
       0,   433,     0,   -78,   434,   -78,     0,     0,   435,   436,
     -78,     0,     0,     0,   437,     0,     0,     0,     0,     0,
     -78,   439,   440,     0,   -78,   -78,    42,   -78,   442,  -111,
       0,     0,   443,   -78,     0,   -78,   -79,   -78,     0,     0,
       0,    43,     0,   -79,     0,     0,   -78,   -78,   -78,     0,
     -78,     0,     0,   -79,   -78,     0,     0,     0,     0,     0,
     -78,   -79,     0,   -79,     0,     0,     0,     0,   -79,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -79,   -78,
     -78,   -78,   -79,   -79,     0,   -79,     0,   -92,     0,     0,
       0,   -79,     0,   -79,   -82,   -79,     0,     0,     0,     0,
       0,   -82,     0,     0,   -79,   -79,   -79,     0,   -79,     0,
       0,   -82,   -79,     0,     0,     0,     0,     0,   -79,   -82,
       0,   -82,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -82,   -79,   -79,   -79,
     -82,   -82,     0,   -82,     0,     0,     0,     0,     0,   -82,
       0,   -82,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,     0,   -82,     0,     0,     0,
     -82,     0,     0,     0,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,     0,   -82,   -82,   -82,   110,     0,
       1,     2,     3,   111,     0,     0,     4,   112,     5,     0,
     113,     0,     0,     0,     6,     0,     7,     0,     8,     9,
     114,   115,     0,     0,     0,   116,    10,     0,    11,    12,
       0,     0,     0,    13,   117,     0,     0,     0,   118,     0,
       0,   119,     0,    14,     0,     0,     0,    15,    16,   120,
      17,   121,    18,     0,     0,     0,    19,    20,    21,    22,
      23,     0,     0,    24,    25,    26,   122,     0,   123,   170,
       0,   171,   126,     0,   127,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   173,   135,   136,    31,    32,
      33,    34,    35,    36,    37,   110,     0,     0,     2,     3,
     111,     0,     0,     4,   112,     5,     0,   113,     0,     0,
       0,     6,     0,     7,     0,     8,     9,   114,   115,     0,
       0,     0,   116,    10,     0,    11,    12,     0,     0,     0,
      13,   117,     0,     0,     0,   118,     0,     0,   119,     0,
      14,     0,     0,     0,    15,    16,   120,    17,   121,    18,
       0,     0,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,   122,     0,   123,   124,     0,   125,   126,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,     0,    32,    33,    34,    35,
      36,    37,   110,     0,     0,     2,     3,   111,     0,     0,
       4,   112,     5,     0,   113,     0,     0,     0,     6,     0,
       7,     0,     8,     9,   114,   115,     0,     0,     0,   116,
      10,     0,    11,    12,     0,     0,     0,    13,   117,     0,
       0,     0,   118,     0,     0,   119,     0,    14,     0,     0,
       0,    15,    16,   120,    17,   121,    18,     0,     0,     0,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
     122,     0,   123,   170,     0,   171,   126,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,    32,    33,    34,    35,    36,    37,   110,
       0,     0,     2,     3,   111,     0,     0,     4,   112,     5,
       0,   113,     0,     0,     0,     6,     0,     7,     0,     8,
       9,   114,   115,     0,     0,     0,   116,    10,     0,    11,
      12,     0,     0,     0,    13,   117,     0,     0,     0,   118,
       0,     0,   119,     0,    14,     0,     0,     0,    15,    16,
     120,    17,   121,    18,     0,     0,     0,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,   122,     0,   123,
     170,     0,   171,   126,     0,   127,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     0,
      32,    33,    34,    35,    36,    37,   110,     0,     0,     2,
       3,   111,     0,     0,     4,   112,     5,     0,   113,     0,
       0,     0,     6,     0,     7,     0,     8,     9,   114,   115,
       0,     0,     0,   116,    10,     0,    11,    12,     0,     0,
       0,    13,   117,     0,     0,     0,   118,     0,     0,   119,
       0,    14,     0,     0,     0,    15,    16,   120,    17,   121,
      18,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,     0,     0,   776,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,    32,    33,    34,
      35,    36,    37,   110,     0,     0,     2,     3,   111,     0,
       0,     4,   112,     5,     0,   113,     0,     0,     0,     6,
       0,     7,     0,     8,     9,   114,   115,     0,     0,     0,
     116,    10,     0,    11,    12,     0,     0,     0,    13,   117,
       0,     0,     0,   118,     0,     0,   119,     0,    14,     0,
       0,     0,    15,    16,   120,    17,   121,    18,     0,     0,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,   122,     0,   123,   124,     0,   125,   126,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,     0,    32,    33,    34,    35,    36,    37,
       1,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     6,     0,     7,     0,     8,     9,
       0,     0,     0,     0,     0,     0,    10,     0,    11,    12,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,    15,    16,     0,
      17,     0,    18,     0,     0,     0,    19,    20,    21,    22,
      23,     0,     0,    24,    25,    26,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     5,    30,   113,     0,    31,    32,
      33,    34,    35,    36,    37,     0,   114,   115,     0,     0,
       0,   116,    99,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,   119,   392,     0,
       0,     0,   394,     0,     0,   120,   493,   121,   396,     0,
       0,     0,   397,     0,     0,     0,    23,   398,   399,   400,
     401,   402,   122,     0,   123,   124,     0,   494,   126,   403,
     127,   404,   110,   238,     0,   239,   240,   111,     0,     0,
     495,   112,     5,     0,   113,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   114,   115,     0,     0,    35,   116,
      99,     0,     0,   431,   432,     0,   433,     0,   117,   434,
       0,     0,   118,   435,   436,   119,     0,     0,     0,   437,
     438,     0,     0,   120,   501,   121,   439,   440,     0,   441,
       0,     0,     0,   442,    23,     0,     0,   443,     0,     0,
     122,     0,   123,   124,     0,   502,   126,     0,   127,     0,
     110,     0,     0,     0,     0,   111,     0,     0,   503,   112,
       5,     0,   113,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   114,   115,     0,     0,    35,   116,    99,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,   120,   714,   121,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,   122,     0,
     123,   124,     0,   715,   126,     0,   127,     0,   110,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     5,     0,
     113,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     114,   115,     0,     0,    35,   116,    99,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   120,
     723,   121,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   724,   126,     0,   127,     0,   110,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     5,     0,   113,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   114,   115,
       0,     0,    35,   116,    99,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     2,     3,     0,     0,
      35,     4,     0,     5,     0,     0,     0,     0,     0,     6,
       0,     7,     0,     8,     9,     0,     0,     0,     0,     0,
       0,   231,     0,    11,    12,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,    15,    16,     0,    17,     0,    18,     0,     0,
       0,    19,    20,    21,    22,    23,     0,     0,    24,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     0,     0,
       0,     0,     6,   509,     7,     0,     8,     9,     0,     0,
       0,     0,     0,   510,   231,     0,    11,    12,     0,     0,
     511,    13,     0,     0,    32,    33,    34,    35,    36,    37,
       0,    14,     0,     0,     0,    15,    16,     0,    17,     0,
      18,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,    24,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     0,     0,     0,     0,     6,   509,     7,     0,     8,
       9,     0,     0,     0,     0,     0,   737,   231,     0,    11,
      12,     0,     0,   511,    13,     0,     0,    32,    33,    34,
      35,    36,    37,     0,    14,     0,     0,     0,    15,    16,
       0,    17,     0,    18,     0,     0,     0,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
     525,   744,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     0,   526,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     6,     0,     7,     0,     8,     9,
      32,    33,    34,    35,    36,    37,    10,     0,    11,    12,
       0,     0,     0,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,    15,    16,     0,
      17,     0,    18,     0,     0,     0,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,   702,
     744,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     0,   526,     0,     4,     0,     5,     0,     0,
       0,     0,     0,     6,     0,     7,     0,     8,     9,    32,
      33,    34,    35,    36,    37,   231,     0,    11,    12,     0,
       0,     0,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,     0,    15,    16,     0,    17,
       0,    18,     0,     0,     0,    19,    20,    21,    22,    23,
       0,     0,    24,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     0,     0,     0,     0,     6,   509,     7,     0,
       8,     9,     0,     0,     0,     0,     0,     0,   484,     0,
      11,    12,     0,     0,   511,    13,     0,     0,    32,    33,
      34,    35,    36,    37,     0,    14,     0,     0,     0,    15,
      16,     0,    17,     0,    18,     0,     0,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     2,     3,     0,     0,
       0,     4,   485,     5,     0,     0,     0,     0,     0,     6,
       0,     7,     0,     8,     9,     0,     0,     0,     0,     0,
       0,   484,     0,    11,    12,     0,     0,     0,    13,     0,
       0,    32,    33,    34,    35,    36,    37,     0,    14,     0,
       0,     0,    15,    16,     0,    17,     0,    18,     0,     0,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     2,
       3,     0,     0,     0,     4,   498,     5,     0,     0,     0,
       0,     0,     6,     0,     7,     0,     8,     9,     0,     0,
       0,     0,     0,     0,   484,     0,    11,    12,     0,     0,
       0,    13,     0,     0,    32,    33,    34,    35,    36,    37,
       0,    14,     0,     0,     0,    15,    16,     0,    17,     0,
      18,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,     0,     2,     3,     0,     0,     0,     4,   506,     5,
       0,     0,     0,     0,     0,     6,     0,     7,     0,     8,
       9,     0,     0,     0,     0,     0,     0,   231,     0,    11,
      12,     0,     0,     0,    13,     0,     0,    32,    33,    34,
      35,    36,    37,     0,    14,     0,     0,     0,    15,    16,
       0,    17,     0,    18,     0,     0,   877,    19,    20,    21,
      22,    23,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     0,     0,     0,     0,     6,     0,     7,
       0,     8,     9,     0,     0,     0,     0,     0,     0,   231,
       0,    11,    12,     0,     0,     0,    13,     0,     0,     0,
      32,    33,    34,    35,    36,    37,    14,     0,     0,     0,
      15,    16,     0,    17,     0,    18,     0,     0,     0,    19,
      20,    21,    22,    23,     0,     0,     0,     2,     3,     0,
       0,     0,     4,   909,     5,     0,     0,     0,     0,     0,
       6,     0,     7,     0,     8,     9,     0,     0,     0,     0,
       0,     0,   231,     0,    11,    12,     0,     0,     0,    13,
       0,     0,    32,    33,    34,    35,    36,    37,     0,    14,
       0,     0,     0,    15,    16,     0,    17,     0,    18,     0,
       0,     0,    19,    20,    21,    22,    23,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     0,     0,
       0,     0,     6,     0,     7,     0,     8,     9,     0,     0,
       0,     0,     0,     0,   231,     0,    11,    12,     0,     0,
       0,    13,     0,     0,     0,    32,    33,    34,    35,    36,
      37,    14,     0,     0,     0,    15,    16,     0,    17,     0,
      18,     0,     0,     0,    19,    20,    21,    22,    23,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       0,     0,     0,     0,     6,     0,     7,     0,     8,     9,
       0,     0,     0,     0,   172,     0,   231,     0,    11,    12,
       0,     0,     0,    13,     0,     0,     0,    32,    33,    34,
      35,     0,    37,    14,     0,     0,     0,    15,    16,     0,
      17,     0,    18,     0,     0,     0,    19,    20,    21,    22,
      23,  -104,     0,     0,     0,     0,     0,     0,  -104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -104,     0,
       0,     0,     0,     0,     0,     0,  -104,     0,  -104,     0,
       0,     0,     0,  -104,     0,     0,     0,     0,     2,    32,
      33,    34,    35,  -104,    37,     5,     0,  -104,  -104,     0,
    -104,     0,     0,     0,     0,     8,  -104,     0,  -104,     0,
    -104,     0,     0,     0,     0,    11,     0,     0,     0,  -104,
     260,  -104,     0,     0,     2,     0,     0,   384,     0,     0,
      14,     5,     0,     0,   261,   262,     0,    17,     0,     0,
       0,     8,     0,    19,     0,   263,     0,    23,     0,  -104,
    -104,    11,  -104,  -104,  -104,     0,   260,     0,     0,     0,
       0,     2,     0,     0,     0,   -67,    14,     0,     5,     0,
     261,   262,     0,    17,     0,     0,     0,     0,     8,    19,
       0,   263,     0,    23,     0,     0,   264,    33,    11,    35,
      36,    37,     2,   260,     0,     0,     0,     0,     0,     5,
       0,   -65,     0,    14,     0,     0,     0,   261,   262,     8,
      17,     0,     0,     0,     0,     0,    19,     0,   263,    11,
      23,     0,   264,    33,   260,    35,    36,    37,     0,     2,
       0,     0,     0,     0,    14,     0,     5,     0,   261,   262,
       0,    17,     0,     0,     0,     0,     8,    19,     0,   263,
       2,    23,     0,     0,     0,     0,    11,     5,     0,   264,
      33,   260,    35,    36,    37,     0,     0,     8,     0,     0,
       0,    14,     0,     0,     0,   261,   262,    11,    17,     0,
       0,     0,   260,     0,    19,     0,   263,     0,    23,     0,
     264,    33,    14,    35,    36,    37,   261,   262,     0,    17,
       0,     0,     0,     0,     0,    19,     0,   263,     2,    23,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,   264,    33,     2,
      35,    36,    37,     0,     0,    11,     5,     0,     0,     0,
     260,     0,     0,     0,     0,     0,     8,     0,   264,    33,
      14,    35,    36,    37,   261,   262,    11,    17,     0,     0,
       0,   260,     0,    19,     0,   263,     2,    23,     0,     0,
       0,    14,     0,     5,     0,   261,   262,     0,    17,     0,
       0,     0,     0,     8,    19,     0,   263,     2,    23,     0,
       0,     0,     0,    11,     5,     0,     0,     0,   260,     0,
       0,     0,     0,     0,     8,     0,   264,    33,    14,    35,
      36,    37,   261,   262,    11,    17,     0,     0,     0,   260,
       0,    19,     0,   263,     0,    23,     0,   264,    33,    14,
      35,    36,    37,   261,   262,     0,    17,     0,     0,     0,
       0,     0,    19,     0,   263,     2,    23,     0,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,   264,    33,     0,    35,    36,    37,
       0,     0,    11,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,   264,    33,    14,    35,    36,
      37,   261,   262,     0,    17,     0,     0,     0,   110,     0,
      19,     0,   263,   111,    23,     0,     0,   112,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,   116,   690,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,   264,    33,     0,    35,    36,    37,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   125,   126,     0,   127,   691,     0,     0,     0,     0,
       0,     0,     0,   692,     0,     0,   472,     0,   693,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   110,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,   392,
     113,     0,     0,   394,     0,     0,     0,     0,     0,   396,
     114,   115,     0,   397,     0,   116,   981,     0,   398,   399,
     400,   401,   402,     0,   117,     0,     0,     0,   118,   810,
     403,   119,   404,     0,   238,     0,   239,   240,     0,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   125,   126,     0,   127,   691,     0,     0,     0,     0,
       0,     0,     0,   692,     0,     0,   472,     0,   982,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   110,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,   116,   981,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   125,   126,     0,   127,   691,     0,     0,     0,     0,
       0,     0,     0,   692,     0,     0,   472,     0,  1036,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   110,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   115,     0,     0,     0,   116,   690,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   125,   126,     0,   127,   691,   110,     0,     0,     0,
       0,   111,     0,   692,     0,   112,   472,     0,   113,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   114,   115,
       0,     0,     0,   116,    99,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,   110,     0,   386,     0,     0,   111,
       0,     0,     0,   112,     0,     0,   113,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   114,   115,     0,     0,
       0,   116,    99,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   123,   124,     0,   125,   126,     0,
     127,     0,   110,     0,     0,     0,     0,   111,     0,     0,
       0,   112,   472,     0,   113,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   114,   115,     0,     0,     0,   116,
      99,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,   120,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   123,   124,   549,   125,   126,     0,   127,     0,
     110,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,   113,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   114,   115,     0,     0,     0,   116,    99,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,   120,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
     123,   124,     0,   125,   126,     0,   127,     0,   110,   574,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
     113,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     114,   115,     0,     0,     0,   116,    99,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
       0,   747,   126,     0,   127,     0,   110,     0,     0,     0,
       0,   111,     0,     0,   748,   112,     0,     0,   113,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   114,   115,
       0,     0,     0,   116,    99,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,   110,     0,     0,     0,     0,   111,
       0,     0,     0,   112,   761,     0,   113,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   114,   115,     0,     0,
       0,   116,    99,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   123,   124,   845,   125,   126,     0,
     127,     0,   110,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,   113,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   114,   115,     0,     0,     0,   116,
      99,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,   120,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   123,   124,     0,   911,   126,     0,   127,     0,
     110,     0,     0,     0,     0,   111,     0,     0,   912,   112,
       0,     0,   113,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   114,   115,     0,     0,     0,   116,    99,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,   120,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
     123,   124,   927,   125,   126,     0,   127,     0,   110,     0,
       0,     0,     0,   111,     0,     0,     0,   112,     0,     0,
     113,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     114,   115,     0,     0,     0,   116,    99,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,   118,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,   120,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,   124,
    1015,   125,   126,     0,   127,     0,   110,     0,     0,     0,
       0,   111,     0,     0,     0,   112,     0,     0,   113,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   114,   115,
       0,     0,     0,   116,    99,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,   118,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,   123,   124,     0,   125,
     126,     0,   127,     0,   110,     0,     0,     0,     0,   111,
       0,     0,     0,   112,     0,     0,   113,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   114,   115,     0,     0,
       0,   116,    99,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,   118,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,   120,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,   123,   312,     0,   125,   126,     0,
     127,     0,   110,     0,     0,     0,     0,   111,     0,     0,
       0,   112,     0,     0,   113,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   114,   115,     0,     0,     0,   116,
      99,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   118,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,   120,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,   123,   315,     0,   125,   126,     0,   127,     0,
     110,     0,     0,     0,     0,   111,     0,     0,     0,   112,
       0,     0,   113,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   114,   115,     0,     0,     0,   116,    99,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
     118,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,   120,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
     123,   324,     0,   125,   126,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,   136
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     419,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   395,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   307,     0,   309,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   297,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   305,     0,
       0,     0,     0,     0,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   325,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     315,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   403,     0,   405,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   343,     0,
       0,   407,     0,   409,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   329,   331,     0,     0,   333,     0,     0,     0,
       0,   335,     0,   337,     0,   345,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   411,
       0,   413,     0,     0,   425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   421,     0,   423,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     427,   429,     0,     0,   431,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    21,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,    27,    29,     0,    31,     0,
       0,     0,     0,     0,    33,     0,    35,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    41,    43,
       0,    45,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    53,     0,
      55,    57,    59,    61,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      69,     0,     0,     0,     0,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,    75,
      77,     0,    79,     0,     0,     0,     0,     0,    81,     0,
      83,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    89,    91,     0,    93,     0,     0,     0,    95,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,   101,     0,   103,   105,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     3,     5,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,   115,     0,   117,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,   123,   125,     0,   127,     0,     0,
       0,     0,     0,   129,     0,   131,   157,   133,     0,     0,
       0,     0,     0,   159,     0,     0,   135,   137,   139,     0,
     141,     0,     0,   161,   143,     0,     0,     0,     0,     0,
     145,   163,     0,   165,     0,     0,     0,     0,   167,     0,
       0,     0,     0,     0,     0,     0,   147,   149,   169,   151,
     153,   155,   171,   173,     0,   175,     0,     0,     0,     0,
       0,   177,     0,   179,   205,   181,     0,     0,     0,     0,
       0,   207,     0,     0,   183,   185,   187,     0,   189,     0,
       0,   209,   191,     0,     0,     0,     0,     0,   193,   211,
       0,   213,     0,     0,     0,     0,   215,     0,     0,     0,
       0,     0,     0,     0,   195,   197,   217,   199,   201,   203,
     219,   221,     0,   223,     0,     0,     0,     0,     0,   225,
       0,   227,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   233,   235,     0,   237,     0,     0,     0,
     239,     0,     0,     0,     0,     0,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   245,     0,   247,   249,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,     0,     0,     0,   265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,     0,     0,   317,
     271,   319,     0,     0,   349,     0,     0,     0,     0,     0,
     273,   351,     0,     0,   275,   277,     0,   279,     0,     0,
       0,   353,     0,   281,     0,   283,     0,   285,     0,     0,
       0,   355,     0,   321,     0,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   359,     0,     0,     0,
     361,   363,     0,   365,     0,     0,     0,     0,     0,   367,
       0,   369,     0,   371,     0,     0,   287,   289,     0,   291,
     293,   295,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   373,   375,     0,   377,   379,   381,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   341,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     385,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   389,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   393,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   415,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   321,     0,   321,     0,   321,     0,   321,     0,   321,
       0,   321,     0,   109,     0,   109,     0,   109,     0,   109,
       0,   109,     0,   109,     0,   109,     0,   109,     0,   109,
       0,   109,     0,   109,     0,   109,     0,   109,     0,   109,
       0,   109,     0,   109,     0,   109,     0,   109,     0,   109,
       0,   109,     0,   109,     0,   109,     0,   109,     0,   109,
       0,   107,     0,   107,     0,   107,     0,   107,     0,   107,
       0,   107,     0,   107,     0,   107,     0,   107,     0,   107,
       0,   107,     0,   107,     0,   107,     0,   107,     0,   107,
       0,   107,     0,   107,     0,   107,     0,   107,     0,   107,
       0,   107,     0,   107,     0,   107,     0,   107,     0,   110,
       0,   110,     0,   110,     0,   110,     0,   110,     0,   110,
       0,   110,     0,   110,     0,   110,     0,   110,     0,   110,
       0,   110,     0,   110,     0,   110,     0,   110,     0,   110,
       0,   110,     0,   110,     0,   110,     0,   110,     0,   110,
       0,   110,     0,   110,     0,   110,     0,   111,     0,   111,
       0,   111,     0,   111,     0,   111,     0,   111,     0,   111,
       0,   111,     0,   111,     0,   111,     0,   111,     0,   111,
       0,   111,     0,   111,     0,   111,     0,   111,     0,   111,
       0,   111,     0,   111,     0,   111,     0,   111,     0,   111,
       0,   111,     0,   111,     0,    92,     0,    92,     0,    92,
       0,    92,     0,    92,     0,    92,     0,    92,     0,    92,
       0,    92,     0,    92,     0,    92,     0,    92,     0,    92,
       0,    92,     0,    92,     0,    92,     0,    92,     0,    92,
       0,    92,     0,    92,     0,    92,     0,    92,     0,    92,
       0,    92,     0,    73,     0,    73,     0,    72,     0,    72,
       0,    62,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    90,     0,    90,     0,   161,     0,   334,
       0,   334,     0,   334,     0,   358,     0,   361,     0,   361,
       0,   376,     0,   382,     0,   412,     0,   321,     0,   321,
       0,   321,     0,   346,     0,   346,     0,   346,     0,   312,
       0,   312,     0,   312,     0,   312,     0,   312,     0,   312,
       0,    99,     0,    72,     0,    72,     0,    60,     0,    90,
       0,    90,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    90,     0,    90,     0,    90,     0,    90,
       0,    90,     0,    56,     0,    55,     0,   618,     0,    97,
       0,    53,     0,    54,     0,   205,     0,   205,     0,   359,
       0,   360,     0,   362,     0,   362,     0,   363,     0,   363,
       0,   377,     0,   383,     0,    52,     0,   187,     0,   321,
       0,   339,     0,   342,     0,   190,     0,   288,     0,   289,
       0,   621,     0
};

static const short int yycheck[] =
{
       0,   242,    51,    38,   396,   282,   307,   294,   454,   403,
     404,    57,   159,   459,   697,   271,    39,   430,   108,    41,
     188,   285,   457,   287,   625,   289,   400,    27,   631,   521,
      30,   159,    14,   254,   526,    27,   527,    75,   459,    39,
      40,   221,   290,    75,    44,    73,   606,    47,   290,    66,
     997,    51,    27,   636,   868,    55,     6,    61,    79,    86,
     615,   282,    55,    55,     0,     0,     6,     0,   388,   389,
      28,   445,    72,   108,    83,    63,    94,   202,    32,    83,
      72,    32,   109,   208,    66,   210,   578,    32,    88,   124,
      32,   216,    27,   218,    32,    30,   124,    72,    32,   224,
     109,   134,   135,   136,    40,    40,  1053,    40,   141,   272,
     273,    47,    47,    32,    47,    47,    51,    83,    19,    76,
      55,     0,    79,   643,   162,   143,   108,    28,     7,   178,
     162,   286,   167,   288,    86,   170,    86,    72,    32,   162,
     173,   162,   170,   109,   102,    14,    86,    92,    27,   172,
      57,    30,    88,    88,    75,    88,    88,   109,   109,   109,
      94,    40,   162,    32,   109,   188,    67,   109,    47,   109,
     170,   109,   172,   173,    76,    94,    55,    79,   178,   179,
     180,    75,    89,    77,   471,   486,   179,   233,   188,   466,
    1004,    23,    71,    72,   600,   170,   797,   800,    79,   199,
     692,   381,   202,    84,    83,   180,   229,    76,   208,    88,
     210,    43,   703,   171,   606,   109,   216,     7,   218,   265,
     803,   267,   312,   391,   224,   315,   254,   528,   788,   229,
     230,   321,   678,   323,   324,   681,   791,    27,   399,   731,
     401,   402,   636,   178,   244,   466,   620,   235,   683,   643,
     250,    41,   658,   659,   282,   661,   669,   663,   250,   665,
     681,    51,   668,   511,   584,    55,   514,    57,   268,   511,
     258,    75,   514,    63,    64,   250,     0,   312,   278,    46,
     315,    71,    72,    79,   312,   278,   806,   315,    84,   324,
      32,   416,    14,    83,   230,   230,   324,   230,   230,   334,
      32,    57,    86,   336,   337,   338,    30,    97,   244,   244,
      32,   244,   244,   476,    79,   250,    40,    86,   108,    84,
      76,    88,    75,    47,  1007,   109,    79,    83,   286,     0,
     288,   331,   367,   333,   124,    77,    89,    90,   493,    92,
     109,    57,   755,    75,    57,    77,   501,    32,   383,    76,
     385,   230,    79,   388,   389,   378,    75,    76,     0,    75,
      79,   384,    75,   385,    88,   244,   388,   389,   391,    40,
      89,   250,   307,    92,   521,     0,    47,   109,   378,   526,
      86,   381,   405,    76,   384,    75,    79,    77,   178,   179,
     180,   391,   125,   521,   273,    84,   788,   889,   526,    89,
     892,   893,   135,   109,   705,   405,    57,   407,   408,   803,
     163,   857,   806,    75,    76,    40,   416,    88,   151,   109,
     794,    36,    47,   469,    92,    76,    81,    89,   307,   429,
      92,   578,   407,   408,    89,   481,    51,    75,   466,   427,
     696,   487,    79,   233,   163,   235,    79,    32,    75,   750,
     578,    89,    79,   740,   615,    79,    78,    94,    80,    83,
     250,    94,    89,    88,   625,    92,    75,    94,   258,   259,
     631,    92,   964,   965,    79,   265,   204,   267,   268,     0,
      89,    75,   272,   273,   212,    90,   486,    14,   278,   753,
      75,   281,    77,    75,    75,   285,    76,   287,   990,   289,
     290,   163,   292,    83,    89,    32,   230,   540,    89,    30,
      76,   486,   512,   117,    73,   119,   120,   307,    77,    40,
     244,    76,   312,    82,   109,   315,    47,    79,   653,   133,
     976,   321,    84,   323,   324,   493,   163,   512,   496,    66,
      75,    76,    75,   501,    79,   692,   504,    81,    75,   584,
      77,   486,    86,    79,    89,    89,   579,    92,    84,   230,
     966,   285,   584,   287,   692,   289,   290,    88,    32,    75,
      79,    73,   873,   244,    83,    77,   287,    75,   289,   579,
      82,   108,   109,    89,   731,    73,    92,    74,   588,    77,
     525,    75,   527,   528,    82,   385,    75,    75,   388,   389,
     600,    79,    75,   731,   126,   230,    91,   486,   130,   865,
      93,    89,   868,   588,    92,   856,    94,   407,   408,   244,
       0,   862,   160,   161,   146,    76,   148,   662,   163,   664,
     791,   153,    83,   512,   339,   340,   797,   427,    79,   800,
    1046,  1047,    76,    84,     4,    79,   525,    27,    76,   528,
      30,    79,   173,   653,   703,   701,    32,   163,   658,   659,
      40,   661,    79,   663,    44,   665,   666,    47,   668,    76,
      57,    51,    79,   763,    32,    55,   766,   850,    76,   469,
     853,    79,   855,   732,    79,   163,   476,    84,   813,    84,
     480,   481,    72,    79,   341,   342,   486,   487,    84,    75,
      84,    77,   702,   703,   154,   705,   156,   157,    88,   230,
     997,   998,    76,    89,    83,    79,    78,    75,    80,    77,
      75,   511,   512,   244,   514,    83,    76,   702,   984,    79,
     705,     0,   732,   109,    75,    32,    76,   527,   528,    79,
     775,   776,   889,    75,  1031,   892,   893,    30,  1004,    76,
      75,   109,    79,   711,    92,    38,     0,   780,   781,   782,
     271,   889,   720,    32,   892,   893,  1053,   702,   703,    75,
     705,    76,  1028,   808,    79,   286,    76,   288,    89,    79,
     780,   781,   782,     6,   674,   675,    76,   511,    32,    79,
     514,    78,    76,    80,   584,    79,    76,   732,   588,    79,
      76,   525,    85,    79,    87,    75,    75,    76,    77,   320,
      79,   322,    57,   813,    83,   750,   816,   964,   965,    76,
      89,   332,    79,   702,    32,   704,   705,   706,   111,   112,
      92,    75,    76,    77,    86,    79,   964,   965,    76,    83,
     109,    79,    79,   990,    76,    89,    76,    79,    94,    79,
     230,   730,    75,    76,   733,    76,    79,    32,    79,   370,
     371,    84,   990,    86,   244,   109,    89,    75,    67,    77,
     250,   750,    76,   873,   343,   344,   345,   346,   347,   348,
       4,    89,    76,    76,   396,    79,   109,   399,    76,   401,
     402,   403,   404,    84,   929,    75,   896,    75,   873,    79,
     779,   109,   925,    76,   927,   134,    79,   134,    32,    89,
      90,   701,    92,   703,   704,   705,   706,   349,   350,   430,
     710,   896,    46,    76,    75,   925,    79,   927,    76,    32,
      32,    79,    76,   968,    76,    79,    41,    79,   873,   134,
     730,    76,   732,   733,    79,    76,   511,   134,    79,   514,
      74,   462,    57,    77,    78,    75,    80,    75,    75,    64,
     750,   472,    75,   753,   999,    75,   966,    91,    73,    93,
     134,    75,    75,   763,    77,    75,   766,    32,   702,    75,
      83,    75,   493,   163,    75,   496,   710,    75,    41,   779,
     501,  1014,  1015,   504,   873,    75,   134,    75,  1021,   159,
     159,    40,    76,   108,    79,    76,   109,    79,    47,    48,
      63,    64,    76,    90,  1014,  1015,    76,   896,  1041,   124,
      75,  1021,    77,    90,    90,  1060,    76,    90,    76,   753,
      84,    32,    94,    92,    89,    75,    75,    79,    76,    76,
      76,  1041,    81,    76,    79,    79,  1046,  1047,    79,    74,
      89,     4,    75,   932,   109,   108,    76,    76,   119,   120,
      41,    76,   123,   574,    32,   170,   134,   128,   129,   134,
      83,   124,   133,    79,    90,   162,    57,   138,   139,   140,
     141,   142,   134,   873,   874,   875,    83,    79,   134,   150,
     134,   152,    73,   154,   606,   156,   157,    32,   109,    32,
     890,    90,   134,   615,   894,   134,   896,   134,   134,    76,
      90,    90,    90,   625,    90,    90,    76,   170,    84,   631,
      90,    90,    76,    32,   636,    76,    83,   108,   233,   121,
     122,   643,   124,    92,    92,   127,    92,    84,    32,   131,
     132,   931,   932,   124,   134,   137,   138,   149,   134,   254,
      76,    76,   144,   145,   259,   147,    76,    79,   669,   151,
     265,    90,   267,   155,    32,    79,    90,    90,    76,    90,
      76,    90,    90,    90,   279,    76,   281,   282,    76,    79,
      21,    21,   235,    21,    79,   696,   159,   159,    90,   170,
      83,   396,    84,    84,   399,    83,   401,   402,   403,   404,
     711,    83,    76,   714,    84,   258,   259,   312,    84,   720,
     315,    76,   723,    40,   758,   998,   321,   268,   323,   324,
     381,    79,   779,    51,   523,   295,    30,   919,   281,   710,
    1020,   761,   285,   254,   287,   896,   289,   894,   780,   780,
      41,   172,   351,   754,   755,   352,   354,   353,   362,   240,
     761,   214,   233,   652,   765,   857,    57,    -1,   769,   312,
     175,   772,   315,   121,   122,    -1,   124,    -1,   321,   127,
     323,   324,    73,   254,   132,    -1,   788,   809,   136,   791,
     385,    -1,    -1,   388,   389,   797,   144,   145,   800,    -1,
      -1,   803,    -1,   151,   806,    -1,    -1,   155,   279,    -1,
      -1,   282,    -1,    -1,   285,    -1,   287,   108,   289,    -1,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,    -1,
     127,    -1,    -1,   124,   131,   132,    -1,    -1,    -1,    -1,
     137,   312,   385,    -1,   315,   388,   389,   144,   145,    -1,
     321,    -1,   323,   324,   151,    -1,    -1,    -1,   155,    -1,
       3,    -1,     5,    -1,   865,    -1,    -1,   868,    -1,    -1,
      -1,   466,    -1,    -1,   469,    18,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   427,   480,   481,    -1,    -1,    -1,
      -1,    -1,   487,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,    -1,    45,    46,    75,    -1,    -1,    -1,    -1,    52,
      -1,   606,    -1,    -1,   385,    -1,    59,   388,   389,    -1,
     615,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,   930,
     625,    -1,    -1,    -1,    -1,    -1,   631,   480,    -1,    -1,
      -1,   636,   233,    86,    -1,    88,    -1,    -1,   643,    -1,
     121,   122,    -1,   124,    -1,    -1,   127,    -1,    -1,    -1,
     131,   132,    -1,   254,    -1,    -1,   137,   138,    -1,    -1,
     113,   114,    -1,   144,   145,    -1,   147,    -1,    -1,    -1,
     151,    -1,   525,   984,   155,    -1,    -1,    -1,   279,   584,
      -1,   282,    -1,    -1,    -1,   466,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1004,    -1,    79,    -1,    -1,  1009,    -1,
      -1,    -1,     0,    -1,    -1,    -1,   487,  1018,  1019,     7,
      -1,   312,    -1,    -1,   315,    -1,    14,  1028,    -1,    -1,
     321,    -1,   323,   324,    -1,    -1,    24,    -1,    -1,    -1,
      -1,   584,    -1,  1044,    32,    -1,    34,   121,   122,    -1,
     124,    39,    -1,   127,   525,    -1,    -1,    -1,   132,    -1,
      -1,    49,   136,    -1,   138,    53,    54,    -1,    56,    -1,
     144,   145,    -1,   147,    62,    -1,    64,   151,    66,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    79,    75,    76,    77,
      -1,    79,    -1,   788,   385,    83,   791,   388,   389,    -1,
      -1,    89,   797,    -1,    -1,   800,   701,    -1,   803,    -1,
      -1,   806,    -1,   584,    -1,    -1,     0,   105,   106,    -1,
     108,   109,   110,     7,    -1,    -1,    -1,    -1,   121,   122,
      14,   124,    -1,    -1,   127,    -1,    -1,    -1,   131,   132,
      24,    -1,    -1,    -1,   137,    -1,    -1,    -1,    32,    -1,
      34,   144,   145,    -1,    -1,    39,    -1,    -1,   151,   702,
      -1,    -1,   155,    -1,    -1,    49,    -1,   710,   763,    53,
      54,   766,    56,    -1,    -1,   466,    -1,    -1,    62,    -1,
      64,    -1,    66,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    75,    76,    77,    14,    79,   487,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    24,    89,    -1,    -1,    -1,    -1,
     753,    -1,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,
     763,   105,   106,   766,   108,   109,   110,    -1,    -1,    49,
      -1,   702,    -1,    53,    54,    -1,    56,    -1,    -1,   710,
      -1,    -1,    62,    -1,    64,    -1,    66,   121,   122,    -1,
     124,    -1,    -1,   127,    -1,    75,    76,    77,   132,    79,
      -1,    -1,   136,    -1,   138,    -1,    -1,    -1,    -1,    89,
     144,   145,    -1,   147,    -1,    -1,    -1,   151,    -1,    -1,
      -1,   155,   753,    -1,    -1,   105,   106,    -1,   108,   109,
     110,    -1,   763,   584,     4,   766,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,
      50,    -1,    -1,    53,    54,    55,    56,    57,    58,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    79,    74,    75,    -1,    77,    78,    -1,
      80,    -1,    -1,    -1,    84,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,
      -1,   127,    -1,    -1,    -1,   131,   132,    -1,    -1,   121,
     122,   137,   124,    -1,    -1,   127,    -1,    -1,   144,   145,
     132,    -1,    -1,   143,   136,   151,    -1,    -1,    -1,   155,
      -1,    -1,   144,   145,    -1,    -1,    -1,    -1,   158,   151,
      -1,    -1,    -1,   155,   164,    -1,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   763,    19,    20,   766,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    49,    50,    -1,    -1,    53,    54,    55,
      56,    57,    58,    -1,    60,    -1,    62,    63,    64,    65,
      66,    67,    -1,    69,    70,    71,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,   143,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    44,   158,    -1,    47,    -1,    49,    50,   164,    -1,
      53,    54,    55,    56,    57,    58,    -1,    60,    -1,    62,
      63,    64,    65,    66,    67,    -1,    69,    70,    71,    72,
      -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
     143,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,   158,    -1,    47,    -1,    49,
      50,   164,    -1,    53,    54,    55,    56,    57,    58,    -1,
      60,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    74,    75,    -1,    77,    78,    -1,
      80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,   143,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    44,   158,    -1,
      47,    -1,    49,    50,   164,    -1,    53,    54,    55,    56,
      57,    58,    -1,    60,    -1,    62,    63,    64,    65,    66,
      67,    -1,    69,    70,    71,    72,    -1,    74,    75,    -1,
      77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    -1,    -1,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,   143,    -1,    -1,    39,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,    -1,    49,
     127,   158,    -1,    53,    54,   132,    56,   164,    58,   136,
      -1,    -1,    62,    63,    64,    65,    66,   144,   145,    69,
      70,    71,    -1,    -1,   151,    75,    -1,    77,   155,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,     6,
       7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,   143,    -1,    32,    -1,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,    49,    -1,    -1,   165,    53,    54,    -1,    56,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    69,    70,    71,    -1,    79,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,   101,    14,    -1,   104,   105,   106,
     107,   108,   109,   110,    -1,    24,    -1,    -1,   121,   122,
      -1,   124,    -1,    32,   127,    34,    -1,    -1,   131,   132,
      39,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      49,   144,   145,    -1,    53,    54,   143,    56,   151,     0,
      -1,    -1,   155,    62,    -1,    64,     7,    66,    -1,    -1,
      -1,   158,    -1,    14,    -1,    -1,    75,    76,    77,    -1,
      79,    -1,    -1,    24,    83,    -1,    -1,    -1,    -1,    -1,
      89,    32,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,    49,   108,
     109,   110,    53,    54,    -1,    56,    -1,     0,    -1,    -1,
      -1,    62,    -1,    64,     7,    66,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    75,    76,    77,    -1,    79,    -1,
      -1,    24,    83,    -1,    -1,    -1,    -1,    -1,    89,    32,
      -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,   106,    49,   108,   109,   110,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    -1,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    69,    70,    71,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,    12,    13,    14,    -1,    16,    -1,    -1,
      -1,    20,    -1,    22,    -1,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    34,    35,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,
      49,    -1,    -1,    -1,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,   105,   106,   107,   108,
     109,   110,     4,    -1,    -1,     7,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,
      22,    -1,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,   105,   106,   107,   108,   109,   110,     4,
      -1,    -1,     7,     8,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    -1,    77,    78,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
     105,   106,   107,   108,   109,   110,     4,    -1,    -1,     7,
       8,     9,    -1,    -1,    12,    13,    14,    -1,    16,    -1,
      -1,    -1,    20,    -1,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,   105,   106,   107,
     108,   109,   110,     4,    -1,    -1,     7,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    16,    -1,    -1,    -1,    20,
      -1,    22,    -1,    24,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    34,    35,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    -1,    77,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,   105,   106,   107,   108,   109,   110,
       6,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    69,    70,    71,    -1,    -1,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    14,   101,    16,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,   119,    -1,
      -1,    -1,   123,    -1,    -1,    55,    56,    57,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    66,   138,   139,   140,
     141,   142,    72,    -1,    74,    75,    -1,    77,    78,   150,
      80,   152,     4,   154,    -1,   156,   157,     9,    -1,    -1,
      90,    13,    14,    -1,    16,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    26,    27,    -1,    -1,   108,    31,
      32,    -1,    -1,   121,   122,    -1,   124,    -1,    40,   127,
      -1,    -1,    44,   131,   132,    47,    -1,    -1,    -1,   137,
     138,    -1,    -1,    55,    56,    57,   144,   145,    -1,   147,
      -1,    -1,    -1,   151,    66,    -1,    -1,   155,    -1,    -1,
      72,    -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    90,    13,
      14,    -1,    16,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    26,    27,    -1,    -1,   108,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    -1,    77,    78,    -1,    80,    -1,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    14,    -1,
      16,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      26,    27,    -1,    -1,   108,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    -1,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    13,    14,    -1,    16,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    26,    27,
      -1,    -1,   108,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     7,     8,    -1,    -1,
     108,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    -1,    -1,    69,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    20,    84,    22,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    94,    32,    -1,    34,    35,    -1,    -1,
     101,    39,    -1,    -1,   105,   106,   107,   108,   109,   110,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    69,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    20,    84,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    94,    32,    -1,    34,
      35,    -1,    -1,   101,    39,    -1,    -1,   105,   106,   107,
     108,   109,   110,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    58,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,     8,    -1,    89,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,
     105,   106,   107,   108,   109,   110,    32,    -1,    34,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       7,     8,    -1,    89,    -1,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,   105,
     106,   107,   108,   109,   110,    32,    -1,    34,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      -1,    -1,    69,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    20,    84,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    -1,    -1,   101,    39,    -1,    -1,   105,   106,
     107,   108,   109,   110,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    12,    76,    14,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,    -1,
      -1,   105,   106,   107,   108,   109,   110,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,     7,
       8,    -1,    -1,    -1,    12,    76,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    39,    -1,    -1,   105,   106,   107,   108,   109,   110,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,     7,     8,    -1,    -1,    -1,    12,    76,    14,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    -1,    -1,    -1,    39,    -1,    -1,   105,   106,   107,
     108,   109,   110,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
     105,   106,   107,   108,   109,   110,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    58,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    12,    76,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    -1,   105,   106,   107,   108,   109,   110,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    -1,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    -1,    -1,
      -1,    39,    -1,    -1,    -1,   105,   106,   107,   108,   109,
     110,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      58,    -1,    -1,    -1,    62,    63,    64,    65,    66,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    92,    -1,    32,    -1,    34,    35,
      -1,    -1,    -1,    39,    -1,    -1,    -1,   105,   106,   107,
     108,    -1,   110,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    58,    -1,    -1,    -1,    62,    63,    64,    65,
      66,     7,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,     7,   105,
     106,   107,   108,    49,   110,    14,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    24,    62,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    75,
      39,    77,    -1,    -1,     7,    -1,    -1,    83,    -1,    -1,
      49,    14,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    24,    -1,    62,    -1,    64,    -1,    66,    -1,   105,
     106,    34,   108,   109,   110,    -1,    39,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    -1,    84,    49,    -1,    14,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    24,    62,
      -1,    64,    -1,    66,    -1,    -1,   105,   106,    34,   108,
     109,   110,     7,    39,    -1,    -1,    -1,    -1,    -1,    14,
      -1,    84,    -1,    49,    -1,    -1,    -1,    53,    54,    24,
      56,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    34,
      66,    -1,   105,   106,    39,   108,   109,   110,    -1,     7,
      -1,    -1,    -1,    -1,    49,    -1,    14,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    24,    62,    -1,    64,
       7,    66,    -1,    -1,    -1,    -1,    34,    14,    -1,   105,
     106,    39,   108,   109,   110,    -1,    -1,    24,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    34,    56,    -1,
      -1,    -1,    39,    -1,    62,    -1,    64,    -1,    66,    -1,
     105,   106,    49,   108,   109,   110,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    64,     7,    66,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,   105,   106,     7,
     108,   109,   110,    -1,    -1,    34,    14,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    24,    -1,   105,   106,
      49,   108,   109,   110,    53,    54,    34,    56,    -1,    -1,
      -1,    39,    -1,    62,    -1,    64,     7,    66,    -1,    -1,
      -1,    49,    -1,    14,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    24,    62,    -1,    64,     7,    66,    -1,
      -1,    -1,    -1,    34,    14,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    24,    -1,   105,   106,    49,   108,
     109,   110,    53,    54,    34,    56,    -1,    -1,    -1,    39,
      -1,    62,    -1,    64,    -1,    66,    -1,   105,   106,    49,
     108,   109,   110,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    64,     7,    66,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,   105,   106,    -1,   108,   109,   110,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,    49,   108,   109,
     110,    53,    54,    -1,    56,    -1,    -1,    -1,     4,    -1,
      62,    -1,    64,     9,    66,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,   105,   106,    -1,   108,   109,   110,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,   119,
      16,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,   129,
      26,    27,    -1,   133,    -1,    31,    32,    -1,   138,   139,
     140,   141,   142,    -1,    40,    -1,    -1,    -1,    44,   149,
     150,    47,   152,    -1,   154,    -1,   156,   157,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    81,     4,    -1,    -1,    -1,
      -1,     9,    -1,    89,    -1,    13,    92,    -1,    16,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,     4,    -1,    84,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    -1,    77,    78,    -1,
      80,    -1,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    13,    92,    -1,    16,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    -1,    80,    -1,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    -1,    77,    78,    -1,    80,    -1,     4,    83,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    -1,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    90,    13,    -1,    -1,    16,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    92,    -1,    16,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    78,    -1,
      80,    -1,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    90,    13,
      -1,    -1,    16,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    78,    -1,    80,    -1,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,
      16,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    78,    -1,    80,    -1,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    -1,    16,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    -1,    77,    78,    -1,
      80,    -1,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    13,    -1,    -1,    16,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    13,
      -1,    -1,    16,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    -1,    77,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,     6,     7,     8,    12,    14,    20,    22,    24,    25,
      32,    34,    35,    39,    49,    53,    54,    56,    58,    62,
      63,    64,    65,    66,    69,    70,    71,    75,    77,    84,
     101,   104,   105,   106,   107,   108,   109,   110,   115,   116,
     117,   118,   143,   158,   165,   167,   168,   169,   170,   171,
     172,   174,   175,   178,   183,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   198,   199,   200,   201,   202,
     203,   205,   206,   207,   208,   209,   211,   212,   213,   214,
     232,   235,   236,   237,   260,   261,   283,   287,   288,   290,
     352,   357,   358,    66,   179,    32,    92,   174,   175,    32,
     205,   207,   210,   211,   171,   232,    32,   173,    75,    75,
       4,     9,    13,    16,    26,    27,    31,    40,    44,    47,
      55,    57,    72,    74,    75,    77,    78,    80,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   258,   260,   262,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   282,   284,    10,    11,
      15,    17,    19,    28,    29,    32,    33,    50,    60,    67,
      75,    77,    92,   101,   143,   158,   164,   171,   174,   187,
     206,   213,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   253,   255,   257,   260,   279,   285,   286,   287,   288,
     289,   296,   297,   302,   303,   309,   310,   318,   319,   323,
     324,   328,   329,   333,   334,   338,   339,   340,   341,   344,
     345,   346,   347,   350,   351,   352,   357,   359,   371,   372,
     169,    32,   175,   189,   192,   195,   196,   197,   154,   156,
     157,   160,   161,   360,   361,   213,   375,     0,   170,   175,
     206,   208,   212,   202,   207,    84,   191,   192,   195,   196,
      39,    53,    54,    64,   105,   189,   190,   189,    79,    84,
       6,    86,   174,   204,   226,   205,   207,   184,   185,   186,
     192,   195,   233,   234,   248,    75,    89,    75,    89,    75,
      92,    32,   174,   170,    75,    92,    32,    94,   215,   216,
     217,    32,    76,    76,   211,    79,    84,   197,   218,   279,
      75,    32,    75,   264,   264,    75,   264,   218,   248,   279,
      75,    75,    75,    75,    75,   264,   266,   266,   266,    40,
      47,    48,    75,    81,    89,   266,    73,    77,    82,    78,
      80,    36,    51,    30,    38,    85,    87,   111,   112,    23,
      43,    74,    91,    93,     4,     3,     5,    18,    37,    41,
      42,    45,    46,    52,    59,    68,    86,    88,   113,   114,
     280,    79,    57,    84,   276,   277,   281,    84,    83,   143,
     243,    75,    32,    77,    83,    75,    84,   279,    75,    75,
      94,   249,   119,   120,   123,   128,   129,   133,   138,   139,
     140,   141,   142,   150,   152,   361,    32,    75,   206,   243,
     286,    84,   243,   295,   295,   255,    92,   315,   295,   295,
     255,   315,   295,   295,   246,   295,   243,   195,   190,    75,
      75,   121,   122,   124,   127,   131,   132,   137,   138,   144,
     145,   147,   151,   155,   291,   292,   293,   294,   301,   307,
     332,   353,   356,   291,    75,   162,   362,   363,   364,    75,
     362,   170,    89,   205,   207,    84,   233,   234,   190,   189,
     203,    75,    92,   227,   278,   226,   174,   226,   202,   192,
     195,   189,   184,   234,    32,    76,   187,   189,   221,   222,
     223,   224,   225,    56,    77,    90,   210,   278,    76,   221,
     223,    56,    77,    90,   210,   278,    76,   221,   223,    84,
      94,   101,   187,   188,   238,   239,   283,    32,   284,    94,
     215,    86,    94,    79,    32,    75,    89,   174,   206,   219,
     220,    76,    76,    14,    32,    76,   176,   177,   218,   218,
      76,    76,    76,   278,   218,   278,   218,   218,   260,    76,
     263,   278,   260,   279,   266,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   269,   269,   269,   270,   270,   271,
     272,   273,   274,   275,    83,   279,   278,   278,    61,    83,
     243,    67,   183,   246,   256,    84,   279,   243,   197,   254,
     279,    84,   254,   254,    94,   134,   134,    75,   342,   343,
      75,   348,   349,   136,   294,   304,   305,   306,   307,   314,
     353,   134,   134,   294,   298,   299,   300,   301,   353,   330,
     331,   332,   294,   301,   335,   336,   337,   353,   294,   301,
     320,   321,   322,   353,   294,   311,   312,   313,   314,   353,
     294,   314,   325,   326,   327,   353,   243,    32,   373,   374,
     143,   295,   316,   317,   190,   260,   355,   263,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
     134,   332,   134,    75,    89,    92,   163,   365,   366,   367,
     370,    75,   159,    79,   364,   365,   159,   278,   234,   284,
      32,    81,    89,    94,   227,   228,   229,   230,   231,   226,
      84,   189,    75,   174,   205,   206,   219,    76,    79,    76,
      79,   210,   278,    90,    56,    77,   278,    90,    76,    76,
     210,   278,    90,    56,    77,   278,    90,    76,    76,   239,
      32,    83,   174,   205,   240,   241,    84,    94,   239,    76,
      83,    94,   281,   217,    76,   219,   223,    77,    90,   281,
     206,   220,   219,    75,    89,    75,    76,    76,    79,    76,
      76,    92,   266,    79,    79,    79,    79,    76,    76,    79,
      90,   278,    83,   281,   243,    75,    84,   254,    84,   205,
      76,    76,    76,    32,   134,   355,   134,   134,    79,   306,
     134,    79,   300,   134,    79,   332,   134,    79,   337,   134,
      79,   322,   134,    79,   313,   134,    79,   327,    83,    79,
     149,    94,   143,   317,   295,    76,    79,    76,   355,   355,
     125,   135,   151,   355,   279,   355,   279,   355,     4,    46,
      74,    77,    78,    80,    91,    93,   260,   354,   126,   130,
     146,   148,   153,   308,   355,    76,   263,    76,    79,   367,
     368,   369,    90,   368,    94,   368,    76,    79,   367,    76,
     365,   364,    76,    90,    76,    83,    32,   281,    79,    94,
     227,    86,   231,   206,   174,   174,    32,    61,   225,   278,
      90,   278,    90,    90,   278,    90,   278,    90,    90,    83,
     174,   281,    83,    86,   174,   242,    79,    84,    84,    89,
     180,   181,   182,   284,    76,    76,    90,    90,   219,    76,
     223,    77,    90,   278,   263,    76,   177,   228,   218,    32,
     259,   278,   218,   278,   278,    83,   279,    76,   279,    84,
      86,   174,   204,   243,   244,   251,   252,   243,   243,    76,
      76,   306,   300,   332,   337,   322,   313,   327,   279,   374,
     134,   295,   134,   260,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    79,    79,    83,    76,    79,    76,
      76,    76,   369,    90,    94,   362,   366,    76,   362,   227,
      90,    32,    94,   227,   229,    90,    90,    90,    90,   281,
      83,   281,   281,   242,   241,    32,    76,    83,    79,    75,
      76,    90,    90,    76,    79,    94,    76,   230,    76,    79,
      76,   243,    76,   243,    76,    76,   279,   278,    86,    86,
     174,    21,   281,   281,   355,   279,   159,   159,    83,   227,
     281,    90,    84,   180,   182,   279,    94,   278,    84,   243,
     243,    76,   278,   278,    86,   243,    83,    83,    76,    76,
     227,   284,    76,    83,    76,    76,   243,   278,   355,   355,
      75,    84,   180,    76,    76,   279,    76,    76,    84
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (AST* parsed_tree);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) 0)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, AST* parsed_tree)
{
  if (!yyvaluep)
    return;
  YYUSE (parsed_tree);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, AST* parsed_tree)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parsed_tree);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, parsed_tree);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, AST* parsed_tree, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, AST* parsed_tree, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (parsed_tree, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      , AST* parsed_tree)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
  YYUSE (parsed_tree);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (parsed_tree, YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);

  switch (yyn)
    {
        case 2:
#line 1604 "c99.y"
    {
	*parsed_tree = ASTMake1(AST_TRANSLATION_UNIT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), 0, NULL);
;}
    break;

  case 3:
#line 1609 "c99.y"
    {
	*parsed_tree = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 4:
#line 1613 "c99.y"
    {
	*parsed_tree = ASTMake1(AST_TRANSLATION_UNIT, NULL, 0, NULL);
;}
    break;

  case 5:
#line 1619 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 6:
#line 1623 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 7:
#line 1627 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 8:
#line 1631 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 9:
#line 1635 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 10:
#line 1639 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 11:
#line 1649 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 12:
#line 1653 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 13:
#line 1659 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 14:
#line 1663 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 15:
#line 1669 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 16:
#line 1673 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 17:
#line 1678 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 18:
#line 1682 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_EXTENSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 19:
#line 1687 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 20:
#line 1691 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_PP_COMMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 21:
#line 1695 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_PP_TOKEN, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 22:
#line 1702 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_LABEL_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 23:
#line 1708 "c99.y"
    {
    AST symbol_holder = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
	((*yyvalp).ast) = ASTListLeaf(symbol_holder);
;}
    break;

  case 24:
#line 1713 "c99.y"
    {
	AST label = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), label);
;}
    break;

  case 25:
#line 1722 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 26:
#line 1726 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 27:
#line 1732 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_ATTRIBUTE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 28:
#line 1736 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_ATTRIBUTE, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 29:
#line 1742 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 30:
#line 1746 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 31:
#line 1753 "c99.y"
    {
	AST identif = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake3(AST_GCC_ATTRIBUTE_EXPR, identif, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 32:
#line 1759 "c99.y"
    {
	AST identif = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake3(AST_GCC_ATTRIBUTE_EXPR, identif, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 33:
#line 1765 "c99.y"
    {
	AST identif1 = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
	
	((*yyvalp).ast) = ASTMake3(AST_GCC_ATTRIBUTE_EXPR, identif1, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 34:
#line 1774 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ASM_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 35:
#line 1779 "c99.y"
    {
	AST asm_parms = ASTMake4(AST_GCC_ASM_DEF_PARMS, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (8))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTMake2(AST_GCC_ASM_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.ast), asm_parms, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 36:
#line 1785 "c99.y"
    {
	AST asm_parms = ASTMake4(AST_GCC_ASM_DEF_PARMS, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (10))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (10))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (10))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTMake2(AST_GCC_ASM_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (10))].yystate.yysemantics.yysval.ast), asm_parms, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (10))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (10))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 37:
#line 1791 "c99.y"
    {
	AST asm_parms = ASTMake4(AST_GCC_ASM_DEF_PARMS, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (12))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (12))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (12))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((10) - (12))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (12))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTMake2(AST_GCC_ASM_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (12))].yystate.yysemantics.yysval.ast), asm_parms, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (12))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (12))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 38:
#line 1799 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 39:
#line 1803 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_VOLATILE_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 40:
#line 1809 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 41:
#line 1813 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 42:
#line 1820 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 43:
#line 1824 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 44:
#line 1830 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_ASM_OPERAND, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 45:
#line 1834 "c99.y"
    {
    AST symbol_tree = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake3(AST_GCC_ASM_OPERAND, symbol_tree, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 46:
#line 1840 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 47:
#line 1848 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SIMPLE_DECLARATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 48:
#line 1852 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SIMPLE_DECLARATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 49:
#line 1856 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SIMPLE_DECLARATION, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 50:
#line 1860 "c99.y"
    {
	// This is an error but also a common extension
	((*yyvalp).ast) = ASTLeaf(AST_EMPTY_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 51:
#line 1867 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SIMPLE_DECLARATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 52:
#line 1873 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 53:
#line 1877 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 54:
#line 1881 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 55:
#line 1885 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 56:
#line 1889 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 57:
#line 1896 "c99.y"
    {
    ((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 58:
#line 1900 "c99.y"
    {
    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 59:
#line 1906 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 60:
#line 1910 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 61:
#line 1914 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 62:
#line 1918 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 63:
#line 1922 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 64:
#line 1934 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 65:
#line 1938 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 66:
#line 1942 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 67:
#line 1946 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_DECL_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 68:
#line 1952 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 69:
#line 1956 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 70:
#line 1962 "c99.y"
    {
    ((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 71:
#line 1966 "c99.y"
    {
    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 72:
#line 1972 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 73:
#line 1976 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 74:
#line 1981 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 75:
#line 1985 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 76:
#line 1989 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_TYPEDEF_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 77:
#line 1994 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 78:
#line 1999 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SIGNED_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 79:
#line 2003 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_UNSIGNED_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 80:
#line 2007 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_LONG_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 81:
#line 2011 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SHORT_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 82:
#line 2016 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_GCC_COMPLEX_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 83:
#line 2020 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_GCC_IMAGINARY_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 84:
#line 2026 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_AUTO_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 85:
#line 2030 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_REGISTER_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 86:
#line 2034 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 87:
#line 2038 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_EXTERN_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 88:
#line 2043 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_THREAD_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 89:
#line 2049 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_INLINE_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 90:
#line 2055 "c99.y"
    {
;}
    break;

  case 91:
#line 2058 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 92:
#line 2063 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_GCC_COMPLEX_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 93:
#line 2069 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 94:
#line 2073 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 95:
#line 2077 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 96:
#line 2092 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_TYPE_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 97:
#line 2096 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_TYPE_SPECIFIER_SEQ, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 98:
#line 2100 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_TYPE_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 99:
#line 2104 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_TYPE_SPECIFIER_SEQ, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 100:
#line 2110 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_SIMPLE_TYPE_SPECIFIER, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 101:
#line 2114 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 102:
#line 2119 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_TYPEOF_EXPR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 103:
#line 2123 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_TYPEOF, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 104:
#line 2130 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 105:
#line 2136 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CHAR_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 106:
#line 2140 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BOOL_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 107:
#line 2144 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SHORT_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 108:
#line 2148 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_INT_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 109:
#line 2152 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_LONG_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 110:
#line 2156 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SIGNED_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 111:
#line 2160 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_UNSIGNED_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 112:
#line 2164 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_FLOAT_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 113:
#line 2168 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_DOUBLE_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 114:
#line 2172 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_VOID_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 115:
#line 2178 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_ELABORATED_TYPE_CLASS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, NULL, identifier, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 116:
#line 2184 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake3(AST_ELABORATED_TYPE_ENUM, NULL, NULL, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 117:
#line 2191 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_GCC_ELABORATED_TYPE_CLASS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), 
			ASTMake4(AST_ELABORATED_TYPE_CLASS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, NULL, identifier, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL),
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 118:
#line 2199 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_GCC_ELABORATED_TYPE_ENUM, NULL, NULL, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 119:
#line 2212 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 120:
#line 2216 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 121:
#line 2222 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 122:
#line 2226 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 123:
#line 2231 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 124:
#line 2235 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 125:
#line 2239 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 126:
#line 2243 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 127:
#line 2247 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 128:
#line 2251 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_INIT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 129:
#line 2258 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_ASM_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 130:
#line 2265 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 131:
#line 2269 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_POINTER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 132:
#line 2274 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_GCC_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 133:
#line 2278 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake3(AST_GCC_POINTER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 134:
#line 2284 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_POINTER_SPEC, NULL, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 135:
#line 2288 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_POINTER_SPEC, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 136:
#line 2298 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 137:
#line 2302 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_POINTER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 138:
#line 2307 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 139:
#line 2311 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_POINTER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 140:
#line 2317 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 141:
#line 2321 "c99.y"
    {
	AST empty_parameter = ASTLeaf(AST_EMPTY_PARAMETER_DECLARATION_CLAUSE, 0, NULL);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), empty_parameter, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 142:
#line 2327 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 143:
#line 2331 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 144:
#line 2335 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 145:
#line 2339 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL,  ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 146:
#line 2343 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 147:
#line 2347 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ast), NULL, static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 148:
#line 2353 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 149:
#line 2359 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 150:
#line 2365 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), vla_expr, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 151:
#line 2371 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), vla_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 152:
#line 2377 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PARENTHESIZED_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 153:
#line 2383 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 154:
#line 2387 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 155:
#line 2391 "c99.y"
    {
	AST empty_parameter = ASTLeaf(AST_EMPTY_PARAMETER_DECLARATION_CLAUSE, 0, NULL);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), empty_parameter, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 156:
#line 2399 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 157:
#line 2403 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 158:
#line 2409 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CONST_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 159:
#line 2413 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_VOLATILE_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 160:
#line 2418 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_GCC_RESTRICT_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 161:
#line 2424 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 162:
#line 2428 "c99.y"
    {
	AST empty_parameter = ASTLeaf(AST_EMPTY_PARAMETER_DECLARATION_CLAUSE, 0, NULL);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), empty_parameter, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 163:
#line 2434 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 164:
#line 2438 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 165:
#line 2442 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 166:
#line 2446 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL,  ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 167:
#line 2450 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 168:
#line 2454 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ast), NULL, static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 169:
#line 2460 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 170:
#line 2466 "c99.y"
    {
    AST static_qualif = ASTLeaf(AST_STATIC_SPEC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), static_qualif, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 171:
#line 2472 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), vla_expr, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 172:
#line 2478 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), vla_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 173:
#line 2484 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PARENTHESIZED_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 174:
#line 2490 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_DECLARATOR_ID_EXPR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 175:
#line 2497 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_ENUM_SPECIFIER, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 176:
#line 2503 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ENUM_SPECIFIER, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 177:
#line 2507 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_ENUM_SPECIFIER, identifier, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 178:
#line 2513 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ENUM_SPECIFIER, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 179:
#line 2519 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 180:
#line 2525 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 181:
#line 2530 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 182:
#line 2534 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 183:
#line 2540 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_ENUM_DEF, identifier, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 184:
#line 2546 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_ENUM_DEF, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 185:
#line 2554 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_TYPE_ID, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 186:
#line 2558 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_TYPE_ID, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 187:
#line 2564 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 188:
#line 2568 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 189:
#line 2572 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 190:
#line 2577 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_PTR_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 191:
#line 2581 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_PTR_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 192:
#line 2585 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 193:
#line 2591 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PARENTHESIZED_ABSTRACT_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 194:
#line 2595 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_ABSTRACT_DECLARATOR_FUNC, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 195:
#line 2599 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_ABSTRACT_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 196:
#line 2603 "c99.y"
    {
	AST empty_parameter = ASTLeaf(AST_EMPTY_PARAMETER_DECLARATION_CLAUSE, 0, NULL);

	((*yyvalp).ast) = ASTMake4(AST_ABSTRACT_DECLARATOR_FUNC, NULL, empty_parameter, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 197:
#line 2609 "c99.y"
    {
	AST empty_parameter = ASTLeaf(AST_EMPTY_PARAMETER_DECLARATION_CLAUSE, 0, NULL);

	((*yyvalp).ast) = ASTMake4(AST_ABSTRACT_DECLARATOR_FUNC, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), empty_parameter, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 198:
#line 2615 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 199:
#line 2619 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 200:
#line 2623 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, NULL, vla_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 201:
#line 2629 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 202:
#line 2633 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 203:
#line 2637 "c99.y"
    {
    AST vla_expr = ASTLeaf(AST_VLA_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake2(AST_ABSTRACT_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), vla_expr, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 204:
#line 2645 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake1(AST_KR_PARAMETER_LIST, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 205:
#line 2650 "c99.y"
    {
    AST symbol = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTListLeaf(symbol);
;}
    break;

  case 206:
#line 2656 "c99.y"
    {
    AST symbol = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), symbol);
;}
    break;

  case 207:
#line 2664 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 208:
#line 2668 "c99.y"
    {
    AST variadic_arg = ASTLeaf(AST_VARIADIC_ARG, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), variadic_arg);
;}
    break;

  case 209:
#line 2675 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 210:
#line 2679 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 211:
#line 2685 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_PARAMETER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 212:
#line 2689 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_PARAMETER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 213:
#line 2693 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_PARAMETER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 214:
#line 2698 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_PARAMETER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 215:
#line 2702 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_GCC_PARAMETER_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 216:
#line 2708 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_INITIALIZER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 217:
#line 2714 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_INITIALIZER_EXPR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 218:
#line 2718 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_INITIALIZER_BRACES, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 219:
#line 2722 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_INITIALIZER_BRACES, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 220:
#line 2726 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_INITIALIZER_BRACES, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 221:
#line 2732 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 222:
#line 2736 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 223:
#line 2740 "c99.y"
    {
    AST designated_initializer = ASTMake2(AST_DESIGNATED_INITIALIZER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);

    ((*yyvalp).ast) = ASTListLeaf(designated_initializer);
;}
    break;

  case 224:
#line 2746 "c99.y"
    {
    AST designated_initializer = ASTMake2(AST_DESIGNATED_INITIALIZER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast)), NULL);

    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), designated_initializer);
;}
    break;

  case 225:
#line 2753 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	AST gcc_initializer_clause = ASTMake2(AST_GCC_INITIALIZER_CLAUSE, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);

	((*yyvalp).ast) = ASTListLeaf(gcc_initializer_clause);
;}
    break;

  case 226:
#line 2761 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.token_atrib).token_text);

	AST gcc_initializer_clause = ASTMake2(AST_GCC_INITIALIZER_CLAUSE, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);

	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), gcc_initializer_clause);
;}
    break;

  case 227:
#line 2771 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake1(AST_DESIGNATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 228:
#line 2777 "c99.y"
    {
    ((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 229:
#line 2781 "c99.y"
    {
    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 230:
#line 2787 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake1(AST_INDEX_DESIGNATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 231:
#line 2791 "c99.y"
    {
    AST symbol = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);

    ((*yyvalp).ast) = ASTMake1(AST_FIELD_DESIGNATOR, symbol, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 232:
#line 2799 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FUNCTION_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 233:
#line 2803 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FUNCTION_DEFINITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 234:
#line 2808 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake4(AST_FUNCTION_DEFINITION, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 235:
#line 2812 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake4(AST_FUNCTION_DEFINITION, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 236:
#line 2817 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_EXTENSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 237:
#line 2823 "c99.y"
    {
    ((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 238:
#line 2827 "c99.y"
    {
    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 239:
#line 2833 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_FUNCTION_BODY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 240:
#line 2843 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_CLASS_SPECIFIER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 241:
#line 2847 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_CLASS_SPECIFIER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 242:
#line 2853 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 243:
#line 2857 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake4(AST_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, identifier, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 244:
#line 2864 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), 
			ASTMake4(AST_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, NULL, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL), 
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 245:
#line 2870 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake2(AST_GCC_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), 
			ASTMake4(AST_CLASS_HEAD, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, identifier, NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL),
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 246:
#line 2880 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CLASS_KEY_STRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 247:
#line 2884 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CLASS_KEY_UNION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 248:
#line 2890 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 249:
#line 2894 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 250:
#line 2900 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MEMBER_DECLARATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 251:
#line 2904 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MEMBER_DECLARATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 252:
#line 2908 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 253:
#line 2913 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_EMPTY_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 254:
#line 2918 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_EXTENSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 255:
#line 2924 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 256:
#line 2928 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 257:
#line 2934 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MEMBER_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 258:
#line 2938 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MEMBER_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 259:
#line 2946 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_BITFIELD_DECLARATOR, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 260:
#line 2950 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
	AST declarator_id_expr = ASTMake1(AST_DECLARATOR_ID_EXPR, identifier, ASTLine(identifier), NULL);

	((*yyvalp).ast) = ASTMake2(AST_BITFIELD_DECLARATOR, declarator_id_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 261:
#line 2958 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_MEMBER_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 262:
#line 2965 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_MEMBER_DECLARATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 263:
#line 2969 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake3(AST_GCC_BITFIELD_DECLARATOR, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 264:
#line 2975 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_BITFIELD_DECLARATOR, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 265:
#line 2981 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_CONSTANT_INITIALIZER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 266:
#line 2991 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 267:
#line 2995 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 268:
#line 2999 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 269:
#line 3005 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 270:
#line 3009 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 271:
#line 3013 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 272:
#line 3017 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 273:
#line 3021 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 274:
#line 3025 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 275:
#line 3029 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 276:
#line 3036 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
	
	((*yyvalp).ast) = ASTMake2(AST_LABELED_STATEMENT, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 277:
#line 3042 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_CASE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 278:
#line 3046 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_DEFAULT_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 279:
#line 3051 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_GCC_CASE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 280:
#line 3057 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_EXPRESSION_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 281:
#line 3068 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_DECLARATION_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 282:
#line 3074 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_COMPOUND_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 283:
#line 3078 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_COMPOUND_STATEMENT, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 284:
#line 3084 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 285:
#line 3088 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 286:
#line 3096 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_IF_ELSE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 287:
#line 3103 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_IF_ELSE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 288:
#line 3110 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 289:
#line 3114 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 290:
#line 3120 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SWITCH_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 291:
#line 3126 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_CONDITION, NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 292:
#line 3130 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_CONDITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 293:
#line 3135 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_CONDITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast),
			ASTMake4(AST_GCC_CONDITION_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL),
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 294:
#line 3141 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_CONDITION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast),
			ASTMake4(AST_GCC_CONDITION_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL),
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 295:
#line 3147 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_CONDITION, NULL,
			ASTMake4(AST_GCC_CONDITION_DECL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL),
			ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 296:
#line 3155 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_WHILE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 297:
#line 3159 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_DO_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 298:
#line 3163 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FOR_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 299:
#line 3167 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FOR_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (7))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 300:
#line 3171 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FOR_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 301:
#line 3175 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_FOR_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 302:
#line 3181 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 303:
#line 3185 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 304:
#line 3191 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BREAK_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 305:
#line 3195 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CONTINUE_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 306:
#line 3199 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_RETURN_STATEMENT, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 307:
#line 3203 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_RETURN_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 308:
#line 3207 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
	
	((*yyvalp).ast) = ASTMake1(AST_GOTO_STATEMENT, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 309:
#line 3214 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_GOTO_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 310:
#line 3224 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 311:
#line 3228 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PARENTHESIZED_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 312:
#line 3232 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 313:
#line 3246 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_PARENTHESIZED_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 314:
#line 3250 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_BUILTIN_VA_ARG, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 315:
#line 3254 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_GCC_BUILTIN_OFFSETOF, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 316:
#line 3258 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake3(AST_GCC_BUILTIN_CHOOSE_EXPR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 317:
#line 3262 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_GCC_BUILTIN_TYPES_COMPATIBLE_P, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 318:
#line 3275 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_GCC_OFFSETOF_MEMBER_DESIGNATOR,
            ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text),
            (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 319:
#line 3281 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_GCC_OFFSETOF_MEMBER_DESIGNATOR,
            ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text),
            NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 320:
#line 3289 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 321:
#line 3295 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 322:
#line 3301 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 323:
#line 3305 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ARRAY_SUBSCRIPT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 324:
#line 3309 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_FUNCTION_CALL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), NULL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 325:
#line 3313 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_FUNCTION_CALL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 326:
#line 3317 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_CLASS_MEMBER_ACCESS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 327:
#line 3321 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_POINTER_CLASS_MEMBER_ACCESS, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 328:
#line 3325 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_POSTINCREMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 329:
#line 3329 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_POSTDECREMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 330:
#line 3334 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_POSTFIX_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 331:
#line 3338 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_POSTFIX_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (7))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (7))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 332:
#line 3344 "c99.y"
    {
    AST expression_holder = ASTMake1(AST_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTListLeaf(expression_holder);
;}
    break;

  case 333:
#line 3349 "c99.y"
    {
    AST expression_holder = ASTMake1(AST_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), expression_holder);
;}
    break;

  case 334:
#line 3356 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 335:
#line 3360 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PREINCREMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 336:
#line 3364 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PREDECREMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 337:
#line 3368 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.node_type), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 338:
#line 3372 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_SIZEOF, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 339:
#line 3376 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_SIZEOF_TYPEID, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 340:
#line 3381 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_EXTENSION_EXPR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 341:
#line 3385 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_ALIGNOF, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 342:
#line 3389 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_ALIGNOF_TYPE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 343:
#line 3393 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_REAL_PART, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 344:
#line 3397 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_GCC_IMAG_PART, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 345:
#line 3401 "c99.y"
    {
	AST identifier = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake1(AST_GCC_LABEL_ADDR, identifier, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 346:
#line 3409 "c99.y"
    {
	((*yyvalp).node_type) = AST_DERREFERENCE;
;}
    break;

  case 347:
#line 3413 "c99.y"
    {
	((*yyvalp).node_type) = AST_REFERENCE;
;}
    break;

  case 348:
#line 3417 "c99.y"
    {
	((*yyvalp).node_type) = AST_PLUS_OP;
;}
    break;

  case 349:
#line 3421 "c99.y"
    {
	((*yyvalp).node_type) = AST_NEG_OP;
;}
    break;

  case 350:
#line 3425 "c99.y"
    {
	((*yyvalp).node_type) = AST_NOT_OP;
;}
    break;

  case 351:
#line 3429 "c99.y"
    {
	((*yyvalp).node_type) = AST_COMPLEMENT_OP;
;}
    break;

  case 352:
#line 3435 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 353:
#line 3439 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_CAST_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 354:
#line 3445 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 355:
#line 3449 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MULT_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 356:
#line 3453 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_DIV_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 357:
#line 3457 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MOD_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 358:
#line 3463 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 359:
#line 3467 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_ADD_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 360:
#line 3471 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_MINUS_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 361:
#line 3477 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 362:
#line 3481 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SHL_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 363:
#line 3485 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_SHR_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 364:
#line 3491 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 365:
#line 3495 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_LOWER_THAN, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 366:
#line 3499 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GREATER_THAN, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 367:
#line 3503 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GREATER_OR_EQUAL_THAN, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 368:
#line 3507 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_LOWER_OR_EQUAL_THAN, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 369:
#line 3512 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_MAX_OPERATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 370:
#line 3516 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_MIN_OPERATION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 371:
#line 3522 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 372:
#line 3526 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_EQUAL_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 373:
#line 3530 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_DIFFERENT_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 374:
#line 3536 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 375:
#line 3540 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_BITWISE_AND, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 376:
#line 3546 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 377:
#line 3550 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_BITWISE_XOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 378:
#line 3556 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 379:
#line 3560 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_BITWISE_OR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 380:
#line 3566 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 381:
#line 3570 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_LOGICAL_AND, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 382:
#line 3576 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 383:
#line 3580 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_LOGICAL_OR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 384:
#line 3586 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 385:
#line 3590 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_CONDITIONAL_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 386:
#line 3595 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_GCC_CONDITIONAL_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 387:
#line 3601 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 388:
#line 3605 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.node_type), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 389:
#line 3611 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 390:
#line 3615 "c99.y"
    {
	AST comma_expression = ASTMake2(AST_COMMA_OP, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast)), NULL);

	((*yyvalp).ast) = ASTMake1(AST_EXPRESSION, comma_expression, ASTLine(comma_expression), NULL);
;}
    break;

  case 391:
#line 3623 "c99.y"
    {
	((*yyvalp).node_type) = AST_ASSIGNMENT;
;}
    break;

  case 392:
#line 3627 "c99.y"
    {
	((*yyvalp).node_type) = AST_MUL_ASSIGNMENT;
;}
    break;

  case 393:
#line 3631 "c99.y"
    {
	((*yyvalp).node_type) = AST_DIV_ASSIGNMENT;
;}
    break;

  case 394:
#line 3635 "c99.y"
    {
	((*yyvalp).node_type) = AST_ADD_ASSIGNMENT;
;}
    break;

  case 395:
#line 3639 "c99.y"
    {
	((*yyvalp).node_type) = AST_SUB_ASSIGNMENT;
;}
    break;

  case 396:
#line 3643 "c99.y"
    {
	((*yyvalp).node_type) = AST_SHL_ASSIGNMENT;
;}
    break;

  case 397:
#line 3647 "c99.y"
    {
	((*yyvalp).node_type) = AST_SHR_ASSIGNMENT;
;}
    break;

  case 398:
#line 3651 "c99.y"
    {
	((*yyvalp).node_type) = AST_AND_ASSIGNMENT;
;}
    break;

  case 399:
#line 3655 "c99.y"
    {
	((*yyvalp).node_type) = AST_OR_ASSIGNMENT;
;}
    break;

  case 400:
#line 3659 "c99.y"
    {
	((*yyvalp).node_type) = AST_XOR_ASSIGNMENT;
;}
    break;

  case 401:
#line 3663 "c99.y"
    {
	((*yyvalp).node_type) = AST_MOD_ASSIGNMENT;
;}
    break;

  case 402:
#line 3668 "c99.y"
    {
	((*yyvalp).node_type) = AST_GCC_MIN_ASSIGMENT;
;}
    break;

  case 403:
#line 3672 "c99.y"
    {
	((*yyvalp).node_type) = AST_GCC_MAX_ASSIGMENT;
;}
    break;

  case 404:
#line 3678 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_CONSTANT_EXPRESSION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 405:
#line 3688 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_DECIMAL_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 406:
#line 3692 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OCTAL_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 407:
#line 3696 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_HEXADECIMAL_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 408:
#line 3700 "c99.y"
    {
    ((*yyvalp).ast) = ASTLeaf(AST_HEXADECIMAL_FLOAT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 409:
#line 3704 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_FLOATING_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 410:
#line 3708 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BOOLEAN_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 411:
#line 3712 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_CHARACTER_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 412:
#line 3716 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 413:
#line 3722 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_UNKNOWN_PRAGMA, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 414:
#line 3728 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_STRING_LITERAL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 415:
#line 3732 "c99.y"
    {
	// Let's concatenate here, it will ease everything

	const char* str1 = ASTText((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast));
	const char* str2 = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text;
	char* text = calloc(strlen(str1) + strlen(str2) + 1, sizeof(*text));

	strcat(text, str1);

	// Append the second string
	strcat(text, str2);

	((*yyvalp).ast) = ASTLeaf(AST_STRING_LITERAL, ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), text);
;}
    break;

  case 416:
#line 3892 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 417:
#line 3898 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 418:
#line 3902 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 419:
#line 3908 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 420:
#line 3912 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 421:
#line 3916 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 422:
#line 3923 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 423:
#line 3927 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 424:
#line 3931 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 425:
#line 3935 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 426:
#line 3939 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 427:
#line 3943 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 428:
#line 3947 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 429:
#line 3951 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 430:
#line 3955 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 431:
#line 3959 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 432:
#line 3963 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 433:
#line 3969 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 434:
#line 3973 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 435:
#line 3977 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 436:
#line 3983 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 437:
#line 3987 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 438:
#line 3994 "c99.y"
    {
 	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 439:
#line 4000 "c99.y"
    {
 	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_CONSTRUCT_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 440:
#line 4006 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_OMP_CUSTOM_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 441:
#line 4012 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_OMP_CUSTOM_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 442:
#line 4018 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 443:
#line 4022 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 444:
#line 4029 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 445:
#line 4033 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 446:
#line 4037 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 447:
#line 4043 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_PARAMETER_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 448:
#line 4049 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 449:
#line 4053 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_CLAUSE, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 450:
#line 4057 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_CUSTOM_CLAUSE, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 451:
#line 4065 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 452:
#line 4071 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_PARALLEL_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 453:
#line 4077 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_PARALLEL_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 454:
#line 4083 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 455:
#line 4087 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 456:
#line 4093 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 457:
#line 4097 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 458:
#line 4101 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 459:
#line 4107 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 460:
#line 4111 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 461:
#line 4115 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 462:
#line 4121 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_IF_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 463:
#line 4125 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_NUM_THREADS_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 464:
#line 4131 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_FOR_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 465:
#line 4137 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_FOR_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 466:
#line 4143 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 467:
#line 4147 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 468:
#line 4153 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 469:
#line 4157 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 470:
#line 4161 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 471:
#line 4167 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 472:
#line 4171 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)
;}
    break;

  case 473:
#line 4175 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 474:
#line 4179 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 475:
#line 4185 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_ORDERED_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 476:
#line 4189 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_SCHEDULE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 477:
#line 4193 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_SCHEDULE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 478:
#line 4199 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_STATIC_SCHEDULE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 479:
#line 4203 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_DYNAMIC_SCHEDULE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 480:
#line 4207 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_GUIDED_SCHEDULE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 481:
#line 4211 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_RUNTIME_SCHEDULE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 482:
#line 4215 "c99.y"
    {
    ((*yyvalp).ast) = ASTLeaf(AST_OMP_CUSTOM_SCHEDULE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 483:
#line 4221 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_SECTIONS_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 484:
#line 4227 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_SECTIONS_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 485:
#line 4233 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 486:
#line 4237 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 487:
#line 4243 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 488:
#line 4247 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 489:
#line 4251 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 490:
#line 4257 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 491:
#line 4261 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 492:
#line 4265 "c99.y"
    {
;}
    break;

  case 493:
#line 4270 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_NOWAIT_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 494:
#line 4276 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 495:
#line 4282 "c99.y"
    {
    AST section_holder = ASTMake2(AST_OMP_SECTION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTListLeaf(section_holder);
;}
    break;

  case 496:
#line 4287 "c99.y"
    {
    AST section_holder = ASTMake2(AST_OMP_SECTION, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTListLeaf(section_holder);
;}
    break;

  case 497:
#line 4292 "c99.y"
    {
    AST section_holder = ASTMake2(AST_OMP_SECTION, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast)), NULL);
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), section_holder);
;}
    break;

  case 498:
#line 4299 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_SECTION_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 499:
#line 4305 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_PARALLEL_SINGLE_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 500:
#line 4311 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_PARALLEL_SINGLE_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 501:
#line 4317 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 502:
#line 4321 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 503:
#line 4327 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 504:
#line 4331 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 505:
#line 4335 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 506:
#line 4341 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 507:
#line 4345 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 508:
#line 4349 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 509:
#line 4355 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_SINGLE_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 510:
#line 4361 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_SINGLE_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 511:
#line 4367 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 512:
#line 4371 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 513:
#line 4377 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 514:
#line 4381 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 515:
#line 4385 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 516:
#line 4391 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 517:
#line 4395 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 518:
#line 4399 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 519:
#line 4405 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_PARALLEL_FOR_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 520:
#line 4411 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_PARALLEL_FOR_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 521:
#line 4417 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 522:
#line 4421 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 523:
#line 4427 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 524:
#line 4431 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 525:
#line 4435 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 526:
#line 4441 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 527:
#line 4445 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 528:
#line 4449 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 529:
#line 4453 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 530:
#line 4459 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_PARALLEL_SECTIONS_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 531:
#line 4465 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_PARALLEL_SECTIONS_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 532:
#line 4471 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 533:
#line 4475 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 534:
#line 4481 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 535:
#line 4485 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 536:
#line 4489 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 537:
#line 4495 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 538:
#line 4499 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 539:
#line 4503 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 540:
#line 4509 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_MASTER_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 541:
#line 4515 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_MASTER_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 542:
#line 4521 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_CRITICAL_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 543:
#line 4527 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_CRITICAL_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 544:
#line 4533 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 545:
#line 4537 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 546:
#line 4543 "c99.y"
    {
	// Cast it into an expression, makes things a lot easier
	AST critical_region_phrase = ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);

	((*yyvalp).ast) = ASTMake1(AST_EXPRESSION, critical_region_phrase, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 547:
#line 4552 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_BARRIER_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 548:
#line 4558 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_ATOMIC_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 549:
#line 4564 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_ATOMIC_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 550:
#line 4570 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_FLUSH_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 551:
#line 4576 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 552:
#line 4580 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 553:
#line 4586 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 554:
#line 4592 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_ORDERED_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 555:
#line 4598 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_ORDERED_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 556:
#line 4604 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_THREADPRIVATE_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 557:
#line 4610 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_PRIVATE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 558:
#line 4614 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_COPYPRIVATE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 559:
#line 4618 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_FIRSTPRIVATE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 560:
#line 4622 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_LASTPRIVATE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 561:
#line 4626 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_SHARED_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 562:
#line 4630 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_DEFAULT_SHARED_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 563:
#line 4634 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_OMP_DEFAULT_NONE_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 564:
#line 4638 "c99.y"
    {
    ((*yyvalp).ast) = ASTLeaf(AST_OMP_DEFAULT_CUSTOM_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 565:
#line 4642 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_OMP_REDUCTION_CLAUSE, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 566:
#line 4647 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 567:
#line 4651 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_OMP_COPYIN_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 568:
#line 4657 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_ADD_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 569:
#line 4661 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_MULT_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 570:
#line 4665 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_MINUS_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 571:
#line 4669 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BITWISE_AND_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 572:
#line 4673 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BITWISE_XOR_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 573:
#line 4677 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_BITWISE_OR_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 574:
#line 4681 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_LOGICAL_AND_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 575:
#line 4685 "c99.y"
    {
	((*yyvalp).ast) = ASTLeaf(AST_LOGICAL_OR_OPERATOR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 576:
#line 4691 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 577:
#line 4695 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 578:
#line 4701 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_OMP_USER_DEFINED_REDUCTION_CLAUSE, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 579:
#line 4706 "c99.y"
    {
	((*yyvalp).ast) = ASTMake3(AST_OMP_USER_DEFINED_REDUCTION_CLAUSE, 
			(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 580:
#line 4749 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 581:
#line 4753 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 582:
#line 4759 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 583:
#line 4763 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 584:
#line 4771 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_DIRECTIVE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 585:
#line 4777 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 586:
#line 4783 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_CONSTRUCT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 587:
#line 4789 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_LINE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 588:
#line 4793 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_LINE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 589:
#line 4799 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_LINE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.ast), NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 590:
#line 4803 "c99.y"
    {
	((*yyvalp).ast) = ASTMake2(AST_PRAGMA_CUSTOM_LINE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 591:
#line 4809 "c99.y"
    {
	((*yyvalp).ast) = NULL;
;}
    break;

  case 592:
#line 4813 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 593:
#line 4819 "c99.y"
    {
	((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 594:
#line 4823 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 595:
#line 4827 "c99.y"
    {
	((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 596:
#line 4833 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PRAGMA_CUSTOM_CLAUSE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 597:
#line 4837 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PRAGMA_CUSTOM_CLAUSE, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 598:
#line 4841 "c99.y"
    {
	((*yyvalp).ast) = ASTMake1(AST_PRAGMA_CUSTOM_CLAUSE, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 599:
#line 4847 "c99.y"
    {
    AST node = ASTLeaf(AST_PRAGMA_CLAUSE_ARG, 0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text));

    ((*yyvalp).ast) = ASTListLeaf(node);
;}
    break;

  case 600:
#line 4853 "c99.y"
    {
    AST node = ASTLeaf(AST_PRAGMA_CLAUSE_ARG, 0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.text));

    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), node);
;}
    break;

  case 601:
#line 4861 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text);
;}
    break;

  case 602:
#line 4865 "c99.y"
    {
    ((*yyvalp).text) = strappend((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.text), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.text));
;}
    break;

  case 603:
#line 4871 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text);
;}
    break;

  case 604:
#line 4875 "c99.y"
    {
    int len = strlen((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    char *c = calloc(1, len + 2 + 1 + sizeof(c));
    sprintf(c, "(%s)", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    ((*yyvalp).text) = c;
;}
    break;

  case 605:
#line 4882 "c99.y"
    {
    int len = strlen((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    char *c = calloc(1, len + 2 + 1 + sizeof(c));
    sprintf(c, "[%s]", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    ((*yyvalp).text) = c;
;}
    break;

  case 606:
#line 4889 "c99.y"
    {
    int len = strlen((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    char *c = calloc(1, len + 2 + 1 + sizeof(c));
    sprintf(c, "{%s}", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.text));
    ((*yyvalp).text) = c;
;}
    break;

  case 607:
#line 4896 "c99.y"
    {
    ((*yyvalp).text) = "()";
;}
    break;

  case 608:
#line 4900 "c99.y"
    {
    ((*yyvalp).text) = "[]";
;}
    break;

  case 609:
#line 4904 "c99.y"
    {
    ((*yyvalp).text) = "{}";
;}
    break;

  case 610:
#line 4910 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text);
;}
    break;

  case 611:
#line 4914 "c99.y"
    {
    ((*yyvalp).text) = strappend((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.text), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.text));
;}
    break;

  case 612:
#line 4920 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.text);
;}
    break;

  case 613:
#line 4925 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text;
;}
    break;

  case 614:
#line 4931 "c99.y"
    {
    ((*yyvalp).text) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.token_atrib).token_text;
;}
    break;

  case 615:
#line 4949 "c99.y"
    {
    ((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 616:
#line 4957 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_CUSTOM_CONSTRUCT_STATEMENT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast), ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;

  case 617:
#line 4962 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake1(AST_CUSTOM_CONSTRUCT_HEADER, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 618:
#line 4966 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake1(AST_CUSTOM_CONSTRUCT_HEADER, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.token_atrib).token_text);
;}
    break;

  case 619:
#line 4972 "c99.y"
    {
    ((*yyvalp).ast) = ASTListLeaf((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 620:
#line 4976 "c99.y"
    {
    ((*yyvalp).ast) = ASTList((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast));
;}
    break;

  case 621:
#line 4982 "c99.y"
    {
    ((*yyvalp).ast) = ASTMake2(AST_CUSTOM_CONSTRUCT_PARAMETER,
            ASTLeaf(AST_SYMBOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_text), 
            (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.ast), 
            (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.token_atrib).token_line, NULL);
;}
    break;

  case 622:
#line 5003 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 623:
#line 5009 "c99.y"
    {
	((*yyvalp).ast) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.ast);
;}
    break;

  case 624:
#line 5013 "c99.y"
    {
	((*yyvalp).ast) = ASTMake4(AST_DECLARATOR_ARRAY, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.ast), NULL, NULL,  ASTLine((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.ast)), NULL);
;}
    break;


/* Line 930 of glr.c.  */
#line 8444 "c99-parser.c"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
        case 1: yy0->ast = ambiguityHandler (*yy0, *yy1); break;

      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, AST* parsed_tree)
{
  YYUSE (yyvaluep);
  YYUSE (parsed_tree);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, AST* parsed_tree)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, parsed_tree);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, parsed_tree);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh, parsed_tree);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp, AST* parsed_tree)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp, parsed_tree);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp, parsed_tree);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp, AST* parsed_tree)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYUSE (parsed_tree);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       		       , parsed_tree);
      fprintf (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval, AST* parsed_tree)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc, parsed_tree));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc, parsed_tree));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp, AST* parsed_tree);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp, AST* parsed_tree)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, parsed_tree));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp, parsed_tree));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp, AST* parsed_tree)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp, parsed_tree);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys, parsed_tree);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp, parsed_tree);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1, AST* parsed_tree)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (parsed_tree, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp, AST* parsed_tree)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, parsed_tree);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp, parsed_tree);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, AST* parsed_tree)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp, parsed_tree);
	      return yyreportAmbiguity (yybest, yyp, parsed_tree);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp, parsed_tree);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy, parsed_tree);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, parsed_tree);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp, parsed_tree);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, AST* parsed_tree)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     , parsed_tree));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn, AST* parsed_tree)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse, parsed_tree));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }
	  else
	    yytoken = YYTRANSLATE (yychar);
	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse, parsed_tree));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn, parsed_tree));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse, parsed_tree));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp, AST* parsed_tree)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn + 1;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytokenName (yytoken);
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (parsed_tree, yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (parsed_tree, YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (parsed_tree, YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the look-ahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp, AST* parsed_tree)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, parsed_tree, NULL);
	if (yychar != YYEMPTY)
	  {
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, parsed_tree);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	yytoken = YYTRANSLATE (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, parsed_tree, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}

      yydestroyGLRState ("Error: popping", yys, parsed_tree);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, parsed_tree, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (AST* parsed_tree)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{

		  yyreportSyntaxError (&yystack, parsed_tree);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, parsed_tree));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}
	      else
		yytoken = YYTRANSLATE (yychar);
	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  if (yychar != YYEOF)
		    yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{

		  yyreportSyntaxError (&yystack, parsed_tree);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, parsed_tree));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, parsed_tree));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, parsed_tree, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack, parsed_tree));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

	      yyreportSyntaxError (&yystack, parsed_tree);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack, parsed_tree));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, parsed_tree);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (parsed_tree, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, parsed_tree);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yydestroyGLRState ("Cleanup: popping", yys, parsed_tree);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#ifdef YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      fprintf (stderr, " -> ");
    }
  fprintf (stderr, "%d@%lu", yys->yylrState, (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    fprintf (stderr, "<null>");
  else
    yy_yypstack (yyst);
  fprintf (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      fprintf (stderr, "%3lu. ", (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  fprintf (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		   yyp->yystate.yyresolved, yyp->yystate.yylrState,
		   (unsigned long int) yyp->yystate.yyposn,
		   (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    fprintf (stderr, ", firstVal: %ld",
		     (long int) YYINDEX (yyp->yystate.yysemantics.yyfirstVal));
	}
      else
	{
	  fprintf (stderr, "Option. rule: %d, state: %ld, next: %ld",
		   yyp->yyoption.yyrule - 1,
		   (long int) YYINDEX (yyp->yyoption.yystate),
		   (long int) YYINDEX (yyp->yyoption.yynext));
	}
      fprintf (stderr, "\n");
    }
  fprintf (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    fprintf (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	     (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  fprintf (stderr, "\n");
}
#endif


#line 5021 "c99.y"



static AST ambiguityHandler (YYSTYPE x0, YYSTYPE x1)
{
	// return ASTMake2(AST_AMBIGUITY, x0.ast, x1.ast, 0, NULL);
	AST son0 = x0.ast;
	AST son1 = x1.ast;

	if (son0 == son1) 
	{
		fprintf(stderr, "Ambiguity function received two trees that are the same!");
		exit(EXIT_FAILURE);
	}

    return ast_make_ambiguous(son0, son1);
}

void yyerror(AST* parsed_tree UNUSED_PARAMETER, const char* c)
{
	// Current token
	extern char* mc99text;
	fprintf(stderr, "%s:%d error : '%s'\n", scanning_now.current_filename, scanning_now.line_number, c);
    fprintf(stderr, "Error near token '%s'\n", mc99text);
	// exit(EXIT_FAILURE);
}

