# define CHAR 257
# define NUMBER 258
# define SECTEND 259
# define SCDECL 260
# define XSCDECL 261
# define WHITESPACE 262
# define NAME 263
# define CORRECT 264
# define STRING 265
# define DELETE 266
# define INSERT 267
# define TOLERANCE 268

# line 19 "parse.y"
#include "flexdef.h"

struct Ccl ccl, anyccl, ccl0;

int pat, eps, lastchar, i, firstnfa, finalst;
char clower();

int linenum, syntaxerror;


static void makeany()
    {
    static int madeany = false;
    if ( ! madeany )
	{
	/* create the '.' character class */
	checkedges(__LINE__, __FILE__);
	cclinit( &anyccl );
	ccladd( &anyccl, '\n' );
	checkedges(__LINE__, __FILE__);
	cclnegate( &anyccl );
	checkedges(__LINE__, __FILE__);

	madeany = true;
	}
    }


#define yyclearin yychar = -1
#define yyerrok yyerrflag = 0
extern int yychar;
extern int yyerrflag;
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 150
#endif
#ifndef YYSTYPE
#define YYSTYPE int
#endif
YYSTYPE yylval, yyval;
typedef int yytabelem;
# define YYERRCODE 256

# line 387 "parse.y"


/* synerr - report a syntax error
 *
 * synopsis
 *    char str[];
 *    synerr( str );
 */

synerr( str )
char str[];

    {
    syntaxerror = true;
    fprintf( stderr, "Syntax error at line %d:  %s\n", linenum, str );
    }


/* yyerror - eat up an error message from the parser
 *
 * synopsis
 *    char msg[];
 *    yyerror( msg );
 */

yyerror( msg )
char msg[];

    {
    }

yytabelem yyexca[] ={
-1, 1,
	0, -1,
	-2, 0,
-1, 4,
	0, 1,
	-2, 17,
	};
# define YYNPROD 45
# define YYLAST 259
yytabelem yyact[]={

     8,    29,    29,    16,    72,    66,    64,    30,    30,    61,
    60,    53,    37,    27,    27,    13,    36,    20,    70,    33,
    67,    45,    46,    73,    63,    43,    35,    26,    25,    65,
    34,    41,    52,    23,    69,    57,    28,    12,    56,    39,
    38,    49,    47,    14,    14,    18,    14,    19,    21,    11,
    32,     5,     4,    44,     3,     2,    40,     1,    17,    17,
    17,    22,     0,     0,    50,     0,    55,     0,     0,    14,
    51,    59,    58,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    68,    48,     0,     0,     0,     0,    42,     0,     0,
     0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
     0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    24,    31,    31,    15,     0,     0,     0,
     0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     6,     0,     7,     9,    10 };
yytabelem yypact[]={

 -1000, -1000, -1000,   -10, -1000, -1000,   -31,   -31, -1000,   -31,
  -241,   -33, -1000, -1000, -1000, -1000,  -238,   -68,  -242,  -246,
    30,    29,   -32,   -11, -1000,   -32,   -21, -1000, -1000, -1000,
   -32, -1000,   -31,    -2,   -82, -1000,    28,    25, -1000, -1000,
   -11, -1000,   -32, -1000,   -21, -1000, -1000, -1000,  -248,   -25,
   -17,  -252, -1000, -1000,   -16,   -88, -1000, -1000, -1000,   -32,
   -24, -1000, -1000, -1000,    24,  -239, -1000,  -121, -1000, -1000,
 -1000,  -102, -1000, -1000 };
yytabelem yypgo[]={

     0,    57,    55,    54,    52,    51,    37,    50,    36,    49,
    48,    33,    31,    28,    27,    41,    30 };
yytabelem yyr1[]={

     0,     1,     2,     3,     3,     7,     5,     5,     5,     5,
     5,     6,     6,     6,     6,     4,     4,     9,    10,    10,
    10,    12,    12,    11,    11,    13,    13,    14,    14,    14,
    14,    14,    14,    14,    14,    14,    14,    14,     8,     8,
    16,    16,    16,    15,    15 };
yytabelem yyr2[]={

     0,     6,     1,     4,     0,     1,    13,     9,     3,     9,
     7,     3,     3,     3,     7,     8,     0,     1,     7,     5,
     3,     3,     1,     7,     3,     5,     3,     5,     5,     5,
    13,    11,     9,     3,     3,     7,     7,     3,     6,     9,
     9,     5,     1,     5,     1 };
