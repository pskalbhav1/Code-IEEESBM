#include <bits/stdc++.h>
using namespace std;
long long ar[100001][2];
int n;
long long w,L;
int calc(long long m) {
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long tmp = ar[i][0] + (ar[i][1] * m);
        if (tmp >= L) {
            ans = ans + tmp;
            if (ans >= w)
                return true;
        }
    }
    return false;
}
int main() {
    cin >> n >> w >> L;
    for (int i = 0; i < n; i++)
        cin >> ar[i][0] >> ar[i][1];
    long long l = -1, r = 1e18;
    while (l < r - 1) {
        long long mid = l + (r - l) / 2;
        if (calc(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}