#include <iostream>
using namespace std;

int multiplication(int a,int b){
    return a*b;
}
int addition(int a,int b){
    return a+b;
}
int difference(int a,int b){
    return a-b;
}
float division(int a,int b){
    return (float(a)/b);
}


int main(){
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<addition(a,b)<<endl;
    cout<<"The difference of "<<a<<" and "<<b<<" is " <<difference(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<" is " <<multiplication(a,b)<<endl;
    cout<<"The quotient of "<<a<<" and "<<b<<" is "<<division(a,b)<<endl;

    return 0;
    }