yytabelem yychk[]={

 -1000,    -1,    -2,    -3,    -4,    -5,   264,   266,    10,   267,
   268,    -9,    -6,    46,    -8,   257,    34,    91,    -6,    -6,
   258,   -10,    94,   -11,   256,   -13,   -14,    46,    -8,    34,
    40,   257,    -7,   257,   -16,    94,   258,   258,    10,    10,
   -11,   -12,   124,    36,   -14,    42,    43,    63,   123,   -15,
   -11,    -6,    34,    93,   257,   -16,    10,    10,   -12,   -13,
   258,    34,   257,    41,   258,    45,    93,    44,   125,    10,
   257,   258,   125,   125 };
yytabelem yydef[]={

     2,    -2,     4,    16,    -2,     3,     0,     0,     8,     0,
     0,     0,     5,    11,    12,    13,     0,    42,     0,     0,
     0,     0,     0,    22,    20,    24,    26,    33,    34,    44,
     0,    37,     0,     0,     0,    42,     0,     0,    10,    15,
    22,    19,     0,    21,    25,    27,    28,    29,     0,     0,
     0,     0,    14,    38,    41,     0,     7,     9,    18,    23,
     0,    35,    43,    36,     0,     0,    39,     0,    32,     6,
    40,     0,    31,    30 };
typedef struct { char *t_name; int t_val; } yytoktype;
#ifndef YYDEBUG
#	define YYDEBUG	0	/* don't allow debugging */
#endif

#if YYDEBUG

yytoktype yytoks[] =
{
	"CHAR",	257,
	"NUMBER",	258,
	"SECTEND",	259,
	"SCDECL",	260,
	"XSCDECL",	261,
	"WHITESPACE",	262,
	"NAME",	263,
	"CORRECT",	264,
	"STRING",	265,
	"DELETE",	266,
	"INSERT",	267,
	"TOLERANCE",	268,
	"-unknown-",	-1	/* ends search */
};

char * yyreds[] =
{
	"-no such reduction-",
	"goal : initlex correctionrules sect2",
	"initlex : /* empty */",
	"correctionrules : correctionrules onerule",
	"correctionrules : /* empty */",
	"onerule : CORRECT item",
	"onerule : CORRECT item item NUMBER '\n'",
	"onerule : DELETE item NUMBER '\n'",
	"onerule : '\n'",
	"onerule : INSERT item NUMBER '\n'",
	"onerule : TOLERANCE NUMBER '\n'",
	"item : '.'",
	"item : fullccl",
	"item : CHAR",
	"item : '"' CHAR '"'",
	"sect2 : sect2 initforrule flexrule '\n'",
	"sect2 : /* empty */",
	"initforrule : /* empty */",
	"flexrule : '^' re eol",
	"flexrule : re eol",
	"flexrule : error",
	"eol : '$'",
	"eol : /* empty */",
	"re : re '|' series",
	"re : series",
	"series : series singleton",
	"series : singleton",
	"singleton : singleton '*'",
	"singleton : singleton '+'",
	"singleton : singleton '?'",
	"singleton : singleton '{' NUMBER ',' NUMBER '}'",
	"singleton : singleton '{' NUMBER ',' '}'",
	"singleton : singleton '{' NUMBER '}'",
	"singleton : '.'",
	"singleton : fullccl",
	"singleton : '"' string '"'",
	"singleton : '(' re ')'",
	"singleton : CHAR",
	"fullccl : '[' ccl ']'",
	"fullccl : '[' '^' ccl ']'",
	"ccl : ccl CHAR '-' CHAR",
	"ccl : ccl CHAR",
	"ccl : /* empty */",
	"string : string CHAR",
	"string : /* empty */",
};
#endif /* YYDEBUG */
/*	@(#) yaccpar.src 1.1 87/05/20 
 *
 *	Copyright (C) The Santa Cruz Operation, 1985.
 *	This Module contains Proprietary Information of
 *	The Santa Cruz Operation, Microsoft Corporation
 *	and AT&T, and should be treated as Confidential.
 */

/*
** Skeleton parser driver for yacc output
*/

