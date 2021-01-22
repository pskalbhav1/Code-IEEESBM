#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x[100];
    int N =0;
    cin>>N;
    vector<int>v;
    for(int i=0; i <N; i++){
    cin>>x[i];
    v.push_back(x[i]);
    sort(v.begin(),v.end());
}
    for(int i=0; i < v.size(); i++)
    {
   std::cout << v.at(i) << ' ';
    }
    return 0;
}
