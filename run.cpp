#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

//#include "Vertice.h"

using namespace std;
vector< vector<int> > v_matrix;
vector<int> vertex;

void prompt();
void parse(string input);
void print(vector<int>& input);

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
  cout << "The size of the v_matrix is " << v_matrix.size() << endl;
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
