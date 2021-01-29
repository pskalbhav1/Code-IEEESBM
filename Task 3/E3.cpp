#include <bits/stdc++.h>
using namespace std;
 
int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
 
int main()
{
    int N;
    cout<<"Enter the number:";
    cin >>N;
    cout << "Number of digits : " << countDigits(N);
    return 0;
}