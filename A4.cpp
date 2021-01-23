#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int vectsort() {
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<n; i++)
        cout<<vec[i]<<" ";
    return 0;
}
int vecterase() {
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    int pos,range1,range2;
    cout << "Enter position to delete";
    cin >> pos
    cout << "Enter range";
    cin >> range1
    cin >> range2
    v.erase(v.begin()+(pos-1))
    v.erase(v.begin()+(range1-1),v.begin()+range2)
    for(int i=0; i<n; i++)
        cout<<vec[i]<<" ";
    return 0;
}
