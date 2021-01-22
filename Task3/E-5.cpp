#include<iostream>
using namespace std;
int main()
    {
        int a[10],greatest;
        for(int i=0;i<10;i++)
            {
                cout<<"Enter element : ";
                cin>>a[i];
                if(i==0)
                    greatest=a[i];
                else
                    {
                        if(a[i]>greatest)
                            greatest=a[i];
                    }
            }
        cout<<endl<<greatest;
        return 0;
    }