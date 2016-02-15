#define YY_DEFAULT_ACTION ECHO;
#define FLEX_USE_ECS
#define FLEX_USE_MECS
#define FLEX_INTERACTIVE_SCANNER
/* A lexical scanner generated by flex */

#include "/usr/local/lib/flex/flexskeldef.h"

# line 1 "scan.l"
#define INITIAL 0
/* scan.l - scanner for flex input */
/*
 * Copyright (c) 1987, the University of California
 * 
 * The United States Government has rights in this work pursuant to
 * contract no. DE-AC03-76SF00098 between the United States Department of
 * Energy and the University of California.
 * 
 * This program may be redistributed.  Enhancements and derivative works
 * may be created provided the new works, if made available to the general
 * public, are made available for use by anyone.
 */
# line 16 "scan.l"
#include "flexdef.h"
#include "parse.h"

char nmstr[MAXLINE];

#define RETURNCHAR \
	yylval = yytext[0]; \
	return ( CHAR );

#define RETURNNAME \
	(void) strcpy( nmstr, yytext ); \
	return ( NAME );

#define RETURNSTRING \
	(void) strcpy( nmstr, yytext ); \
	return ( STRING );

#define PUT_BACK_STRING(str, start) \
	for ( i = strlen( str ) - 1; i >= start; --i ) \
	    unput(str[i])
#define MAIN 2
#define NUM 4
#define QUOTE 6
#define BRACEERROR 8
#define FIRSTCCL 10
#define CCL 12
#define COR 14
#define QUOTECOR 16
#define FIRSTCCLCOR 18
#define CCLCOR 20
# line 50 "scan.l"
#define YY_JAM 158
#define YY_JAM_BASE 336
#define YY_TEMPLATE 159
static char l[159] =
    {   0,
       -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,
       -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,   -2,
       -2,   -2,    0,    0,    0,   33,   29,   34,   25,   33,
       32,   33,   33,   33,   24,   49,   50,   47,   46,   48,
       35,   37,   36,   35,   52,   51,   41,   40,   41,   41,
       44,   44,   44,   45,   13,    6,   12,    8,   11,    7,
       13,   13,   10,    9,   18,   17,   18,   18,   21,   21,
       22,    0,    0,   53,   53,    0,    0,    0,    0,    0,
        0,    0,   29,   28,    0,    0,   27,   26,   27,   46,
       42,   42,    0,   38,   39,   43,    6,    7,   19,   19,

        0,   15,   16,   20,   14,    0,    0,   53,    0,    0,
        2,    0,   23,    0,    0,    0,    0,   30,    0,    0,
       27,   27,   31,   42,   19,    0,   53,    0,    0,    0,
        0,    0,   42,   19,    0,   53,    0,    0,    0,    0,
        0,   42,   19,    0,    0,    0,    0,    0,    0,    0,
        5,    4,    0,    1,    0,    0,    3,    0
    } ;

static char e[128] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    2,    1,    4,    1,    5,    6,    1,    1,    7,
        7,    7,    7,    8,    9,   10,    7,   11,   12,   12,
       12,   12,   12,   12,   12,   12,   12,    1,    1,    1,
        1,    1,    7,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
       13,   14,   15,   16,   17,    1,   18,   17,   19,   20,

       21,   17,   17,   17,   22,   17,   17,   23,   17,   24,
       25,   17,   17,   26,   27,   28,   17,   17,   17,   17,
       17,   17,   29,    7,   30,    1,    1
    } ;

static char m[31] =
    {   0,
        1,    1,    2,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    3,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    4
    } ;

