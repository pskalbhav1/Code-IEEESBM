#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        vector<vector<int>> pagesAndPrices(n,vector<int>(2,0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin>>pagesAndPrices[i][j];
            }
            
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (pagesAndPrices[i][0] >= x-y && pagesAndPrices[i][1] <= k )
                {
                    cnt++;
                }
                
            }
            
        }
        if (cnt>0)
        {
            cout<<"LuckyChef"<<endl;
        }
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
        
        
    }
    
    return 0;
}