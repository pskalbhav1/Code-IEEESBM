#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> w;
    while(t--){
        int flag=0,c=0;
        int n;
        cin>>n;
        w.clear();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            w.push_back(x);
        }
        while(flag==0){
            vector<int>::iterator it1=max_element(w.begin(),w.end());
            vector<int>::iterator it2=min_element(w.begin(),w.end());
            vector<int>::iterator it3;
            if(*it1==*it2)
            break;
            for(it3=w.begin();it3!=w.end();it3++){
                if(*it2!=*it3){
                *it3=*it3-1;
                c++;
                }
            }
        }
    cout<<c<<endl;
    }


}
