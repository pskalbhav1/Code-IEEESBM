#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;

    bool change = true;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] >= 'a')
        {
            change = false;
            break;
        }
    }

    if (change)
    {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >=65 && s[i]<=90)
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]);
        }
    }
        cout<<s;
        return 0;
    }
    cout<<s;
    
    return 0;
}