#include<iostream>
using namespace std;
int unequal(int a[],int n)
    {   
        int i=0;
        for(i=1;i<n;i++)
            if(a[i]!=a[0])
                {
                    return 1;
                    break;
                }
        return 0;
    }
int max_pos(int a[],int n)
    {
        int max_pos=0,i=0;
        for(i=1;i<n;i++)
            {
                if(a[i]>a[max_pos])
                    max_pos=i;
            }
        return max_pos;
    }
int main()
    {
        int t=0,i=0;
        cin>>t;
        int ans[t],T=t;
        while(T--)
            {
                int n=0,i=0,max_pos=0,count=0;
                cin>>n;
                int a[n];
                for(i=0;i<n;i++)
                    cin>>a[i];
                while(unequal(a,n))
                    {
                        count++;
                        max_pos=::max_pos(a,n);
                        for(int i=0;i<n;i++)
                            {
                                if(i==max_pos)
                                    continue;
                                a[i]++;
                                
                            }
                    }
                ans[T]=count;
            }
        for(i=t-1;i>=0;i--)
            cout<<ans[i]<<endl;
        return 0;
    }