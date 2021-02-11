#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i;
   long long int arr[100000],a[100000];
   cin>>t;
   while(t--)
   {
       long long int mini=1000000000,count=0,m=0;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
           a[i]=arr[i];
           mini=min(mini,arr[i]);
       }
       sort(arr,arr+n);
       for(i=0;i<n;i++)
       {
           if(arr[i]!=a[i])
           {
               if(a[i]%mini!=0)
               {
                  m=1;
                   break;
               }
               else
               {
                   count++;
               }
           }
          
       }
       if(m==1)
       {
           cout<<"NO\n";
       }
       else 
       {
           cout<<"YES\n";
       }
       
      
       
   }
}
