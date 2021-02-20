#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main()
{
    int m=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s2[i]>s1[i])
        {
            cout<<-1<<endl;
            m=1;
            break;
        }
       
    }
    if(m==0)
    {
        cout<<s2<<endl;
    }
    
    return 0;
}