/*
** yacc user known macros and defines
*/
#define YYERROR		goto yyerrlab
#define YYACCEPT	return(0)
#define YYABORT		return(1)
#define YYBACKUP( newtoken, newvalue )\
{\
	if ( yychar >= 0 || ( yyr2[ yytmp ] >> 1 ) != 1 )\
	{\
		yyerror( "syntax error - cannot backup" );\
		goto yyerrlab;\
	}\
	yychar = newtoken;\
	yystate = *yyps;\
	yylval = newvalue;\
	goto yynewstate;\
}
#define YYRECOVERING()	(!!yyerrflag)
#ifndef YYDEBUG
#	define YYDEBUG	1	/* make debugging available */
#endif

/*
** user known globals
*/
int yydebug;			/* set to 1 to get debugging */

/*
** driver internal defines
*/
#define YYFLAG		(-1000)

/*
** global variables used by the parser
*/
YYSTYPE yyv[ YYMAXDEPTH ];	/* value stack */
int yys[ YYMAXDEPTH ];		/* state stack */

YYSTYPE *yypv;			/* top of value stack */
int *yyps;			/* top of state stack */

int yystate;			/* current state */
int yytmp;			/* extra var (lasts between blocks) */

int yynerrs;			/* number of errors */
int yyerrflag;			/* error recovery flag */
int yychar;			/* current input token number */



