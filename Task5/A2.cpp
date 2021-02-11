#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
using namespace std;

int main()
{

    string str;
    cin >> str;
    int st = 2;
    for(int i=0; i<((int)(str).size()); i++) {
        if(st == 0) {
            if(str[i] == '@')
                st = 1;
        } 
        
        else if(st == 1) {
            if(str[i] == '@') {
                cout << "No solution";
                return 0;
            }
            st = 2;

            if(str.find("@", i) != -1) {
                str.insert(i + 1, ",");
                i++;
            }
            else break;
        } 
        else {
            if(str[i] == '@') {
                cout << "No solution";
                return 0;
            }
            st = 0;
        }
    }
    if(st < 2) {
        cout << "No solution";
        return 0;
    }
    cout << str;

    return 0;
}