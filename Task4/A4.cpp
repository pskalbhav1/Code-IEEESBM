#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int q, d;
        cin >> q >> d;
        while (q--)
        {
            long long int num;
            cin >> num;
            int check = 0;
            if (num >= d * 10)
            {
                check = 1;
            }
            if (check == 0)
            {
                while (num >= d)
                {
                    if (num % d == 0)
                    {
                        check = 1;
                        break;
                    }

                    num -= 10;
                }
            }

            if (check == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}