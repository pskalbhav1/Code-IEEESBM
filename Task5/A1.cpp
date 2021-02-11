#include <bits/stdc++.h>

using namespace std;

void formula(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1;
            return;
        }
    }
    cout << s2 << endl;
}

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    formula(s1, s2);

    return 0;
}