#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int maxDiff(int n) {
    int diff = v[1] - v[0];
    for (int i = 2; i < n; ++i) {
        diff = max(diff, v[i] - v[i - 1]);
    }
    return diff;
}
int main() {
    int n, val;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        v.push_back(val);
    }
    int minNum = INT_MAX;
    for (int i = 1; i < n - 1; ++i) {
        int val = v[i];
        v.erase(v.begin() + i);
        int minDiff = maxDiff(n);
        minNum = min(minNum, minDiff);
        v.insert(i + v.begin(), val);
    }
    cout << minNum;
    return 0;
}
