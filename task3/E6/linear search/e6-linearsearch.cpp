#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,num;
    cout<<"how many numbers you want to enter";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"enter the number"<<i+1<<":";
      cin>>arr[i];
      
    }
    cout<<"the number you want to search for";
      cin>>num;
    for(i=1;i<n;i++)
    {
        if(num==arr[i])
        cout<<"the position of that number is"<<i+1<<":";
        else
        {
        cout<<"the number doesnt exist in list"<<endl;

        }
        


    }
    
    return 0;
}