#include<bits/stdc++.h>

using namespace std;

int maxFixP(vector<int> a){
    int n = a.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= n )
        {
            return 0;
        }
        if (i == a[i])
        {
            cnt++;
        }
        
        
    }
    int x = cnt;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            if (a[a[i]] == i)
            {
                cnt +=2;
                return cnt;
            }
            
        }
    }
    if (x != n)
    {
    return x +1;
    }
    return x;
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> per(n);
    for (int i = 0; i < n; i++)
    {
        cin>>per[i]; 
    }
    cout<<maxFixP(per)<<endl;
    return 0;
}