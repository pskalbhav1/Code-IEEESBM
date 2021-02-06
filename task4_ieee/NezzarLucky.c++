#include <iostream>
using namespace std;
bool lucky(long long n, long long d)
{
    while (n > 0)
    {
        if (n % 10 == d)
            return true;
        n = n / 10;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long long q, d;
        cin >> q >> d;
        int arr[q];
        for (int i = 0; i < q; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long sum = 0;
            long long diff = 0;
            int flag = 0;
            if (10 * d < arr[i])
                cout << "YES"
                     << "\n";
            else
            {
                if (lucky(arr[i], d) == false)
                {
                    while (sum < arr[i])
                    {
                        sum = sum + d;
                        //cout << "sum1 = " << sum << "\n";
                        if (sum % 10 == arr[i] % 10)
                        {
                            diff = arr[i] - sum;
                            // cout << "sum2 = " << sum << "\n";
                            sum = sum - d;

                            sum = sum + (diff * d);
                            flag = 1;
                            cout << "YES"
                                 << "\n";
                            break;
                        }
                    }
                }
                else
                {
                    cout << "YES"
                         << "\n";
                    flag = 1;
                }
                if (flag == 0)
                    cout << "NO"
                         << "\n";
            }
        }
    }
}