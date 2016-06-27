#include <iostream>
#include <string>

using namespace std;
//using namespace string;

int main(){
  string ConvertedStringNumber = "1234";
  for (int i = 0; i < 10; i++){
    string indexer = to_string(i);
    if (ConvertedStringNumber.find(indexer) != string::npos){
      cout << i << endl;
    }
  }
}
