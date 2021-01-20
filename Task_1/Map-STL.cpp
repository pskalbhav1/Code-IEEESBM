#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int query,i,testcase,value;
    string key;
    map<string,int> M;
    cin >> testcase;
    while (testcase>0){
        cin >> query;
        switch (query){
            case 1: {
                cin >> key;
                cin >> value;
                map<string,int>::iterator it=M.find(key);
                if (it==M.end())
                M.insert(make_pair(key,value));
                else
                M[key]+=value;                
                break;
            }
            case 2: {
                cin >> key;
                M.erase(key);
                break; 
            }    
            case 3:{
                cin >> key;
                map<string,int>::iterator itr=M.find(key);
                if (itr==M.end())
                    cout<< "0" << endl;
                else 
                    cout << M[key] << endl;
                break;            
            }
        }
    testcase--;
    }  
    return 0;
}
