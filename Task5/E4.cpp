#include<iostream>
#include<string.h>
using namespace std;
int main()
    {
        string primary,search="hello";
        cin>>primary;
        int i=0,flag=0,j=0;
        for(j=0;search[j]!='\0';j++)
            {
                flag=0;
                for(i=0;i<primary.length();i++)
                    {
                        if(primary[i]==search[j])
                            {
                                flag=1;
                                primary=primary.substr(i+1,primary.length()-(i+1));
                                break;
                            }

                    }
                if(!flag)
                    break;
            }
        if(!flag)
            cout<<"NO";
        else
            cout<<"YES";
        return 0;
    }