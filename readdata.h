#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void addNum(int* &org, int newNum, int &SIZE);
void delNum(int* &org, int index, int &SIZE);
int readInFile(int* &org, int &SIZE);
int checkNum(int *org, int numSearched, int SIZE);
