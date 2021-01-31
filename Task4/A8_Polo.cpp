#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d;
    cin >> n >> m >> d;
    int minMoves = 0;
    vector<int> matrix(n * m, 0);
    set<int> rem;
    bool check = false;
    for (int i = 0; i < n * m; i++)
    {
        cin >> matrix[i];
        rem.insert(matrix[i] % d);
    }
    if (rem.size() > 1)
    {
        check = false;
    }
    else
    {
        check = true;
    }

    sort(matrix.begin(), matrix.end());

    int mid = matrix.size() / 2;
    int median = matrix[mid];
    for (int i = 0; i < n * m; i++)
    {
        minMoves += abs(matrix[i] - median) / d;
    }
    if (check)
    {
        cout << minMoves;
    }
    else
    {
        cout << -1;
    }

    // for (int i = 0; i < n*m; i++)
    // {
    //     cout<<matrix[i]<<endl;
    // }

    return 0;
}