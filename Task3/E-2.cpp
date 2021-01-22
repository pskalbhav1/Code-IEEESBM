#include<iostream>
using namespace std;
float add(float a, float b)
    {
        return a+b;
    }
float sub(float a, float b)
    {
        return a-b;
    }
float mul(float a, float b)
    {
        return a*b;
    }
float div(float a,float b)
    {
        return a/b;
    }
int main()
    {
        float a,b;
        cin>>a>>b;
        cout<<add(a,b)<<" "<<sub(a,b)<<" "<<mul(a,b)<<" "<<" "<<div(a,b);
        return 0;
    }
