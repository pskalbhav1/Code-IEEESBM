#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter a: ";
    cin>>a;
    if(a%3==0 && a%5==0)
        cout<<"\ngiven number is multiple of both 3 and 5";
    else if(a%3==0)
        cout<<"given number is multiple of 3";
    else if(a%5==0)
        cout<<"\ngiven number is multiple of 5";

    else
        cout<<"\ngiven number is not multiple of both 3 and 5";

}
