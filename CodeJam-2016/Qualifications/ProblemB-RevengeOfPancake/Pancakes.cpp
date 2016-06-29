#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  ofstream fout("output.txt");
  ifstream fin("intput.txt");

  int StackCount;
  int flip ;
  String Stack;
  fin >> StackCount;

  for (int i = 0; i < StackCount; i++){
    flip = 0;
    fin >> Stack;
    for (int j = 0; j < (Stack.length - 1), j++){
      if (Stack[j] != Stack[j+1]){
        ++flip;
      }
    }
    if (Stack[Stack.length -1 ] == '-'){
      ++ flip ;
    }
    fout << flip << endl;
  }
  fin.close();
  fout.close();
}
