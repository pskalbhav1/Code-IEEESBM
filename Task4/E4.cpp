#include<iostream>
using namespace std;
int in_a(int a[],int n,int x)
    {
        int i=0;
        for(i=0;i<n;i++)
            if(x==a[i])
                return 0;
        return 1;
    }
 int in_b(int b[],int m,int x)
    {
        int i=0;
        for(i=0;i<m;i++)
            if(x==b[i])
                return 0;
        return 1;
    }

int main()
    {
        int n=0,m=0,i=0,j=0,temp=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m];
        for(i=0;i<m;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    if(in_a(a,n,a[i]+b[j])&&in_b(b,m,a[i]+b[j]))
                        {
                          cout<<a[i]<<"\t"<<b[j];
                          temp=1;
                          break;
                        }
                if(temp)
                    break;
            }
        return 0;
        
    }