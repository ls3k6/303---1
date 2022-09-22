#include <iostream>
#include <vector>
#include "readdata.h"
using namespace std;

int main() {
  int* org;
  int SIZE, num;
  readInFile(org, SIZE);
  for(int i = 0; i < SIZE; i++) {
    cout << org[i] << " ";
  }

  cout << "\n\nNumber to check for: ";
  cin >> num;
    if(checkNum(org, num, SIZE) == -1) {
      cout << "The number does not exist" << endl;
      return 0;
  }
    else {
      cout << "\nThe index: " << checkNum(org,num, SIZE) << endl;
  }

  cout << "\nNumber to add: ";
  cin >> num;
  
  addNum(org, num, SIZE);
  
  for(int i = 0; i < SIZE; i++) {
    cout << org[i] << " ";
  }

  cout << "\n\nIndex to delete: ";
  cin >> num;
  
  delNum(org, num, SIZE);

  for(int i = 0; i < SIZE; i++) {
    cout << org[i] << " ";
  }
}
