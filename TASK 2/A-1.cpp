#include <iostream>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n,numbers,maximum;
    cout<<"Enter the number of elements in the arr";
    cin>>n;
    
   
    for(int i=0;i<n;i++)
    {
        cin>>numbers
        
            int d = sqrt(numbers);
            if (d * d != n)
                maximum=max(maximum,numbers);
        
              
    }
    cout<<maximum;
    return 0;
}
