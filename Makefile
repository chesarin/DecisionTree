#Cesar Vargas
#AI Fall 2010
#Decision Tree Problem
CC=g++

CFLAGS=-c -g -Wall

all:	decisiontree

decisiontree: run.o Vertice.o
	$(CC) run.o Vertice.o -o decision.exe

run.o:	run.cpp
	$(CC) $(CFLAGS) run.cpp

Vertice.o:	Vertice.cpp
	$(CC) $(CFLAGS) Vertice.cpp

clean:
	rm -rf *o decision.exe