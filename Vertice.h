/*Cesar Vargas
 *AI Fall 2010
 *Vertice.h
 *Decision Trees Program
 */
#ifndef VERTICE_H_
#define VERTICE_H_
#include <iostream>
using namespace std;
class Vertice{
 public:
  int color;
  int shape;
  int weight;
  int type;
  Vertice();
  Vertice(int c,int s,int w, int t);
  void print();
};
#endif
