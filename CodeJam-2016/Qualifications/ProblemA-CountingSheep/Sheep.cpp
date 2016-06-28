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
  int NextNumber = Number;INSOMNIA
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

  ifstream fin("A.large.in");
  ofstream fout("A.large.out");

  int InputCounter, InputInteger, FinalInteger;
  string GarbagePlaceHolder;

  fout << "Output" << endl;
  fin  >> InputCounter;


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
