/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: gperf --language=ANSI-C --hash-function-name=fileextensions_hash --struct-type --lookup-function-name=fileextensions_lookup --output=cxx-fileextensions.c --initializer-suffix=,SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN ./cxx-fileextensions.gperf  */
/* Computed positions: -k'$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 21 "./cxx-fileextensions.gperf"

#include <string.h>
#include "cxx-driver.h"
#line 26 "./cxx-fileextensions.gperf"
struct extensions_table_t;

#define TOTAL_KEYWORDS 13
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 4
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 19
/* maximum key range = 18, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
fileextensions_hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 14, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20,  4, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      15, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 15, 20, 10,
      20, 20, 20, 20, 20,  5, 10, 20, 20, 20,
      20,  0,  0, 20, 20, 20, 20, 20, 20, 20,
       5, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
      20, 20, 20, 20, 20, 20
    };
  return len + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct extensions_table_t *
fileextensions_lookup (register const char *str, register unsigned int len)
{
  static struct extensions_table_t wordlist[] =
    {
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
#line 38 "./cxx-fileextensions.gperf"
      {".o",   SOURCE_LANGUAGE_LINKER_DATA, SOURCE_KIND_UNKNOWN},
#line 32 "./cxx-fileextensions.gperf"
      {".cp",  SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
#line 34 "./cxx-fileextensions.gperf"
      {".cpp", SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
#line 37 "./cxx-fileextensions.gperf"
      {".C",   SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
#line 29 "./cxx-fileextensions.gperf"
      {".i",   SOURCE_LANGUAGE_C,           SOURCE_KIND_PREPROCESSED},
#line 30 "./cxx-fileextensions.gperf"
      {".ii",  SOURCE_LANGUAGE_CXX,         SOURCE_KIND_PREPROCESSED},
#line 33 "./cxx-fileextensions.gperf"
      {".cxx", SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
#line 28 "./cxx-fileextensions.gperf"
      {".c",   SOURCE_LANGUAGE_C,           SOURCE_KIND_NOT_PREPROCESSED},
#line 31 "./cxx-fileextensions.gperf"
      {".cc",  SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
#line 39 "./cxx-fileextensions.gperf"
      {".obj", SOURCE_LANGUAGE_LINKER_DATA, SOURCE_KIND_UNKNOWN},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
      {"",SOURCE_LANGUAGE_UNKNOWN,SOURCE_KIND_UNKNOWN},
#line 40 "./cxx-fileextensions.gperf"
      {".a",   SOURCE_LANGUAGE_LINKER_DATA, SOURCE_KIND_UNKNOWN},
#line 36 "./cxx-fileextensions.gperf"
      {".c++", SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED},
#line 35 "./cxx-fileextensions.gperf"
      {".CPP", SOURCE_LANGUAGE_CXX,         SOURCE_KIND_NOT_PREPROCESSED}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = fileextensions_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 41 "./cxx-fileextensions.gperf"

