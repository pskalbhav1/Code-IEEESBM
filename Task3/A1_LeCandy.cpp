#include<bits/stdc++.h>

using namespace std;

void toBehappyOrNotTobe(vector<int> candies,int n,int c)
{
    if (c<n)
    {
        cout<<"No"<<endl;
    }
    else{

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += candies[i];
    }
    if (total <= c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    
    
    
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> appetite(n);
        for (int i = 0; i < n; i++)
        {
            cin>>appetite[i];
        }
        toBehappyOrNotTobe(appetite,n,c);
    }
    
    return 0;
}