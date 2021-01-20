#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
   int length, breadth, area;
   cout << "Enter length of Rectangle : ";
   cin>>length;

   cout << "\nEnter breadth of Rectangle : ";
   cin>>breadth;

   area = length * breadth;
   cout << "\nArea of Rectangle : " << area;
   return (0);
}