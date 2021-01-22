#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    int arr[3] = {5, 2, 1};
    for (int k = 0; k < t; k++)
    {
        int count = 0;
        int a, b;
        cin >> a;
        cin >> b;
        if (a < b)
        {
            int diff = b - a;
            int num = 0;
            int div = diff;
            for (int i = 0; i < 3; i++)
            {
                while (diff / arr[i] >= 1)
                {
                    div = diff / arr[i];
                    count = count + div;

                    diff = diff - arr[i] * div;
                }
                if (diff == 0)
                    break;
            }
        }
        if (a > b)
        {
            int diff = a - b;
            int div = 0;
            for (int i = 0; i < 3; i++)
            {
                int num = 0;
                int div = diff;
                for (int i = 0; i < 3; i++)
                {
                    while (diff / arr[i] >= 1)
                    {
                        div = diff / arr[i];
                        count = count + div;

                        diff = diff - arr[i] * div;
                    }
                    if (diff == 0)
                        break;
                }
            }
        }
        cout << count << "\n";
    }
}