static short int b[180] =
    {   0,
        0,    2,   15,   43,   70,   98,    7,   20,    0,    1,
       23,   24,   27,   40,  127,  139,  332,  331,   49,   52,
       55,   60,  319,   51,  151,  336,  320,  336,  336,    3,
      336,  307,   60,  179,  336,  336,  336,  336,   15,  336,
      336,  336,  336,   63,  336,  336,  336,  336,   69,  308,
      336,    0,   72,  336,  336,  311,  336,  336,  336,   40,
      296,    0,  336,  336,  336,  336,   73,  300,  336,    0,
      336,   72,   79,  336,   80,    0,   94,  302,  276,  277,
      273,  268,  288,  336,   84,   92,    0,  336,  209,   93,
      336,  100,    0,  336,  336,  336,  287,  102,  336,  104,

        0,  336,  336,  336,  336,  106,  270,  111,  278,  122,
      336,  274,  336,  243,  242,  220,  219,  336,  121,  197,
        0,    0,  336,  115,  135,  144,  149,  156,  157,  151,
      148,  151,  156,  163,  229,  336,  143,  126,  122,  118,
      234,  336,  336,  162,  115,   98,   74,   75,  236,   49,
      336,  336,   36,  336,   24,   14,  336,  336,  251,  255,
      259,  263,  267,  271,  275,  279,  283,  287,  291,  295,
      299,  303,  307,  311,  315,  319,  323,  327,  331
    } ;

static short int d[180] =
    {   0,
      158,  158,  159,  159,  160,  160,  161,  161,  158,  158,
      162,  162,  163,  163,  164,  164,  165,  165,  166,  166,
      167,  167,  168,  169,  158,  158,  158,  158,  158,  158,
      158,  170,  169,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  169,  158,  158,  158,  158,  171,  172,
      158,  173,  169,  158,  158,  158,  158,  158,  158,  158,
      168,   25,  158,  158,  158,  158,  174,  175,  158,  176,
      158,  168,  168,  158,  158,  169,  177,  178,  158,  158,
      158,  158,  158,  158,  170,  170,  179,  158,  158,  158,
      158,  158,  171,  158,  158,  158,  158,  158,  158,  158,

      174,  158,  158,  158,  158,  168,  168,  158,  177,  177,
      158,  178,  158,  158,  158,  158,  158,  158,  170,  170,
      179,   89,  158,  158,  158,  168,  158,  158,  158,  158,
      158,  170,  158,  158,  168,  158,  158,  158,  158,  158,
      170,  158,  158,  168,  158,  158,  158,  158,  170,  158,
      158,  158,  158,  158,  158,  158,  158,-32767,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158
    } ;

static short int n[367] =
    {   0,
      158,  158,   45,   45,   84,   84,  158,   25,  158,   42,
       43,  158,   23,   24,   23,   24,   27,   28,   29,   30,
       44,   31,   42,   43,   31,   90,   90,   32,   33,   46,
       46,   48,   48,   44,  157,   52,   49,   49,   50,   50,
       53,   54,  156,   34,   27,   28,   29,   30,   52,   31,
       98,   98,   31,   53,   54,   32,   33,   66,   35,  155,
       66,   75,   67,   70,   68,   67,   76,   68,   70,   71,
       75,   34,   37,   75,   71,   76,  154,   38,   76,   92,
       39,   39,   75,  100,   93,   73,  105,   76,  101,  106,
      108,  108,  153,   72,  107,  110,  111,   86,  118,   40,

       37,  152,  119,   90,   90,   38,   85,  120,   39,   39,
      124,  124,   98,   98,  125,  125,  126,  126,  151,   73,
      105,  127,  127,  110,  111,  133,  133,   40,   56,   57,
       58,  132,  132,  150,   86,  118,   59,   60,   60,   61,
       56,   57,   58,  148,   62,  134,  134,  147,   59,   60,
       60,   61,   77,  146,  135,  135,   78,   73,  105,  136,
      136,  141,  141,  145,   86,  118,  142,  142,  140,   79,
       80,  139,   81,  143,  143,   73,  105,  138,   82,   87,
       87,  137,   87,   87,   87,   87,   87,   87,   87,   88,
       88,   87,   87,   87,   87,   89,   89,   89,   89,   89,

       89,   89,   89,   89,   89,   89,   89,   87,   87,  121,
      121,   85,  121,  121,  121,  121,  121,  121,  121,  122,
      122,  121,  121,  121,  121,  122,  122,  122,  122,  122,
      122,  122,  122,  122,  122,  122,  122,  121,  123,  144,
      144,  131,   73,  105,  149,  149,  130,   86,  118,   86,
      118,   26,   26,   26,   26,   36,   36,   36,   36,   41,
       41,   41,   41,   47,  129,   47,   47,   51,  128,   51,
       51,   55,   55,   55,   55,   63,  113,   63,   63,   65,
      111,   65,   65,   69,   72,   69,   69,   72,   97,   83,
       72,   74,  117,   74,   74,   85,  116,  115,   85,   91,

      114,   91,   91,   94,  113,   94,   94,   96,  103,   73,
       96,   99,   97,   99,   99,  102,   95,  102,  102,  104,
       86,   83,  104,  109,  109,  109,  109,  112,  112,  112,
      112,  121,   73,  121,   64,   64,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158
    } ;

