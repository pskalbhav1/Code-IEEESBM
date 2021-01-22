#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,k,d,temp,contest;
cin>>t;
while(t-- > 0)
{
    int tot_pro=0;
    cin>>n;
    cin>>k;
    cin>>d;
        while(n-- > 0)
        {
        cin>>temp;
        tot_pro+=temp;
        }
    contest=tot_pro/k;
    if(contest>d)
        contest=d;
    cout<<"\n"<<contest;
}
return 0;
}