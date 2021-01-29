#include <iostream>

using namespace std;
void bubblesort(int a[],int n)
{
    int i,j,c;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j+1];
                a[j+1]=a[j];
                a[j]=c;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<" "<<a[i];
}

int main()
{
    int n,a[100],i;
    cout<<"enter no of elements: ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    bubblesort(a,n);
    return 0;

}
