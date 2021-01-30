#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    int greatest;
    cout<<"Enter ten values:";
    for (i = 0; i < 10; i++) {
    cin>>a[i];
    }
    greatest = a[0];
    for (i = 0; i < 10; i++) {
    if (a[i] > greatest) {
    greatest = a[i];
    }
    }
    cout<<"Greatest from all the numbers is "<< greatest;
    return 0;
  

}