#include <iostream>

using namespace std;
void nod(int n)
{   int cnt=0;
    while(n!=0)
    {
        cnt++;
        n=n/10;
    }
    cout<<""<<cnt;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    nod(n);
    return 0;
}
