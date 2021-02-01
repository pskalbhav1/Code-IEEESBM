#include<iostream>
using namespace std;
int main()
    {
        int t=0,n=0,c=0,i=0,a=0,sum=0;
        cin>>t;
        int T=t;
        string s[t];
        while(T--)
            {
                sum=0;
                cin>>n>>c;
                for(i=0;i<n;i++)
                    {
                        cin>>a;
                        sum+=a;
                    }
                if(sum<=c)
                    s[T]="Yes";
                else
                    s[T]="No";
                
            }
        for(i=t-1;i>=0;i--)
            cout<<s[i]<<endl;
        return 0;
    }
    