static short int c[367] =
    {   0,
        0,    0,    9,   10,   30,   30,    0,    2,    0,    7,
        7,    0,    1,    1,    2,    2,    3,    3,    3,    3,
        7,    3,    8,    8,    3,   39,   39,    3,    3,    9,
       10,   11,   12,    8,  156,   13,   11,   12,   11,   12,
       13,   13,  155,    3,    4,    4,    4,    4,   14,    4,
       60,   60,    4,   14,   14,    4,    4,   19,    4,  153,
       20,   24,   19,   21,   19,   20,   24,   20,   22,   21,
       33,    4,    5,   44,   22,   33,  150,    5,   44,   49,
        5,    5,   53,   67,   49,   72,   72,   53,   67,   73,
       75,   75,  148,   73,   73,   77,   77,   85,   85,    5,

        6,  147,   86,   90,   90,    6,   86,   86,    6,    6,
       92,   92,   98,   98,  100,  100,  106,  106,  146,  106,
      106,  108,  108,  110,  110,  124,  124,    6,   15,   15,
       15,  119,  119,  145,  119,  119,   15,   15,   15,   15,
       16,   16,   16,  140,   16,  125,  125,  139,   16,   16,
       16,   16,   25,  138,  126,  126,   25,  126,  126,  127,
      127,  132,  132,  137,  132,  132,  133,  133,  131,   25,
       25,  130,   25,  134,  134,  144,  144,  129,   25,   34,
       34,  128,   34,   34,   34,   34,   34,   34,   34,   34,
       34,   34,   34,   34,   34,   34,   34,   34,   34,   34,

       34,   34,   34,   34,   34,   34,   34,   34,   34,   89,
       89,  120,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
       89,   89,   89,   89,   89,   89,   89,   89,   89,  135,
      135,  117,  135,  135,  141,  141,  116,  141,  141,  149,
      149,  159,  159,  159,  159,  160,  160,  160,  160,  161,
      161,  161,  161,  162,  115,  162,  162,  163,  114,  163,
      163,  164,  164,  164,  164,  165,  112,  165,  165,  166,
      109,  166,  166,  167,  107,  167,  167,  168,   97,   83,
      168,  169,   82,  169,  169,  170,   81,   80,  170,  171,

       79,  171,  171,  172,   78,  172,  172,  173,   68,   61,
      173,  174,   56,  174,  174,  175,   50,  175,  175,  176,
       32,   27,  176,  177,  177,  177,  177,  178,  178,  178,
      178,  179,   23,  179,   18,   17,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158,  158,  158,  158,  158,
      158,  158,  158,  158,  158,  158
    } ;


/* these declarations have to come after the section 1 code or lint gets
 * confused about whether the variables are used
 */
FILE *yyin = stdin, *yyout = stdout;

/* these variables are all declared out here so that section 3 code can
 * manipulate them
 */
static int yy_start, yy_b_buf_p, yy_c_buf_p, yy_e_buf_p;
static int yy_saw_eof, yy_init = 1;

/* yy_ch_buf has to be 1 character longer than YY_BUF_SIZE, since when
 * setting up yytext we can try to put a '\0' just past the end of the
 * matched text
 */
