/*Cesar Vargas
 *AI Fall 2010
 *Vertice.h
 *Decision Trees Program
 */
#include "Vertice.h"
// Vertice::Vertice(){
//   color = 0 ; shape = 0; weight = 0 ; type-0;
// }
Vertice::Vertice(int c,int s, int w, int t){
  color =c; shape = s; weight = w; type = t;
}
void Vertice::print(){
  cout << "color " << color << " shape " << shape << " weight " << weight << "class " << type << endl;
}
