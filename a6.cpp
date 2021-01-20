#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
int k;
int c=0;
int check=0;
    vector<int> v(n);
    for(k=0;k<n;k++)
    {
        cin>>v[k];
        if(v[k]==k)
        {


        c++;
        v[k]=-1;
        }
    }
     k=0;
      while(k<n)
      {
          if(v[k]!=-1)
          {
              std::vector<int>::iterator it;

            it = find (v.begin()+k, v.end(), k);
            if(*it==v[n-1]&&v[n-1]!=k)
            {
                continue;
            }



              if(*it==k&&v[k]==it-v.begin())
              {
                  check=1;
                  break;
              }
          }

    k++;

      }
      if(check==1)
      {
          cout<<c+2;
      }
      else
   cout<<c+1;
}

