#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x[100];
    int a=0;
    string number="";
    string hold="";
    int count =0;
    int b=0;
    int c=0;
    int N=0;
    cin>>N;
    vector<int>v;
    for(int i=0; i <N; i++){
    cin>>x[i];
    v.push_back(x[i]);
    sort(v.begin(),v.end());
    cin>>a;
    v.erase(v.begin()+(a-1));
    getline(cin,number);
    number=number+" ";
    for(int i= 0; i<=number.length();i++)
    {
        if (number[i]!=' ')
           hold=hold+number[i];
       
       else
       {
           if(count==0)
           {
               b=stoi(hold);
               count=1;
               hold="";
               continue;
           }
           if( count==1)
           {
               c=stoi(hold);
               hold="";
               count=0;
    }
       }
    }
    v.erase(v.begin()+(b-1),v.begin()+(c-1));
}
    for(int i=0; i < v.size(); i++)
    {
        cout <<v.size();
   cout << v.at(i) << ' ';
    }
    return 0;
}

