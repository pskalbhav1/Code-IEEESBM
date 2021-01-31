#include <bits/stdc++.h>

using namespace std;

int safeHouses(vector<int> cH, int m, int x, int y)
{
    int reach = x * y;
    int totalHousesChecked = 0;
    sort(cH.begin(), cH.end());
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            if (cH[i] - reach > 1)
            {
                totalHousesChecked += cH[i] - reach - 1;
            }
        }
        if (i == m - 1)
        {
            if (cH[i] + reach < 100)
            {
                totalHousesChecked += 100 - (cH[i] + reach);
            }
        }
        else
        {
            if (cH[i] + reach < cH[i + 1] - reach)
            {
                totalHousesChecked += (cH[i + 1] - reach) - (cH[i] + reach + 1);
            }
        }

    }
        return totalHousesChecked;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int m, x, y;
        cin >> m >> x >> y;
        vector<int> copsHouses(m);
        for (int i = 0; i < m; i++)
        {
            cin >> copsHouses[i];
        }
        cout << safeHouses(copsHouses, m, x, y)<<endl;;
    }

    return 0;
}