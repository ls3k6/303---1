#include <iostream>
#include <vector>
#include "readdata.h"
using namespace std;

int main() {
  int* org;
  int SIZE, num;
  readInFile(org, SIZE);
  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }

  cout << "\n\nWhat number would you like to check for? " << endl;
  cin >> num;
  if(checkNum(org, num, SIZE) == -1){
    cout << "The number does not exist in the array." << endl;
  }else{
    cout << "\nThe number exists at index " << checkNum(org,num, SIZE) << endl;
  }

  cout << "\n\nWhat new number would you like to add? " << endl;
  cin >> num;
  
  addNum(org, num, SIZE);
  
  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }

  cout << "\n\nWhat index would you like to delete? " << endl;
  cin >> num;
  
  delNum(org, num, SIZE);

  for(int i = 0; i < SIZE; i++){
    cout << org[i] << " ";
  }
}
