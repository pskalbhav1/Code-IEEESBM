#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"Enter The First number:";
cin>>a;
cout<<"Enter The Second number:";
cin>>b;
if((a+b)%2==0){
    cout<<"The sum is even";
}
else
{
    cout<<"The Sum is odd";
}


return 0;
}