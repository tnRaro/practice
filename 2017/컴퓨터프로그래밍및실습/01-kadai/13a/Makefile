CC = clang++ -std=c++11

all: main.o reducer.o Lex.o State.h
	$(CC) -o 13a.out main.o reducer.o Lex.o

main.o: main.cpp Lex.cpp reducer.cpp
	$(CC) -c main.cpp

reducer.o: is.h op.h reducer.h reducer.cpp
	$(CC) -c reducer.cpp

Lex.o: is.h op.h Lex.cpp Lex.h
	$(CC) -c Lex.cpp
