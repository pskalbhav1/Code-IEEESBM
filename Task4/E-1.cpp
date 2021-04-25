#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, sum = 0, ele;
        cin >> n >> c;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            sum += ele;
        }
        if (sum <= c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}