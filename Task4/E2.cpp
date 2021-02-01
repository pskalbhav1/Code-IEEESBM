#include<iostream>
using namespace std;
int main()
    {
        int t=0,x=0,y=0,k=0,n=0,p=0,c=0,i=0;
        cin>>t;
        int T=t;
        string s[t];
        while(T--)
            {
                cin>>x>>y>>k>>n;
                for(i=0;i<n;i++)
                    {
                        cin>>p>>c;
                        if(p>=(x-y)&&(c<=k))
                            {
                                s[T]="LuckyChef";
                                break;
                            }
                    }
                if(i==n)
                    s[T]="UnluckyChef";

            }
        for(i=t-1;i>=0;i--)
            cout<<s[i]<<endl;
    }

