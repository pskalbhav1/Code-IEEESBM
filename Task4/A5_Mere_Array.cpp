#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<long long int> nums(n);
        vector<long long int> sNums(n);
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            sNums[i] = nums[i];
        }
        sort(sNums.begin(), sNums.end());
        long long int min = *min_element(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != sNums[i])
            {
                v.push_back(nums[i]);
            }
        }
        int size = v.size();
        int check = 0;
        for (int i = 0; i < size; i++)
        {
            if ( __gcd(v[i] , min) != min)
            {
                check = 1;
            }
        }

        if (check == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}