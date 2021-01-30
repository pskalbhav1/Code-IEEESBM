#include <iostream>

using namespace std;
void insertion(int a[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
          a[j+1]=a[j];
          j=j-1;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int i,n,a[100];
    cin>>n;
   for(i=0;i<n;i++)
    cin>>a[i];
   insertion(a,n);
   return 0;
}
