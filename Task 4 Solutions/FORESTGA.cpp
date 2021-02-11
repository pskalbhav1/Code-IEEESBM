#include <bits/stdc++.h>

#define ll  long long
#define vi vector<ll>
#define pb push_back



const ll N = 100111;
ll w, l, n;
ll h[N], r[N];

bool canCut(ll time) {
    ll total_cut = 0;
    for (int i = 0; i < n; i++) {
        ll height = (h[i] + r[i] * time);
        if (height >= l) {
            total_cut += height;
        }
        if (total_cut >= w) return true;
    }
    return false;
}

using namespace std;

int main()
{
    cin >> n >> w >> l;

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> r[i];
    }
    ll tl = -1, tr = 1e18, tm = 0;
    while (tr - tl > 1) {
        tm = tl + (tr - tl) / 2;
        if (canCut(tm)) {
            tr = tm;
        } else {
            tl = tm;
        }
    }
    cout << tr << endl;
    return 0;
}
