#include<bits/stdc++.h>
using namespace std;
int main()
{
set<char> s;
char c;
while(cin>>c)s.insert(c);
cout<<(s.size()%2?"IGNORE HIM!":"CHAT WITH HER!");
}
 
