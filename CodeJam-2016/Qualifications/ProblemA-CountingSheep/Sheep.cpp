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

  int DigitCounter;
  int iterator = 0;
  bool DigitBool = 1;
  int NextNumber = Number;
  string ConvertedStringNumber;

 while (DigitBool){
    if (DigitCounter == 10){
      DigitBool = false;
      return NextNumber;
    }
   else {
     ++ iterator;
     NextNumber = Number * (iterator);
      DigitCounter = 0;

      ConvertedStringNumber = to_string(NextNumber);

      for (int i = 0; i < 10; i++){
       if (ConvertedStringNumber.find(i + 48) != string::npos){
          DigitHolder[i] = 1;
        }
      }
      for (int i = 0; i < 10; i++){
       if (DigitHolder[i] == 1){
          DigitCounter ++;
        }
      }
      cout << endl;
    }
  }
}


int main(){

  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int InputCounter, InputInteger, FinalInteger;
  string GarbagePlaceHolder;

  fout << "Output" << endl;
  fin >> GarbagePlaceHolder >> InputCounter; //assuming the first input from the file is the word "input"

  //cout << GarbagePlaceHolder << " " << InputCounter << endl;

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
