#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,i,j,p[10000];
    cin>>n>>m>>d;
    int k=0;
    for(i=0;i<(n*m);i++)
    {
        cin>>p[i];
        
    }
    k=n*m;
    sort(p,p+k);
    int median;
    int x=p[0]%d,ans=0;
    
        median=p[k/2];
        for(i=0;i<k;i++)
    {
        if(p[i]%d!=x)
        {
            ans=-1;
            break;
        }
        else
        {
            ans=ans+(abs(p[i]-median)/d);
        }
    }
   
    cout<<ans<<endl;
}
