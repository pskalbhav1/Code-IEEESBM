#include <iostream>

using namespace std;

int main()
{
int n,i;
int first=1,second=1,next;
cout<<"Enter A number:";
cin>>n;
cout<<"The first "<<n<<" numbers in the fibonaci series are:"<<endl;
cout<<first<<endl;
for (i = 1; i < n; i++)
{
    cout<<second<<endl;
    next=first+second;
    first=second;
    second=next;
}

return 0;
}