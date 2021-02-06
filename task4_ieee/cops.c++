#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    int t=0;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        
        int m,x,y=0;
        cin>>m>>x>>y;
        vector<int>cops;
        int hold=0;
        for(int i=0;i<m;i++)
        {
            cin>>hold;
            cops.push_back(hold);
        }
        int house[101];
        for(int i=1;i<101;i++)
        {
            house[i]=i;
        }
        int counter=0;
       int amount=x*y;
       for(int j=0;j<m;j++)
       {
           hold=cops[j];
           //for left of cops[i]
           int i=hold;
           while(i>=1)
           {
                house[i]=-1;
                i--;
                counter++;
                
                if(counter==amount+1)
                break;
                
           }
           counter=0;
           i=hold;
            while(i<=100)
           {
              
               house[i]=-1;
                 counter++;
               i++;
                if(counter==amount+1)
                break;
                
               
           }
           counter=0;
           
       }
       counter=0;
       for(int i=1;i<101;i++)
       {
           //cout<<house[i]<<" ";
           if(house[i]!=-1)
                counter++;
       }
       cout<<counter<<"\n";
    }
}