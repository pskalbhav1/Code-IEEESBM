#include<iostream>
using namespace std;
int greatestArrayElement(int n)
{
    int ar[n];
    cout<<"Enter "<<n<<" elements for the array : ";
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    int big=ar[0];
    for(int x=0 ; x<n; x++)
    {
        if(ar[x]>big) big=ar[x];
    }
    return big;
}
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<greatestArrayElement(n);
    return 0;
}

