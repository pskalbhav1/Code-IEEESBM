#include <iostream>

using namespace std;

int main()
{
    int n,i,a[100],key,s,l,mid;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    s=0;
    l=n-1;
    mid=(s+l)/2;
    while(s<=l)
    {
        if(a[mid]==key){
            cout<<"element found";
            break;}
        else if(a[mid]<key)
           s=mid+1;
        else
            l=mid-1;
        mid=(s+l)/2;
    }
    if(s>l)
        cout<<"element not found";
    return 0;
}
