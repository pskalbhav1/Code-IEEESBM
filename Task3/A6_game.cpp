#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int i = 0;
    while (nums.size() != 1)
    {
        if (i%2 == 0)
        {
            nums.pop_back();
        }
        else
        {
            nums.erase(nums.begin());
        }
        i++;
    }
    for(auto x:nums)
        cout<<x<<endl;
    
    
    return 0;
}