#Cesar Vargas
#AI Fall 2010
#Decision Tree Problem
CC=g++

CFLAGS=-c -g -Wall

all:	decisiontree

decisiontree: run.o vertice.o
	$(CC) run.o vertice.o -o decision.exe

run.o:	run.cpp
	$(CC) $(CFLAGS) run.cpp

vertice.o:	Vertice.cpp
	$(CC) $(CFLAGS) Vertice.cpp

clean:
	rm -rf *o decision.exe