#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  //ofstream fout();
  ifstream fin("input.txt");
  string stack;
  fin >> stack;
  cout << stack << endl;
  cout << stack.length() << endl;
  cout << stack[0] << endl;
  fin.close();
}
