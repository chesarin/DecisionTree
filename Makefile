#Cesar Vargas
#AI Fall 2010
#Decision Tree Problem
CC=g++

CFLAGS=-c -g -Wall

all:	decisiontree

decisiontree: run.o
	$(CC) run.o -o decision.exe

run.o:	run.cpp
	$(CC) $(CFLAGS) run.cpp

clean:
	rm -rf *o decision.exe