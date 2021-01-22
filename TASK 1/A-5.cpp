#include <iostream>
using namespace std;
int main()
{       
    int n=0;
    cin>> n;
    
    int max=0;
    max=n/11;
    string number="";
    cin>>number;
    int realmax=0;
    for(int i=0;i<number.length();i++)
    {
        if(number[i]=='8')
        realmax++;
        if(realmax==max)
        break;
    }
    if(n>=11)
    cout<<realmax;
    else
    cout<<0;

}