#include<bits/stdc++.h>

using namespace std;

void original(vector<int> a){
    int n = a.size();
    vector<int> originalSq(n);
    int odd = 0;
    int even = n-1;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            originalSq[i] = a[odd];
            odd++;
        }
        else
        {
            originalSq[i] = a[even];
            even--;
        }
        
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     originalSq[i] = 0;
    // }
    

    
    for(auto x: originalSq)
        cout<<x<<" ";
    cout<<endl;
}

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        vector<int> sequence(n);
        for (int i = 0; i < n; i++)
        {
            cin>>sequence[i];
        }
        original(sequence);
    }
    
    return 0;
}