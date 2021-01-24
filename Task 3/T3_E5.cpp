#include <iostream>
using namespace std;

int main(){
    int n=10, a[100],i,max;
    cout<<"Enter the 10 elements of the array:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    cout<<"Largest number is "<<max;
    
    return 0;}