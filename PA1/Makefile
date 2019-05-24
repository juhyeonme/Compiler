bar : lex.yy.o
	gcc -o bar lex.yy.o -ll

lex.yy.o : lex.yy.c
	gcc -c -o lex.yy.o lex.yy.c

lex.yy.c : foo.l
	flex foo.l

clean :
	rm -f bar lex.yy.o lex.yy.c

