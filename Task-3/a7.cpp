#include <stdio.h>
#include<algorithm>
#include <vector>
#include<iostream>
#include <math.h>
#include <functional>
using namespace std;
int main()
{
    int n;
        cin>>n;


         vector <int> v(n);

        for(int j=0;j<n;j++)
        {


        cin>>v[j];

        }

            sort(v.begin(), v.end());

            int x=(n-1)/2;
            cout<<v[x];





}
