#include <iostream>

using namespace std;

int main()
{
    int n=10,i,arr[10],max;
    cout << "The length of array is "<<n<<endl;
    cout<<"Enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"the greatest number is "<<max;
    return 0;
}
