/*Cesar Vargas
 *AI Fall 2010
 *Decision Trees Program
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
//#include "Vertice.h"
int num_vectors;
int num_features;
using namespace std;
vector< vector<int> > v_matrix;
vector<int> vertex;

void prompt();
void parse(string input);
void print(vector<int>& input);
void entropy();
double prob(int in,int total);
double ind_entropy(int in, int total);

int main(){
  prompt();
  /*  string stest = "1   1   401 0^M";
  string stest1 = "1   1   402 0^M";
  string stest2 = "1   1   403 0^M";
  parse(stest);
  print(vertex);
  parse(stest1);
  print (vertex);
  parse (stest2);
  print (vertex);*/

  num_vectors = v_matrix.size();
  num_features = v_matrix[0].size()-1;
  cout << "num_vectors is " << num_vectors << " and num_feature is " << num_features <<  endl;
  entropy();
}
void prompt(){
  string line;
  ifstream ifs ("newinput2.txt");
  cout << "Opening the file with the vertices" << endl;
  if(ifs.is_open()){
    while ( getline(ifs,line) ){
      parse(line);
    }
    ifs.close();
  }
}

void parse(string input){
  int temp;
  for ( istringstream i(input) ; i >> temp ; ){
    vertex.push_back(temp);
  }
  v_matrix.push_back(vertex);
  print(vertex);
  vertex.clear();
}

void print(vector<int>& input){
  vector<int>::iterator it;
  cout << "vector size is " << input.size() << " vector contains:";
  for ( it=input.begin() ; it < input.end() ; it++ )
    cout << *it << " ";

  cout << endl;
}
 
void entropy(){
  int c1, c2, c3, c4;
  unsigned int sentinel=0;
  c1=0;c2=0;c3=0;c4=0;
  while (sentinel < v_matrix.size()){
    cout << "sentinel is " << sentinel << "and class is" << v_matrix[sentinel][3] << endl;
    if ( v_matrix[sentinel][3] == 0 ){
      c1++;
    } else if ( v_matrix[sentinel][3] == 1 ){
      c2++;
    } else if ( v_matrix[sentinel][3] == 2 ){
      c3++;
    } else if ( v_matrix[sentinel][3] == 3 ){
      c4++;
    }
    sentinel++;
  }
  cout << "c1= " << c1 << " c2= " << c2 << " c3= " << c3 << " c4= " << c4 << endl;
  cout << "probability of c1 " << setprecision(16) << prob(c1,num_vectors) << endl;
  cout << "the entropy of c1 " << ind_entropy(c1,num_vectors) << endl;
  double tot_entropy= ind_entropy(c1,num_vectors)+ind_entropy(c2,num_vectors)+ind_entropy(c3,num_vectors)+ind_entropy(c4,num_vectors);
  cout << "Total entropy is " << tot_entropy << endl;
}

double prob(int in,int total){
  return in/static_cast<double>(total);
}
double ind_entropy(int in,int total){
  double result;
  result = - prob(in,total) * log10 (prob(in,total));
  return result;
}
