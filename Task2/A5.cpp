#include<bits/stdc++.h>
using namespace std;
int main()
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

        string s;
        int n;

        cin>>s>>n;

        if(s == "front")
        {
            if(n==1)
                printf("L");
            else
                printf("R");
        }

        else
        {
            if(n==1)
                printf("R");
            else
                printf("L");
        }

        return 0;

}