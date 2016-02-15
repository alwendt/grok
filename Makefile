
.SUFFIXES:
.SUFFIXES:  .o .s .c .y .pp

#
# Xenix 286 2.3.2 large model
#
LDFLAGS = -M2l -g -F 4000 
CFLAGS = -I$I -DUNIX=1 -LARGE -DUSG=1 -DSV

.c.o:	; 	-$(CC) $(LDFLAGS) $(CFLAGS) -c $*.c

# correction

scan.c:	scan.l
	/u/alan/bin/flex -I scan.l
	mv lex.yy.c scan.c

REPAIRFILES =  nfa.o ccl.o parse.o sym.o misc.o scan.o

parse.h parse.c : parse.y
	yacc -d parse.y
	@mv y.tab.c parse.c
	@mv y.tab.h parse.h

grok:	$(REPAIRFILES)
	cc $(LDFLAGS) -o grok $(REPAIRFILES)

clean:
	rm *.o *.log scan.c parse.c

test:	grok
	grok ncnb.def < test.in > test.out.tmp
	diff test.out test.out.tmp
