#include <bits/stdc++.h>

using namespace std;

vector<long long int> luckyNums;

void trY(long long number, int cnt4, int cnt7)
{
    if (number > 1e10)
        return;

    if (cnt4 == cnt7)
        luckyNums.push_back(number);

    trY(number * 10 + 7, cnt4, cnt7 + 1);
    trY(number * 10 + 4, cnt4 + 1, cnt7);
}

int main()
{
    trY(4, 1, 0);
    trY(7, 0, 1);

    long long n;
    cin >> n;

    sort(luckyNums.begin(), luckyNums.end());
    int size = luckyNums.size();
    cout << luckyNums[lower_bound(luckyNums.begin(), luckyNums.end(), n) - luckyNums.begin()] << endl;
    // cout << luckyNums[size - 1] - luckyNums[0] << endl;

    return 0;
}