#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,k=0,sq;
  cin >> n;
  int arr[n],arrNot[n];
  for(int i=0; i<n;i++){
        cin >> arr[i];
  }

  for(int i=0;i<n;i++){
    int sq = sqrt(arr[i]);
    if ((sq*sq) != arr[i]){
        arrNot[k]=arr[i];
        k++;
    }
  }
  sort(arrNot,arrNot+k);
  cout<<arrNot[k-1]<<endl;

  }



















