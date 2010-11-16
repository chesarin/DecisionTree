#include <iostream>
#include <fstream>

using namespace std;

void prompt();

int main(){
  prompt();
}
void prompt(){
  string line;
  int sentinel=1;
  ifstream ifs ("input.txt");
  cout << "Opening the file with the vertices" << endl;
  if(ifs.is_open()){
    while ( getline(ifs,line) ){
      cout << "Input line is " << line << " and line number is " << sentinel << endl;
      sentinel++;
    }
    ifs.close();
  }
}
