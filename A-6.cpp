#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == i){
            cnt+=1;
        }
    }
    bool temp = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
            if (a[a[i]] == i) {
                cnt += 2;
                temp = true;
                break;
            }
        }
    }
    if (temp == false && cnt!=n) cnt++;
    cout << cnt << endl;
    return 0;
}






