#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int query,i,testcase,input;
    set<int> S;
    cin >> testcase;
    while (testcase>0){
        cin >> query;
        switch (query){
            case 1: {
                cin >> input;
                S.insert(input);
                break;
            }
            case 2: {
                cin >> input;
                S.erase(input);
                break; 
            }    
            case 3:{
                cin >> input;
                 set<int>::iterator itr=S.find(input);
                if (itr==S.end())
                    cout<< "No" << endl;
                else 
                    cout << "Yes" << endl;
                /*bool present = binary_search(S.begin(),S.end(),                input);
                if (present)
                    cout<< "Yes" << endl;
                else
                    cout<< "No" << endl;
                */ 
                break;            
            }
        }
    testcase--;
    }  
    return 0;
}