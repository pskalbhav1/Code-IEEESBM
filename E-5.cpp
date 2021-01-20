#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter 3 numbers: "<<endl;
    cin>>a>>b>>c;
    if(a>b)
        if(a>c)
           cout<<a<<" is the largest";
        else
           cout<<c<<" is the largest";
     if(b>a)
         if(b>c)
            cout<<b<<" is the largest";
        else
           cout<<c<<" is the largest";

    return 0;
}
