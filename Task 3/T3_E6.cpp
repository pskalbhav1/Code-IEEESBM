#include <iostream>
using namespace std;
void LinearSearch(int a[],int n){
    int c=0,i,n2;

    cout<<"Enter the element you want to search for: ";
    cin>>n2;
    for(i=0;i<n;i++){
        if(a[i]==n2){
            cout<<"The number "<<n2<<" is present in the array";
            c=1;
        }
    }

    if(c==0)
    {
        cout<<"The number "<<n2<<" is not present in the array";
        
    }

}
int binarySearch(int arr[], int low, int high, int x) 
{ 
    if (high >= low) { 
        int mid = (low+high)/2; 
  
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, low, mid - 1, x); 
        return binarySearch(arr, mid + 1, high, x); 
    } 
    return -1; 
} 
void BubbleSort(int a[],int n){
    int i,j,temp;
for (j=0;j<n-1;j++){
    for (i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
    
}
void SelectionSort(int a[],int n){
    int min,i,j,temp;
    for(i=0;i<n; i++){
        min=i;
        for (j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
   }

}

int main(){
    int n,n2,i,a[100],high,low;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    /*
   // LinearSearch(a,n);
    LinearSearch(a,n)
    */
   /*
   //Binary Search
    cout<<"Enter the element you want to find: ";
    cin>>n2;
    high=n-1;
    low=0;
    if (binarySearch(a,low,high,n2)>0){
        cout<<"The element "<<n2<<" is present at index "<<binarySearch(a,low,high,n2);
    }
    else{
        cout<<"The element "<<n2<<" is not present in the array.";
    }
    */
/*
   //BubbleSort
   BubbleSort(a,n);
   cout<<"The Sorted array is:"<<endl;
   for(i=0;i<n;i++){
       cout<<a[i]<<endl;
   }
*/
/*
//SelectionSort
   SelectionSort(a,n);
   cout<<"The Sorted array is:"<<endl;
   for(i=0;i<n;i++){
       cout<<a[i]<<endl;
   }
   */
    return 0;
    }