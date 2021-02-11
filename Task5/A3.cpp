#include <bits/stdc++.h>

using namespace std;

int i, j, k, m, n, p;

string s[105];

int main()
{
    for (cin >> n >> m; j++ < n;)
        cin >> s[j];
    for (; i++ < n;)
        for (j = 0; j < m; j++)
        {
            for (k = p = 0; k++ < n;)
                p += s[i][j] == s[k][j];
            for (k = 0; k < m; k++)
                p += s[i][j] == s[i][k];
            if (p < 3)
                cout << s[i][j];
        }
    return 0;
}