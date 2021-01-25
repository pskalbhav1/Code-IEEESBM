#include<iostream>
#include<stdio.h>
using namespace std;
int lin(int a[],int n)
    {
        int i,found=0,x;
        cout<<endl<<"Enter element to be searched for : ";
        cin>>x;
        for(i=0;i<n;i++)
            {
                if(a[i]==x)
                    {
                        found=1;
                        break;
                    }
            }
        if(found)
            cout<<endl<<"Element found at position "<<i+1;
        else    
            cout<<endl<<"Element not found.";

        return 0;
      }

int bubble(int a[],int n)
    {
        int temp;
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-1-i;j++)
                {
                    if(a[j]>a[j+1])
                        {
                            temp=a[j];
                            a[j]=a[j+1];
                            a[j+1]=temp;
                        }
                }
        return 0;
    }

int bin(int a[],int n)
    {
        bubble(a,n);
        int x;
        cout<<"Enter element to be found : ";
        cin>>x;
        int low=0,high=n-1,mid,found=0;
        while(low<=high)
            {
                mid=(low+high)/2;
                if(a[mid]==x)
                    {
                        found=1;
                        break;
                    }
                else if(a[mid]<x)
                    {
                        low=mid+1;
                    }
                else
                    {
                        high=mid-1;
                    }
            }
        if(found)
            cout<<"Element found at position "<<mid+1<<" after sorting.";
        else
            cout<<"Element not found";
        return 0;
        
    }

int sel(int a[],int n)
    {
        int min,temp,i,j;
        for(i=0;i<n-1;i++)
            {
                min=i;
                for(j=i+1;i<n;j++)
                    if(a[j]<a[min])
                        min=j;
            }
        temp=a[j];
        a[j]=a[min];
        a[min]=temp;
        return 0;
    }

int main()
    {
        int method,a[10],n;
        cout<<"Enter size of array : ";
        cin>>n;
        for(int i=0;i<n;i++)
            {
                cout<<endl<<"Enter element "<<i+1<<" : ";
                cin>>a[i];
            }
        cout<<"Enter : \n\t 1 for linear search \n\t 2 for binary search \n\t 3 for selection sort \n\t 4 for bubble sort\n";
        cin>>method;
        switch(method)
            {
                case 1: lin(a,n);
                        break;
                
                case 2: bin(a,n);
                        break;

                case 3: sel(a,n);
                        break;

                case 4: bubble(a,n);
                        cout<<"The sorted array is :\n";
                        for(int i=0;i<n;i++)
                            cout<<"\t"<<a[i];
                        break;

                default: cout<<"Wrong choice.";
            }
        
        return 0;

    }