/*
** yyparse - return 0 if worked, 1 if syntax error not recovered from
*/
int
yyparse()
{
	register YYSTYPE *yypvt;	/* top of value stack for $vars */

	/*
	** Initialize externals - yyparse may be called more than once
	*/
	yypv = &yyv[-1];
	yyps = &yys[-1];
	yystate = 0;
	yytmp = 0;
	yynerrs = 0;
	yyerrflag = 0;
	yychar = -1;

	goto yystack;
	{
		register YYSTYPE *yy_pv;	/* top of value stack */
		register int *yy_ps;		/* top of state stack */
		register int yy_state;		/* current state */
		register int  yy_n;		/* internal state number info */

		/*
		** get globals into registers.
		** branch to here only if YYBACKUP was called.
		*/
	yynewstate:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;
		goto yy_newstate;

		/*
		** get globals into registers.
		** either we just started, or we just finished a reduction
		*/
	yystack:
		yy_pv = yypv;
		yy_ps = yyps;
		yy_state = yystate;

		/*
		** top of for (;;) loop while no reductions done
		*/
	yy_stack:
		/*
		** put a state and value onto the stacks
		*/
#if YYDEBUG
		/*
		** if debugging, look up token value in list of value vs.
		** name pairs.  0 and negative (-1) are special values.
		** Note: linear search is used since time is not a real
		** consideration while debugging.
		*/
		if ( yydebug )
		{
			register int yy_i;

			printf( "State %d, token ", yy_state );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ++yy_ps >= &yys[ YYMAXDEPTH ] )	/* room on stack? */
		{
			yyerror( "yacc stack overflow" );
			YYABORT;
		}
		*yy_ps = yy_state;
		*++yy_pv = yyval;

		/*
		** we have a new state - find out what to do
		*/
	yy_newstate:
		if ( ( yy_n = yypact[ yy_state ] ) <= YYFLAG )
			goto yydefault;		/* simple state */
#if YYDEBUG
		/*
		** if debugging, need to mark whether new token grabbed
		*/
		yytmp = yychar < 0;
#endif
		if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
			yychar = 0;		/* reached EOF */
#if YYDEBUG
		if ( yydebug && yytmp )
		{
			register int yy_i;

			printf( "Received token " );
			if ( yychar == 0 )
				printf( "end-of-file\n" );
			else if ( yychar < 0 )
				printf( "-none-\n" );
			else
			{
				for ( yy_i = 0; yytoks[yy_i].t_val >= 0;
					yy_i++ )
				{
					if ( yytoks[yy_i].t_val == yychar )
						break;
				}
				printf( "%s\n", yytoks[yy_i].t_name );
			}
		}
#endif /* YYDEBUG */
		if ( ( ( yy_n += yychar ) < 0 ) || ( yy_n >= YYLAST ) )
			goto yydefault;
		if ( yychk[ yy_n = yyact[ yy_n ] ] == yychar )	/*valid shift*/
		{
			yychar = -1;
			yyval = yylval;
			yy_state = yy_n;
			if ( yyerrflag > 0 )
				yyerrflag--;
			goto yy_stack;
		}

	yydefault:
		if ( ( yy_n = yydef[ yy_state ] ) == -2 )
		{
#if YYDEBUG
			yytmp = yychar < 0;
#endif
			if ( ( yychar < 0 ) && ( ( yychar = yylex() ) < 0 ) )
				yychar = 0;		/* reached EOF */
#if YYDEBUG
			if ( yydebug && yytmp )
			{
				register int yy_i;

				printf( "Received token " );
				if ( yychar == 0 )
					printf( "end-of-file\n" );
				else if ( yychar < 0 )
					printf( "-none-\n" );
				else
				{
					for ( yy_i = 0;
						yytoks[yy_i].t_val >= 0;
						yy_i++ )
					{
						if ( yytoks[yy_i].t_val
							== yychar )
						{
							break;
						}
					}
					printf( "%s\n", yytoks[yy_i].t_name );
				}
			}
#endif /* YYDEBUG */
			/*
			** look through exception table
			*/
			{
				register int *yyxi = yyexca;

				while ( ( *yyxi != -1 ) ||
					( yyxi[1] != yy_state ) )
				{
					yyxi += 2;
				}
				while ( ( *(yyxi += 2) >= 0 ) &&
					( *yyxi != yychar ) )
					;
				if ( ( yy_n = yyxi[1] ) < 0 )
					YYACCEPT;
			}
		}

		/*
		** check for syntax error
		*/
		if ( yy_n == 0 )	/* have an error */
		{
			/* no worry about speed here! */
			switch ( yyerrflag )
			{
			case 0:		/* new error */
				yyerror( "syntax error" );
				goto skip_init;
			yyerrlab:
				/*
				** get globals into registers.
				** we have a user generated syntax type error
				*/
				yy_pv = yypv;
				yy_ps = yyps;
				yy_state = yystate;
				yynerrs++;
			skip_init:
			case 1:
			case 2:		/* incompletely recovered error */
					/* try again... */
				yyerrflag = 3;
				/*
				** find state where "error" is a legal
				** shift action
				*/
				while ( yy_ps >= yys )
				{
					yy_n = yypact[ *yy_ps ] + YYERRCODE;
					if ( yy_n >= 0 && yy_n < YYLAST &&
						yychk[yyact[yy_n]] == YYERRCODE)					{
						/*
						** simulate shift of "error"
						*/
						yy_state = yyact[ yy_n ];
						goto yy_stack;
					}
					/*
					** current state has no shift on
					** "error", pop stack
					*/
#if YYDEBUG
#	define _POP_ "Error recovery pops state %d, uncovers state %d\n"
					if ( yydebug )
						printf( _POP_, *yy_ps,
							yy_ps[-1] );
#	undef _POP_
#endif
					yy_ps--;
					yy_pv--;
				}
				/*
				** there is no state on stack with "error" as
				** a valid shift.  give up.
				*/
				YYABORT;
			case 3:		/* no shift yet; eat a token */
#if YYDEBUG
				/*
				** if debugging, look up token in list of
				** pairs.  0 and negative shouldn't occur,
				** but since timing doesn't matter when
				** debugging, it doesn't hurt to leave the
				** tests here.
				*/
				if ( yydebug )
				{
					register int yy_i;

					printf( "Error recovery discards " );
					if ( yychar == 0 )
						printf( "token end-of-file\n" );
					else if ( yychar < 0 )
						printf( "token -none-\n" );
					else
					{
						for ( yy_i = 0;
							yytoks[yy_i].t_val >= 0;
							yy_i++ )
						{
							if ( yytoks[yy_i].t_val
								== yychar )
							{
								break;
							}
						}
						printf( "token %s\n",
							yytoks[yy_i].t_name );
					}
				}
#endif /* YYDEBUG */
				if ( yychar == 0 )	/* reached EOF. quit */
					YYABORT;
				yychar = -1;
				goto yy_newstate;
			}
		}/* end if ( yy_n == 0 ) */
		/*
		** reduction by production yy_n
		** put stack tops, etc. so things right after switch
		*/
#if YYDEBUG
		/*
		** if debugging, print the string that is the user's
		** specification of the reduction which is just about
		** to be done.
		*/
		if ( yydebug )
			printf( "Reduce by (%d) \"%s\"\n",
				yy_n, yyreds[ yy_n ] );
#endif
		yytmp = yy_n;			/* value to switch over */
		yypvt = yy_pv;			/* $vars top of value stack */
		/*
		** Look in goto table for next state
		** Sorry about using yy_state here as temporary
		** register variable, but why not, if it works...
		** If yyr2[ yy_n ] doesn't have the low order bit
		** set, then there is no action to be done for
		** this reduction.  So, no saving & unsaving of
		** registers done.  The only difference between the
		** code just after the if and the body of the if is
		** the goto yy_stack in the body.  This way the test
		** can be made before the choice of what to do is needed.
		*/
		{
			/* length of production doubled with extra bit */
			register int yy_len = yyr2[ yy_n ];

			if ( !( yy_len & 01 ) )
			{
				yy_len >>= 1;
				yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
				yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
					*( yy_ps -= yy_len ) + 1;
				if ( yy_state >= YYLAST ||
					yychk[ yy_state =
					yyact[ yy_state ] ] != -yy_n )
				{
					yy_state = yyact[ yypgo[ yy_n ] ];
				}
				goto yy_stack;
			}
			yy_len >>= 1;
			yyval = ( yy_pv -= yy_len )[1];	/* $$ = $1 */
			yy_state = yypgo[ yy_n = yyr1[ yy_n ] ] +
				*( yy_ps -= yy_len ) + 1;
			if ( yy_state >= YYLAST ||
				yychk[ yy_state = yyact[ yy_state ] ] != -yy_n )
			{
				yy_state = yyact[ yypgo[ yy_n ] ];
			}
		}
					/* save until reenter driver code */
		yystate = yy_state;
		yyps = yy_ps;
		yypv = yy_pv;
	}
	/*
	** code supplied by user is placed in this switch
	*/
	switch( yytmp )
	{
		
case 2:
# line 54 "parse.y"
{
			/* initialize for processing rules */
			} break;
case 5:
# line 64 "parse.y"
{
			ccl0 = ccl;
			} break;
case 6:
# line 68 "parse.y"
{
			int	i, j;
			for (i = 0; i < 128; i++)
			    {
			    for (j = 0; j < 128; j++)
				{
				if (ccltest( &ccl0, i) && ccltest( &ccl, j))
				    {
				    correct_cost[i][j] = yypvt[-1];
				    }
				}
			    }
			} break;
case 7:
# line 83 "parse.y"
{
			int	i, j;
			for (i = 0; i < 128; i++)
			    {
			    if (ccltest( &ccl, i))
				{
				delete_cost[i] = yypvt[-1];
				}
			    }
			} break;
case 8:
# line 95 "parse.y"
{
			} break;
case 9:
# line 99 "parse.y"
{
			int	i;
			for (i = 0; i < 128; i++)
			    {
			    if (ccltest( &ccl, i))
				{
				insert_cost[i] = yypvt[-1];
				}
			    }
			} break;
case 10:
# line 111 "parse.y"
{
			tolerance = yypvt[-1];
			} break;
case 11:
# line 117 "parse.y"
{
			makeany();
			ccl = anyccl;
			} break;
case 12:
# line 123 "parse.y"
{
			} break;
case 13:
# line 127 "parse.y"
{
			cclinit( &ccl );
			ccladd( &ccl, yypvt[-0] );
			} break;
case 14:
# line 133 "parse.y"
{
			cclinit( &ccl );
			ccladd( &ccl, yypvt[-1] );
			} break;
case 17:
# line 143 "parse.y"
{
			/* initialize for a parse of one rule */
			} break;
case 18:
# line 149 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			pat = link_machines( yypvt[-1], yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			add_accept( pat );

			checkedges(__LINE__, __FILE__);
			firstnfa = pat;
			} break;
case 19:
# line 160 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			pat = link_machines( yypvt[-1], yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			add_accept( pat );
			checkedges(__LINE__, __FILE__);
			firstnfa = pat;
			} break;
