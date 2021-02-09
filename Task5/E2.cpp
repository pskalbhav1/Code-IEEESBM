#include<iostream>
using namespace std;
int main()
    {
        int n=0,m=0,i=0,j=0;
        cin>>n>>m;
        string server[n],ip[n],c_server[m],c_ip[m];
        for(i=0;i<n;i++)
            cin>>server[i]>>ip[i];
        for(i=0;i<m;i++)
            {
                cin>>c_server[i]>>c_ip[i];
                for(j=0;j<n;j++)
                    if(c_ip[i]==ip[j])
                        {
                            c_ip[i]+=" #"+ server[j];
                            break;
                        }
                c_server[i]+=" "+c_ip[i];
            }
        for(i=0;i<m;i++)
            cout<<c_server[i]<<endl;
        
        return 0;
    }