static char yy_ch_buf[YY_BUF_SIZE + 1];
static int yy_st_buf[YY_BUF_SIZE];
static char yy_hold_char;
char *yytext;
static int yyleng;

YY_DECL
    {
    int yy_n_chars, yy_lp, yy_iii, yy_buf_pos, yy_act;


    static int bracelevel, didadef;
    int i;
    char myesc();



    if ( yy_init )
	{
	YY_INIT;
	yy_start = 1;
	yy_init = 0;
	}

    goto get_next_token;

do_action:
    for ( ; ; )
	{
	YY_DO_BEFORE_ACTION

#ifdef FLEX_DEBUG
	fprintf( stderr, "--accepting rule #%d\n", yy_act );
#endif
	switch ( yy_act )
	    {
case 1:
# line 56 "scan.l"
{
			BEGIN(COR);
			return CORRECT;
			}
	YY_BREAK
case 2:
# line 61 "scan.l"
{
			/* I'm a comment */
			}
	YY_BREAK
case 3:
# line 65 "scan.l"
{
			BEGIN(COR);
			return TOLERANCE;
			}
	YY_BREAK
case 4:
# line 70 "scan.l"
{
			BEGIN(COR);
			return INSERT;
			}
	YY_BREAK
case 5:
# line 75 "scan.l"
{
			BEGIN(COR);
			return DELETE;
			}
	YY_BREAK
case 6:
# line 80 "scan.l"
{
			}
	YY_BREAK
case 7:
# line 83 "scan.l"
{
			yylval = myctoi( yytext );
			return ( NUMBER );
			}
	YY_BREAK
case 8:
# line 88 "scan.l"
{
			BEGIN(QUOTECOR);
			return '"';
			}
	YY_BREAK
case 9:
# line 93 "scan.l"
{
			BEGIN(COR);
			return '"';
			}
	YY_BREAK
case 10:
# line 98 "scan.l"
{
			RETURNCHAR;
			}
	YY_BREAK
case 11:
# line 102 "scan.l"
{
			return '.';
			}
	YY_BREAK
case 12:
# line 106 "scan.l"
{
			return '\n';
			}
	YY_BREAK
case 13:
# line 110 "scan.l"
{
			RETURNCHAR;
			}
	YY_BREAK
case 14:
# line 114 "scan.l"
{
			(void) strcpy( nmstr, yytext );

			/* push back everything but the leading bracket
			 * so the ccl can be rescanned
			 */
			PUT_BACK_STRING(nmstr, 1);

			BEGIN(FIRSTCCLCOR);
			return ( '[' );
			}
	YY_BREAK
case 15:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 126 "scan.l"
BEGIN(CCLCOR); return ( '^' );
	YY_BREAK
case 16:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 127 "scan.l"
return ( '^' );
	YY_BREAK
case 17:
# line 128 "scan.l"
BEGIN(CCLCOR); yylval = '-'; return ( CHAR );
	YY_BREAK
case 18:
# line 129 "scan.l"
BEGIN(CCLCOR); RETURNCHAR;
	YY_BREAK
case 19:
# line 130 "scan.l"
{
			yylval = myesc( yytext );
			BEGIN(CCLCOR);
			return ( CHAR );
			}
	YY_BREAK
case 20:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 136 "scan.l"
return ( '-' );
	YY_BREAK
case 21:
# line 137 "scan.l"
RETURNCHAR;
	YY_BREAK
case 22:
# line 138 "scan.l"
BEGIN(COR); return ( ']' );
	YY_BREAK
case 23:
# line 141 "scan.l"
{
			BEGIN(MAIN);
			}
	YY_BREAK
case 24:
# line 146 "scan.l"
return ( '^' );
	YY_BREAK
case 25:
# line 147 "scan.l"
BEGIN(QUOTE); return ( '"' );
	YY_BREAK
case 26:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 148 "scan.l"
BEGIN(NUM); return ( '{' );
	YY_BREAK
case 27:
# line 149 "scan.l"
BEGIN(BRACEERROR);
	YY_BREAK
case 28:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 150 "scan.l"
return ( '$' );
	YY_BREAK
case 29:
# line 152 "scan.l"
{ /* needs to be separate from following rule due to
			   * bug with trailing context
			   */
			bracelevel = 0;
			return ( '\n' );
			}
	YY_BREAK
case 30:
# line 159 "scan.l"
{
			(void) strcpy( nmstr, yytext );

			/* push back everything but the leading bracket
			 * so the ccl can be rescanned
			 */
			PUT_BACK_STRING(nmstr, 1);

			BEGIN(FIRSTCCL);
			return ( '[' );
			}
	YY_BREAK
case 31:
# line 171 "scan.l"
{
			register char *nmdefptr;
			char *ndlookup();

			(void) strcpy( nmstr, yytext );
			nmstr[yyleng - 1] = '\0';  /* chop trailing brace */

			/* lookup from "nmstr + 1" to chop leading brace */
			if ( ! (nmdefptr = ndlookup( nmstr + 1 )) )
			    synerr( "undefined {name}" );

			else
			    { /* push back name surrounded by ()'s */
			    unput(')');
			    PUT_BACK_STRING(nmdefptr, 0);
			    unput('(');
			    }
			}
	YY_BREAK
case 32:
# line 190 "scan.l"
return ( yytext[0] );
	YY_BREAK
case 33:
# line 191 "scan.l"
RETURNCHAR;
	YY_BREAK
case 34:
# line 192 "scan.l"
++linenum; return ( '\n' );
	YY_BREAK
case 35:
# line 195 "scan.l"
RETURNCHAR;
	YY_BREAK
case 36:
# line 196 "scan.l"
BEGIN(MAIN); return ( '"' );
	YY_BREAK
case 37:
# line 198 "scan.l"
{
			synerr( "missing quote" );
			BEGIN(MAIN);
			++linenum;
			return ( '"' );
			}
	YY_BREAK
case 38:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 206 "scan.l"
BEGIN(CCL); return ( '^' );
	YY_BREAK
case 39:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 207 "scan.l"
return ( '^' );
	YY_BREAK
case 40:
# line 208 "scan.l"
BEGIN(CCL); yylval = '-'; return ( CHAR );
	YY_BREAK
case 41:
# line 209 "scan.l"
BEGIN(CCL); RETURNCHAR;
	YY_BREAK
case 42:
# line 210 "scan.l"
{
			yylval = myesc( yytext );
			BEGIN(CCL);
			return ( CHAR );
			}
	YY_BREAK
case 43:
YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */
yy_c_buf_p = yy_b_buf_p;
YY_DO_BEFORE_ACTION; /* set up yytext again */
# line 216 "scan.l"
return ( '-' );
	YY_BREAK
case 44:
# line 217 "scan.l"
RETURNCHAR;
	YY_BREAK
case 45:
# line 218 "scan.l"
BEGIN(MAIN); return ( ']' );
	YY_BREAK
case 46:
# line 222 "scan.l"
{
			yylval = myctoi( yytext );
			return ( NUMBER );
			}
	YY_BREAK
case 47:
# line 227 "scan.l"
return ( ',' );
	YY_BREAK
case 48:
# line 228 "scan.l"
BEGIN(MAIN); return ( '}' );
	YY_BREAK
case 49:
# line 230 "scan.l"
{
			synerr( "bad character inside {}'s" );
			BEGIN(MAIN);
			return ( '}' );
			}
	YY_BREAK
case 50:
# line 236 "scan.l"
{
			synerr( "missing }" );
			BEGIN(MAIN);
			++linenum;
			return ( '}' );
			}
	YY_BREAK
case 51:
# line 244 "scan.l"
synerr( "bad name in {}'s" ); BEGIN(MAIN);
	YY_BREAK
case 52:
# line 245 "scan.l"
synerr( "missing }" ); ++linenum; BEGIN(MAIN);
	YY_BREAK
case 53:
# line 249 "scan.l"
{
			yylval = myesc( yytext );
			return ( CHAR );
			}
	YY_BREAK

case YY_NEW_FILE:
break; /* begin reading from new file */

case YY_DO_DEFAULT:
YY_DEFAULT_ACTION;
break;

case YY_END_TOK:
return ( YY_END_TOK );

default:
YY_FATAL_ERROR( "fatal flex scanner internal error" );
	    }

get_next_token:
	{
	register int yy_curst;
	register char yy_sym;

	YY_DO_BEFORE_SCAN

	/* set up to begin running DFA */

	yy_curst = yy_start;

	if ( yy_ch_buf[yy_c_buf_p] == '\n' )
	    ++yy_curst;

	/* yy_b_buf_p points to the position in yy_ch_buf
	 * of the start of the current run.
	 */

	yy_b_buf_p = yy_c_buf_p + 1;

	do /* until the machine jams */
	    {
	    if ( yy_c_buf_p == yy_e_buf_p )
		{ /* need more input */
		if ( yy_e_buf_p >= YY_BUF_LIM )
		    { /* not enough room to do another read */
		    /* see if we can make some room for more chars */

		    yy_n_chars = yy_e_buf_p - yy_b_buf_p;

		    if ( yy_n_chars >= 0 )
			/* shift down buffer to make room */
			for ( yy_iii = 0; yy_iii <= yy_n_chars; ++yy_iii )
			    {
			    yy_buf_pos = yy_b_buf_p + yy_iii;
			    yy_ch_buf[yy_iii] = yy_ch_buf[yy_buf_pos];
			    yy_st_buf[yy_iii] = yy_st_buf[yy_buf_pos];
			    }

		    yy_b_buf_p = 0;
		    yy_e_buf_p = yy_n_chars;

		    if ( yy_e_buf_p >= YY_BUF_LIM )
			YY_FATAL_ERROR( "flex input buffer overflowed" );

		    yy_c_buf_p = yy_e_buf_p;
		    }

		else if ( yy_saw_eof )
		    {
saweof:		    if ( yy_b_buf_p > yy_e_buf_p )
			{
			if ( yywrap() )
			    {
			    yy_act = YY_END_TOK;
			    goto do_action;
			    }
			
			else
			    {
			    YY_INIT;
			    yy_act = YY_NEW_FILE;
			    goto do_action;
			    }
			}

		    else /* do a jam to eat up more input */
			{
#ifndef FLEX_INTERACTIVE_SCANNER
			/* we're going to decrement yy_c_buf_p upon doing
			 * the jam.  In this case, that's wrong, since
			 * it points to the last non-jam character.  So
			 * we increment it now to counter the decrement.
			 */
			++yy_c_buf_p;
#endif
			break;
			}
		    }

		YY_INPUT( (yy_ch_buf + yy_c_buf_p + 1), yy_n_chars,
			  YY_MAX_LINE );

		if ( yy_n_chars == YY_NULL )
		    {
		    if ( yy_saw_eof )
	YY_FATAL_ERROR( "flex scanner saw EOF twice - shouldn't happen" );
		    yy_saw_eof = 1;
		    goto saweof;
		    }

		yy_e_buf_p += yy_n_chars;
		}

	    ++yy_c_buf_p;

#ifdef FLEX_USE_ECS
	    yy_sym = e[yy_ch_buf[yy_c_buf_p]];
#else
	    yy_sym = yy_ch_buf[yy_c_buf_p];
#endif

#ifdef FLEX_FULL_TABLE
	    yy_curst = n[yy_curst][yy_sym];

#else /* get next state from compressed table */

	    while ( c[b[yy_curst] + yy_sym] != yy_curst )
		{
		yy_curst = d[yy_curst];

#ifdef FLEX_USE_MECS
		/* we've arrange it so that templates are never chained
		 * to one another.  This means we can afford make a
		 * very simple test to see if we need to convert to
		 * yy_sym's meta-equivalence class without worrying
		 * about erroneously looking up the meta-equivalence
		 * class twice
		 */

		if ( yy_curst >= YY_TEMPLATE )
		    yy_sym = m[yy_sym];
#endif
		}

	    yy_curst = n[b[yy_curst] + yy_sym];

#endif

	    yy_st_buf[yy_c_buf_p] = yy_curst;

	    }
#ifdef FLEX_INTERACTIVE_SCANNER
	while ( b[yy_curst] != YY_JAM_BASE );
#else
	while ( yy_curst != YY_JAM );
	--yy_c_buf_p; /* put back character we jammed on */

#endif

	if ( yy_c_buf_p >= yy_b_buf_p )
	    { /* we matched some text */
	    yy_curst = yy_st_buf[yy_c_buf_p];
	    yy_lp = l[yy_curst];

#ifdef FLEX_REJECT_ENABLED
find_rule: /* we branch to this label when doing a REJECT */
#endif

	    for ( ; ; ) /* until we find what rule we matched */
		{
#ifdef FLEX_REJECT_ENABLED
		if ( yy_lp && yy_lp < l[yy_curst + 1] )
		    {
		    yy_act = a[yy_lp];
		    goto do_action; /* "continue 2" */
		    }
#else
		if ( yy_lp )
		    {
		    yy_act = yy_lp;
		    goto do_action; /* "continue 2" */
		    }
#endif

		if ( --yy_c_buf_p < yy_b_buf_p )
		    break;

		yy_curst = yy_st_buf[yy_c_buf_p];
		yy_lp = l[yy_curst];
		}
	    }

	/* if we got this far, then we didn't find any accepting
	 * states
	 */

	/* so that the default applies to the first char read */
	++yy_c_buf_p;

	yy_act = YY_DO_DEFAULT;
	}
	}

    /*NOTREACHED*/
    }


