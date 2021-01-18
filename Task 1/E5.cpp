#include <iostream>

using namespace std;

int main()
{
    float a,b,c,g;
    cout << "Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    g=c;
    if(a>b && a>c){
            g=a;
    }
    else if(b>c){
                g=b;
            }

    cout<<"The greatest number is "<<g;

}
