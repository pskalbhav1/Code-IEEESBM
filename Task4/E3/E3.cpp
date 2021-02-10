#include<iostream>
using namespace std;
int bubble(int a[],int n)
    {
        int temp;
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-1-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
        return 0;
    }
int main()
    {
        int n=0,i=0,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        bubble(a,n);
        for(i=0;i<=n-2;i+=2)
            {
                sum+=a[i+1]-a[i];
            }
        cout<<sum;
        return 0;
        
    }