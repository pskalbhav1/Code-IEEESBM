#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        int x = 0;
        int y = 0;
        int k = 0;
        int n = 0;
        cin >> x >> y >> k >> n;
        int p[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            cin >> c[i];
        }

        int neededpages = 0;
        int index = -1;
        int flag = 0;
        if (x < y)
            cout << "LuckyChef";
        else
        {
            neededpages = x - y;
            // << "needed pages = " << neededpages << "\n";
            for (int i = 0; i < n; i++)
            {
                if (p[i] >= neededpages&&c[i]<=k)
                {
                    flag = 1;
                   // cout << p[i] << " has the neede pages\n";
                    break;
                }
            }
            if (flag == 1)
                cout << "LuckyChef\n";
            else
                cout << "UnluckyChef\n";
        }
    }
}