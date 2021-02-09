#include<iostream>
using namespace std;
int main()
    {
        int t=0,i=0,j=0;
        cin>>t;
        string a[t],b;
        while(i<t)
            {
                a[i]="";
                cin>>b;
                for(j=0;j<=b.length();j+=2)  
                    {
                        a[i]+=b[j];
                    }
                a[i]+=b[b.length()-1];
                i++;
            }
        for(j=0;j<t;j++)
            cout<<a[j]<<endl;
        return 0;

    }