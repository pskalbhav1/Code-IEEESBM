#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int a;
        cin>>a;
        vector<int> A(a);
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin>>A[i];
            sum += A[i];
        }
        if (sum == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
            if (sum< 0)
            {
                sort(A.begin(),A.end(),greater<int>());
                for(auto x: A)
            cout<<x<<" ";
        cout<<endl;
            }
            else{

                sort(A.begin(),A.end());
                for(auto x: A)
            cout<<x<<" ";
        cout<<endl;
            }
            
        }
    }
    
    return 0;
}