#include<iostream>
using namespace std;
int main()
{
int cases;
cin >> cases;
while(cases -- )
{
int n,c;
cin >> n >> c;
int * arr = new int[n];
for(int i = 0; i < n ; i ++ )
{
int val;
cin >> arr[i];

};
int sum = 0;

for(int i = 0 ; i < n ; i ++)
{
sum = sum + arr[i];

};
int ans;
ans=c–sum;

if(ans >= 0)
cout << "Yes"<< endl;
else
cout << "No"<< endl;

}

}