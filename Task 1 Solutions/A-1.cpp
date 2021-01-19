#include<bits/stdc++.h>
#define ll long long int
#define vec vector<ll>
#define f(var,a,b) for(ll var = a ; var < b ; var++ )
#define fr(var,a,b) for(ll var = a ; var > b ; var-- )
#define fasthoja ios_base::sync_with_stdio(false); cin.tie(NULL);
 
using namespace std;
 
void att2() {
   string a,b;
   string ans = "";
   while( cin >> a >> b ) {
       vec v1,v2;
       ll n1 = a.length();
       ll n2 = b.length();
 
       f(i,0,n1) v1.push_back( a[i] - '0' );
       f(i,0,n2) v2.push_back( b[i] - '0' );
 
       reverse( v1.begin() , v1.end() );
       reverse( v2.begin() , v2.end() );
 
       ll i = 0, j = 0;
       ll carry = 0;
       while( i < v1.size() && j < v2.size() ) {
           ll tmp1 = v1[i] + v2[j] + carry;
 
           carry = 0;
 
           if( tmp1 >= 10 && ( i != (v1.size()-1) || j != (v2.size()-1)  ) ) {
               // carry
               carry = tmp1 / 10;
               tmp1 = tmp1 % 10;
           }
           v1[i] = tmp1;
 
           i++; j++;
       }
 
       while( j < v2.size() ) {
           ll tmp2 = v2[j] + carry;
           carry = 0;
           if( tmp2 >= 10 ) {
               // carry
               carry = tmp2 / 10;
               tmp2 = tmp2 % 10;
           }
 
           v1.push_back(tmp2);
           // carry = 0;
           j++;
       }
 
       if( i < v1.size() ) {
           v1[i] += carry;
       }
 
       reverse( v1.begin() , v1.end() );
       f(k,0,v1.size()) cout << v1[k];
       cout << "\n";
   }
}
 
int main(void){
   fasthoja;
   att2();
   return 0;
}
