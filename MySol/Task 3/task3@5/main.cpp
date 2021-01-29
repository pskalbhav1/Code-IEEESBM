#include <iostream>

using namespace std;
void lar(int a[],int n)
{   int i,l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
            l=a[i];
    }
    cout<<l;
}

int main()
{
    int n,i,a[100];
    cout<<"enter no of elements: ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    lar(a,n);
    return 0;

}
