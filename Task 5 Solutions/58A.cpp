#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   char ch,a[6]="hello";
   int i=0;
   while(cin>>ch)
   if(a[i]==ch)i++;
   if(i==5)cout<<"YES";
   else cout<<"NO";
}
   
