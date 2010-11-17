/*Cesar Vargas
 *AI Fall 2010
 *Vertice.h
 */
#ifndef VERTICE_H_
#define VERTICE_H_
#include <iostream>
using namespace std;
class Vertice{
 public:
  int color;
  int shape;
  float weight;
  int type;
  Vertice();
  Vertice(int c,int s,float w, int t);
  void print();
};
#endif
