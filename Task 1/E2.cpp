// CPP program to find area 
#include<iostream>
#include<bits/stdc++.h> 
using namespace std; 
  
// Utility function 
int areaRectangle(int a, int b) 
{ 
   int area = a * b; 
   return area; 
}  
  
// Driver program 
int main() 
{ 
  int a = 9; 
  int b = 7; 
  cout << "Area = " << areaRectangle(a, b) << endl;  
  return 0; 
}