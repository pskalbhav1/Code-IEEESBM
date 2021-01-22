#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n=0;
        int c=0;
        cin>>n;
        cin>>c;
        vector <int>arr;
        int hold=0;
        for(int i=0;i<n;i++)
        {
            cin>>hold;
            arr.push_back(hold);
        }
      int sum=0;
      int flag=0;
      for(int i=0;i<n;i++)
      {
          sum=sum+arr[i];
          if(sum>c){
            flag=1;
            break;
          }

      }
      if(flag==1)
      cout<<"No\n";
      else
      {
          cout<<"Yes\n";
      }
      
    }
}