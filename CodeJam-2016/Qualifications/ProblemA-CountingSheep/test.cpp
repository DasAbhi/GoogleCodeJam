/*
This file was used to test out the .find functionality of the string library,
And other sorts of unit tests
*/



#include <iostream>
#include <string>

using namespace std;
//using namespace string;


int main(){

  int DigitHolder[10];

  for (int i = 0; i < 10; i++){
    DigitHolder[i] = 0;
  }

  string ConvertedStringNumber = "10234";

  for (int i = 0; i < 10; i++){
    if (ConvertedStringNumber.find(i + 48) != string::npos){
      DigitHolder[i] = 1;
    }
  }

  for (int i = 0; i < 10; i++){
    cout << DigitHolder[i];
  }
  cout << endl;
}
