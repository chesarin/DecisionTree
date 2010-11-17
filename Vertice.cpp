#include "Vertice.h"
// Vertice::Vertice(){
//   color = 0 ; shape = 0; weight = 0.0 ; type-0;
// }
Vertice::Vertice(int c,int s, float w, int t){
  color =c; shape = s; weight = w; type = t;
}
void Vertice::print(){
  cout << "color " << color << " shape " << shape << " weight " << weight << "class " << type << endl;
}