case 20:
# line 170 "parse.y"
{ synerr( "unrecognized rule" ); } break;
case 21:
# line 174 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			eps = mkstate( SYM_EPSILON );
			checkedges(__LINE__, __FILE__);
			yyval = link_machines( eps, mkstate( '\n' ) );
			checkedges(__LINE__, __FILE__);
			} break;
case 22:
# line 183 "parse.y"
{
			checkedges(__LINE__, __FILE__);
		        yyval = mkstate( SYM_EPSILON );
			checkedges(__LINE__, __FILE__);
		        } break;
case 23:
# line 191 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = mkor( yypvt[-2], yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			} break;
case 24:
# line 198 "parse.y"
{
			yyval = yypvt[-0];
			} break;
case 25:
# line 205 "parse.y"
{
			/* this is where concatenation of adjacent patterns
			 * gets done
			 */
			checkedges(__LINE__, __FILE__);
			yyval = link_machines( yypvt[-1], yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			} break;
case 26:
# line 215 "parse.y"
{ yyval = yypvt[-0]; } break;
case 27:
# line 219 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = mkclos( yypvt[-1] );
			checkedges(__LINE__, __FILE__);
			} break;
case 28:
# line 226 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = mkposcl( yypvt[-1] );
			checkedges(__LINE__, __FILE__);
			} break;
