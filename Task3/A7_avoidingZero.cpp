#include <bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);

            sum += v[i];
        }
        if (sum == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (sum > 0)
            {
                sort(v.begin(), v.end(), greater<int>());
            }
            else
            {
                sort(v.begin(), v.end());
            }
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}