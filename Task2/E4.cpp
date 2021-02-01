#include<iostream>
#include<stdio.h>
using namespace std;
int main()
    {
        int n,m_15=0,m_5=0,m_3=0;
        if(n%15==0)
            m_15=1;
        else if(n%5==0)
            m_5=1;
        else
            m_3=1;
        return 0;
    }
        