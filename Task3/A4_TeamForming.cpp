#include<bits/stdc++.h>

using namespace std;

int minNumofProblems(vector<int> a)
{
    int n = a.size();
    sort(a.begin(),a.end());
    int total = 0;
    for (int i = 0; i < n-1; i+=2)
    {
        total += a[i+1] - a[i];
    }
    return total;
}

int main(){
    int n;
    cin>>n;
    vector<int> skills(n);
    for (int i = 0; i < n; i++)
    {
        cin>>skills[i];
    }
    cout<<minNumofProblems(skills)<<endl;   
    return 0;
}