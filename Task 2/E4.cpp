#include <iostream>

using namespace std;

int main()
{
int a;
cout<<"Enter a number:";
cin>>a;
if(a%15==0){
    cout<<a<<" is a multiple of both 3 and 5";
}else if(a%3==0){
    cout<<a<<" is a multiple of only 3";

}else if(a%5==0){
    cout<<a<<" is a multiple of only 5";

}
else
{
    cout<<a<<" is neither a multiple of 3 nor of 5";
}

return 0;
}