#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  ofstream fout("output.txt");
  ifstream fin("B-.in");

  int StackCount;
  int flip ;
  string Stack;
  fin >> StackCount;
  cout << StackCount << endl;

  for (int i = 0; i < StackCount; i++){
    flip = 0;
    fin >> Stack;
    cout << Stack << endl;
    for (int j = 0; j < (Stack.length() - 1); j++){
      if (Stack[j] != Stack[j+1]){
        //cout << "should not be here" << endl;
        ++flip;
      }
    }
    if (Stack[Stack.length() -1 ] == '-'){
      ++ flip ;
    }
    cout << flip << endl;
    fout << flip << endl;
  }
  fin.close();
  fout.close();
}
