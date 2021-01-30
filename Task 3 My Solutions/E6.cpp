#include<iostream>
using namespace std;
void bubblesort(int ar[], int l)
{
    bool sorted=false;
    while(!sorted)
    {
        sorted=true;
        for(int x=0; x<l-1; x++)
        {
            if(ar[x]>ar[x+1])
            {
                int t=ar[x];
                ar[x]=ar[x+1];
                ar[x+1]=t;
                sorted=false;
            }
        }
    }
}
void selectionsort(int ar[], int l)
{
    for(int x=0; x<l-1; x++)
    {

        int index=x;
        int small=ar[x];
        for(int y=x+1; y<l; y++)
        {
            if(ar[y]<small)
            {
                small=ar[y];
                index=y;
            }
        }
        int t=ar[x];
        ar[x]=small;
        ar[index]=t;
    }
}
void linearsearch(int ar[], int l, int n)
{
    selectionsort(ar, l);
    int index=0;
    bool found;
    for(int x=0; x<l; x++)
    {
        if(ar[x]==n)
        {
            index=x;
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"In the array : \n";
        for(int x=0; x<l; x++) cout<<ar[x]<<" ";
        cout<<"\n"<<n<<" was found at index "<<index;
    }
    else cout<<"Element Not Found";
}
void binarysearch(int ar[], int length, int n)
{
    selectionsort(ar, length);
    int f=0, l=length-1;
    bool found=false;
    int index=0;
    while(f<=l)
    {
        int mid=(f+l)/2;
        if(ar[mid]>n) l=mid-1;
        else if(ar[mid]<n) f=mid+1;
        else
        {
            found=true;
            index=mid;
            break;
        }
    }
    if(found)
    {
        cout<<"In the array : \n";
        for(int x=0; x<length; x++) cout<<ar[x]<<" ";
        cout<<"\n"<<n<<" was found at index "<<index;
    }
    else cout<<"Element Not Found";
}
int main()
{                         //Here an error is being marked... a function-definition is not allowed here before '{' token
    int l, n, choice;
    cout<<"Enter size of array : ";
    cin>>l;
    int ar[l];
    cout<<"Enter elements of array : ";
    for(int x=0; x<l; x++) cin>>ar[x];
    cout<<"Choose : \n1. Bubble Sort\t2. Selection Sort\t3. Linear Search\t4. Binary Search\n";
    cin>>choice;

    if(choice==1)
    {
        bubblesort(ar, l);
        for(int x=0; x<l; x++) cout<<ar[x]<<" ";
    }
    else if(choice==2)
    {
        selectionsort(ar, l);
        for(int x=0; x<l; x++) cout<<ar[x]<<" ";
    }
    else if(choice==3)
    {
        cout<<"Enter Element to be searched : ";
        cin>>n;
        linearsearch(ar,l,n);
    }
    else if(choice==4)
    {
        cout<<"Enter Element to be searched : ";
        cin>>n;
        binarysearch(ar,l,n);
    }
    else cout<<"Wrong choice";

    return 0;
}
