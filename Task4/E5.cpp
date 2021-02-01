#include<iostream>
using namespace std;
int remove(int a[],int &n,int x)
    {
        int i=0;
        for(i=0;i<n;i++)
            if(x==a[i])
                break;
        int j=0;
        for(j=i;j<n;j++)
            a[j+1]=a[j];
        n--;
        return 0;
    }
int max(int a[],int n)
    {
        int max=a[0],i=0;
        for(i=1;i<n;i++)
            if(a[i]>max)
                max=a[i];
        return max;
    }
int min(int a[],int n)
    {
        int min=a[0],i=0;
        for(i=1;i<n;i++)
            if(a[i]<min)
                min=a[i];
        return min;
    }
int main()
    {
        int n,i=0;
        cin>>n;
        int a[n],N=n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<N-1;i++)
            {
                if(!(i&2))
                    remove(a,n,max(a,n));
                else
                    remove(a,n,min(a,n));
            }
        cout<<a[0];
        return 0;
    }
