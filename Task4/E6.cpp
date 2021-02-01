#include<iostream>
using namespace std;
int bub_sort(int b[],int n)
    {
        int temp=0,i=0,j=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
                {
                    if(b[i]< b[j])
                        {
                            temp=b[i];
                            b[i]=b[j];
                            b[j]=temp;
                        }
                }
        }
        return 0;

    }
string check_case(int b[],int n)
    {
        string s=""; 
        bub_sort(b,n);
        int i=0,j=0,sum=0;
        for(i=0;i<n;i++)
            {
                sum=0; 
                for(j=0;j<=i;j++)
                     {
                          sum+=b[j];
                     }
                if(!sum)
                    {
                        s="NO";
                        break;
                    }
                else
                    {
                        s="YES";
                    }
            }
        return s;

    }
int main()
    {
        int t=0,i=0,j=0;
        cin>>t;
        int b[t][50],n[t];
        string s[t];
        while(i<t)
            {
                cin>>n[i];
                for(j=0;j<n[i];j++)
                    cin>>b[i][j];
                s[i]=check_case(b[i],n[i]);
                i++;
            }
        for(i=0;i<t;i++)
            {
                if(s[i]=="NO")
                    cout<<"NO\n";
                else if(s[i]=="YES")
                    {
                        cout<<"YES\n";
                        for(j=0;j<n[i];j++)
                            cout<<b[i][j]<<" ";
                        cout<<endl;
                    }
            }
        return 0;
        
    }
