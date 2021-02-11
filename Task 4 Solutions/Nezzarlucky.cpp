#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
   ll t,q,d,x,i,j,p;
   cin>>t;
   while(t--)
   {
       
       cin>>q>>d;
       for(i=0;i<q;i++)
       {
           ll m=0;
           cin>>x;
           for(j=0;j<=10;j++)
           {
             p=10*j;
             if((((x-p)%d)==0   || ((x-p)/10)%10==d  || ((x-p)/100)%10==d || ((x-p)/1000)%10==d || ((x-p)/10000)%10==d || ((x-p)/100000)%10==d || ((x-p)/1000000)%10==d) && (x-p)>0)
             {
                 m=1;
                 cout<<"YES\n";
                 break;
             }
           }
           if(m==0)
           {
               cout<<"NO\n";
            }
        }
   }
}
