#include<bits/stdc++.h>

using namespace std;

int main(){
    string s,rev;
    cin>>s;
    cin>>rev;
    reverse(s.begin(),s.end());
    if( s == rev)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}