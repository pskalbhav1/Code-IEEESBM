#include<iostream>
using namespace std;
int main()
    {
        string s,t;
        cin>>s>>t;
        int i=0,j=0,flag=0;
        for(i=0;i<s.length();i++)
            if(s[i]!=t[t.length()-1-i])
                {
                    flag=1;
                    break;
                }
        if(flag)
            cout<<"NO";
        else
            cout<<"YES";
        return 0;

    }