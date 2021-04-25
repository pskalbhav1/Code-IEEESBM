#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, a[100], i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long int sum = 0;
    sort(a, a + n);
    for (i = 0; i < n; i += 2)
    {
        if (a[i] != a[i + 1])
        {
            sum = sum + a[i + 1] - a[i];
        }
    }
    cout << sum << endl;
}
