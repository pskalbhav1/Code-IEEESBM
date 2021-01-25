#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    int largest=arr[0];
    for(i=0;i<10;i++)
    {
    cout<<"enter 10 positive integer number"<<i+1<<':';
    cin>>arr[i];
    }
    for ( i = 1; i < 10; i++)
    {
 
    
    if(arr[i]>=largest)
    {
        largest=arr[i];
    }
    }

cout<<"the largest number is"<<largest;
return 0;

}
