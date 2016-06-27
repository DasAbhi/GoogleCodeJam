#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int IntegerIterator(int Number){
  bool DigitHolder [10];

  //have to initialize the array with zeros
  for (int i = 0; i < 10; i++){
    DigitHolder[i] = 0;
  }

  int DigitCounter = 0;
  int iterator = 0;
  bool DigitBool = true;

  //string ConvertedSringNumber = to_string(Number);

  while (DigitBool){
    if (DigitCounter == 10){
      DigitBool = false;
    }
    else {
      string ConvertedStringNumber = to_string(Number);
      for (int i = 0; i < 10; i++){
        if (ConvertedStringNumber.find(i) != string::npos){
          DigitHolder[i] = 1;
        }
      }
    }
  }
}


int main(){
  string s = to_string(24);

  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int InputCounter, InputInteger, FinalInteger;
  string GarbagePlaceHolder;

  fout << "Output" << endl;
  fin >> GarbagePlaceHolder >> InputCounter;

  for (int i = 0; i < InputCounter; i++){
    fin >> InputInteger;
    if (InputInteger == 0){
      //insomnia
      fout << "INSOMNIA" << endl;
    }
    else {
      FinalInteger = IntegerIterator(InputInteger);
      fout << FinalInteger << endl;
    }
  }

  fin.close();
  fout.close();
}
