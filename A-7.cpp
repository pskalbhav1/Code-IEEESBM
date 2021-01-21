#include <bits/stdc++.h>
using namespace std;

void original(){
  int n;
  cin>>n;
  vector<int> a(n);
  for (int &elem : a) {
    cin >> elem;
  }
  int l=0, r=(n-1);
  vector<int> solved(n);
  for (int i=0; i<n; i++) {
    if (i%2 == 0){
      solved[i] = a[l++];
    }
    else{
      solved[i] = a[r--];
    }
  }
  for (int i : solved) {
    cout<<i;
  }
}

int main() {
  int testCases;
  cin>>testCases;
  while (testCases--) {
    original();
  }
}
