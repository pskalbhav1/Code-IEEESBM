#include<iostream>
using namespace std;
int main()
{
int i1=0,i2=1,i3,i,n;
cout<<"Enter the number of elements:";
cin>>n;
cout<<i1<<""<<i2<<"";
for(i=2;i<=n;++i)
{
    i3=i1+i2;
cout<<i3<<"";
i2=i1;
i3=i2;
}
return 0;
}