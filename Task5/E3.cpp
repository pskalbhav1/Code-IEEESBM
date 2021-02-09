#include<iostream>
using namespace std;
int main()
    {
        string name;
        cin>>name;
        int i=0,j=0,n_dc=0,repeat=0;
        for(i=0;i<name.length();i++)
            {
                repeat=0;
                for(j=0;j<i;j++)
                    {
                        if(name[i]==name[j])
                            {
                                repeat=1;
                                break;
                            } 
                    }
                if(!repeat)
                    n_dc++;

            }
            
        if(n_dc%2)
            cout<<"IGNORE HIM!";
        else
            cout<<"CHAT WITH HER";
        return 0;
    }