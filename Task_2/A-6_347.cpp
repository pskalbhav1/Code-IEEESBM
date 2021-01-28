#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
 
void swap(int *a,int *b);
int count(int arr[],int num);
int main(){
    int arr[100000],i,n,cnt=0,index[100000],j=0,cnt2=0,temp[100000];
    cin >> n;
    for (i=0;i<n;i++){
        cin >> arr[i];
    }
    cnt=count(arr,n);
    for (i=0;i<n;i++){
        if (arr[i]!=i){
            index[j++]=i;
        }
    }
    for (i=0;i<j;i++){
        for (int k=0;k<n;k++){
            copy(begin(arr),end(arr),temp);
            swap (&temp[index[i]],&temp[k]);
            cnt2=count(temp,n);
            if (cnt2>cnt) 
                cnt=cnt2;
        }
    }
    cout << cnt ;
    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int count (int arr[],int num){
    int i,counts=0 ;
    for (i=0;i<num;i++){
        if (arr[i]==i)
            counts++;
    }
    return counts;
}