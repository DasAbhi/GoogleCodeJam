#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){


  //string s = to_string(24);

  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int InputCounter, GarbagePlaceHolder, InputInteger;

  fout << "Output" << endl;
  fin >> GarbagePlaceHolder >> InputCounter;

  for (int i = 0; i < InputCounter; i++){
    fin >> InputInteger;
    if (InputInteger == 0){
      //insomnia
      fout << "INSOMNIA" << endl;
    }
  }

  fin.close();
}
