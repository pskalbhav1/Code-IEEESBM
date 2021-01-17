#include<bits/stdc++.h>

using namespace std;
long long int borrowAmount(long long int cost,long long int ini,long long int num){
    long long int total = 0;
    for (int i = 1; i <= num; i++)
    {
        total += i*cost;
    }
    if (ini >= total)
    {
        return 0;
    }
    
    return total - ini;
    
}
int main(){
    long long int k,n,w;
    cin>>k>>n>>w;
    cout<<borrowAmount(k,n,w)<<endl;
    return 0;
}