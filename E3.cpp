#include <iostream>

using namespace std;

int main()
{
    int digits(int n);
    int n,result;
    cout << "Enter a number" << endl;
    cin>>n;
    result=digits(n);
    cout<<"number of digits are "<<result<<endl;
    return 0;
}

    int digits(int n)
    {
        int count=0;
    while(n!=0)
    {
        n=n/10;
      count++;
    }
        return count;
    }