static int unput( c )
char c;

    {
    YY_DO_BEFORE_SCAN; /* undo effects of setting up yytext */

    if ( yy_c_buf_p == 0 )
	{
	register int i;
	register int yy_buf_pos = YY_BUF_MAX;

	for ( i = yy_e_buf_p; i >= yy_c_buf_p; --i )
	    {
	    yy_ch_buf[yy_buf_pos] = yy_ch_buf[i];
	    yy_st_buf[yy_buf_pos] = yy_st_buf[i];
	    --yy_buf_pos;
	    }

	yy_c_buf_p = YY_BUF_MAX - yy_e_buf_p;
	yy_e_buf_p = YY_BUF_MAX;
	}

    if ( yy_c_buf_p <= 0 )
	YY_FATAL_ERROR( "flex scanner push-back overflow" );

    if ( yy_c_buf_p >= yy_b_buf_p && yy_ch_buf[yy_c_buf_p] == '\n' )
	yy_ch_buf[yy_c_buf_p - 1] = '\n';

    yy_ch_buf[yy_c_buf_p--] = c;

    YY_DO_BEFORE_ACTION; /* set up yytext again */
    }


static int input()

    {
    int c;

    YY_DO_BEFORE_SCAN

    if ( yy_c_buf_p == yy_e_buf_p )
	{ /* need more input */
	int yy_n_chars;

	/* we can throw away the entire current buffer */
	if ( yy_saw_eof )
	    {
	    if ( yywrap() )
		return ( EOF );

	    YY_INIT;
	    }

	yy_b_buf_p = 0;
	YY_INPUT( yy_ch_buf, yy_n_chars, YY_MAX_LINE );

	if ( yy_n_chars == YY_NULL )
	    {
	    yy_saw_eof = 1;

	    if ( yywrap() )
		return ( EOF );

	    YY_INIT;

	    return ( input() );
	    }

	yy_c_buf_p = -1;
	yy_e_buf_p = yy_n_chars - 1;
	}

    c = yy_ch_buf[++yy_c_buf_p];

    YY_DO_BEFORE_ACTION;

    return ( c );
    }
# line 256 "scan.l"
