#include<iostream>
#include<string.h>
using namespace std;
int find_char_in_string(char c, string s, int start_pos=0)
    {
        for(int i=start_pos;i<s.length();i++)
            if(s[i]==c)
                {
                    return i;
                }
        return -1;
    }
int main()
    {
        string primary,search="hello";
        cin>>primary;
        int j=0,last_found_pos=-1;
        for(j=0;search[j]!='\0';j++)
            {
                last_found_pos=(find_char_in_string(search[j],primary,last_found_pos+1));
                if(last_found_pos==-1)
                    {
                        break;
                    }
            }
        if(last_found_pos==-1)
            cout<<"NO";
        else
            cout<<"YES";
        return 0;
    }
