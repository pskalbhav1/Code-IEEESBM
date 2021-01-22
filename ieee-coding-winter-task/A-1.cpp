#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,x,i;
    cin>>n;
    vector<int> a;
    vector <int> :: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    int large;
    double sq,sqt;
    sort(a.begin(),a.end());
    for(it=a.end()-1;it>=a.begin();it--){
        sq=sqrt(*it);
        sqt=rint(sq);
        if(sq!=sqt){        
            cout<<*it;
            break;
        }
    }
}
