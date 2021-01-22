#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c,n,i;
    cout << "Enter the number of elements:" << endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(i=2;i<n;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
    return 0;
}
