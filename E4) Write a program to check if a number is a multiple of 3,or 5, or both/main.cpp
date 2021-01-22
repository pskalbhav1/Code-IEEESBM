#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin>>n;
    if(n%3==0 && n%5==0)
    {
        cout<<"the number is a multiple of both 3 and 5"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"the number is a multiple of 3";
    }
    else if(n%5==0)
    {
        cout<<"the number is a multiple of 5";
    }
    return 0;
}
