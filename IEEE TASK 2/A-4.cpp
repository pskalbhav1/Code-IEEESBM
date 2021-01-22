#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
const int inf = 0x3f3f3f3f;  
int main()   
{  
    int n;
    int a[110];
    memset(a,0,sizeof(a));
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }  
    int mi=inf;
    for(int i=2;i<n;i++)
    {
        int d=-inf;
        for(int j=2;j<n;j++)
        {
            if(j==i)
            {
                d=max(d,a[j+1]-a[j-1]);
            }
            else
            {
                d=max(d,a[j+1]-a[j]);
            }
        }
        mi=min(mi,d);
    }
    printf("%d\n",mi);
    return 0;  
}