case 29:
# line 233 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = mkopt( yypvt[-1] );
			checkedges(__LINE__, __FILE__);
			} break;
case 30:
# line 240 "parse.y"
{
			if ( yypvt[-3] > yypvt[-1] || yypvt[-3] < 0 )
			    {
			    synerr( "bad iteration values" );
			    yyval = yypvt[-5];
			    }
			else {
			    if ( yypvt[-3] == 0 )
				{
				checkedges(__LINE__, __FILE__);
				yyval = mkrep( yypvt[-5], 1, yypvt[-1] );
				checkedges(__LINE__, __FILE__);
				yyval = mkopt( yyval );
				checkedges(__LINE__, __FILE__);
				}
			    else {
				checkedges(__LINE__, __FILE__);
				yyval = mkrep( yypvt[-5], yypvt[-3], yypvt[-1] );
				checkedges(__LINE__, __FILE__);
				}
			    }
			} break;
case 31:
# line 264 "parse.y"
{
			if ( yypvt[-2] <= 0 )
			    {
			    synerr( "iteration value must be positive" );
			    yyval = yypvt[-4];
			    }

			else
			    yyval = mkrep( yypvt[-4], yypvt[-2], INFINITY );
			} break;
case 32:
# line 276 "parse.y"
{
			if ( yypvt[-1] <= 0 )
			    {
			    synerr( "iteration value must be positive" );
			    yyval = yypvt[-3];
			    }

			else {
			    checkedges(__LINE__, __FILE__);
			    yyval = link_machines( yypvt[-3], copysingl( yypvt[-3], yypvt[-1] - 1 ) );
			    checkedges(__LINE__, __FILE__);
			    }
			} break;
case 33:
# line 291 "parse.y"
{

			makeany();
			yyval = ccl2nfa( &anyccl );
			checkedges(__LINE__, __FILE__);
			} break;
case 34:
# line 299 "parse.y"
{
			yyval = ccl2nfa( &ccl );
			} break;
case 35:
# line 305 "parse.y"
{ yyval = yypvt[-1]; } break;
case 36:
# line 308 "parse.y"
{ yyval = yypvt[-1]; } break;
case 37:
# line 311 "parse.y"
{
			if ( yypvt[-0] == '\0' )
			    synerr( "null in rule" );

			checkedges(__LINE__, __FILE__);
			yyval = mkstate( yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			} break;
case 39:
# line 324 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			cclnegate( &ccl );
			checkedges(__LINE__, __FILE__);
			} break;
case 40:
# line 332 "parse.y"
{
			if ( yypvt[-2] > yypvt[-0] )
			    synerr( "negative range in character class" );

			else
			    {
			    for ( i = yypvt[-2]; i <= yypvt[-0]; ++i )
				{
				checkedges(__LINE__, __FILE__);
			        ccladd( &ccl, i );
				checkedges(__LINE__, __FILE__);
				}

			    checkedges(__LINE__, __FILE__);
			    lastchar = yypvt[-0];
			    }
			
			yyval = yypvt[-3];
			} break;
case 41:
# line 353 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			ccladd( &ccl, yypvt[-0] );
			checkedges(__LINE__, __FILE__);
			lastchar = yypvt[-0];
			checkedges(__LINE__, __FILE__);
			yyval = yypvt[-1];
			} break;
case 42:
# line 363 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			lastchar = 0;
			checkedges(__LINE__, __FILE__);
			cclinit( &ccl );
			checkedges(__LINE__, __FILE__);
			} break;
case 43:
# line 373 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = link_machines( yypvt[-1], mkstate( yypvt[-0] ) );
			checkedges(__LINE__, __FILE__);
			} break;
case 44:
# line 380 "parse.y"
{
			checkedges(__LINE__, __FILE__);
			yyval = mkstate( SYM_EPSILON );
			checkedges(__LINE__, __FILE__);
			} break;
	}
	goto yystack;		/* reset registers in driver code */
}
