#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t, n, a[100];
    cin >> t;
    while (t--)
    {
        cin >> n;
        long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (sum == 0)
        {
            cout << "No\n";
            continue;
        }
        else
        {
            cout << "Yes\n";
            sort(a, a + n);
            if (sum < 0)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
            }
            else
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    cout << a[i] << " ";
                }
            }
            cout << endl;
        }
    }
}