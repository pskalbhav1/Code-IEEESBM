#include<bits/stdc++.h>

using namespace std;

int minMoves(vector<int> a)
{
    int n =  a.size();
    sort(a.begin(),a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum +=a[i];
    }
    
    return sum - n*a[0];
    
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> wages(n);
        for (int i = 0; i < n; i++)
        {
            cin>>wages[i];
        }
        cout<<minMoves(wages)<<endl;
    }
    
    return 0;
}