#include<bits/stdc++.h>

using namespace std;
// k - number of problems per day
// d - number of days
// n - number of setters
long long int numOfDays(vector<long long int> A,int n,long long int k,long long d){
    int numOfproblems = 0;
    for (int i = 0; i < n; i++)
    {
        numOfproblems += A[i];
    }
    int numOfproblemsNeeded = d*k;
    
    long long int num = numOfproblems/k;
    if (num >= d)
    {
        return d;
    }
    return num;
}
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        long long int k,d;
        cin>>n>>k>>d;
        vector<long long int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
        }
    cout<<numOfDays(A,n,k,d)<<endl;
    }
    return 0;
}