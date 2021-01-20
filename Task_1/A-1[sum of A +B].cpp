#include <iostream>
#include <string>
using namespace std ;
int main(){
    string arr;
    int i=0,j,input,sum=0,k=0;
    while ( cin >> input ){
        arr[i]=input;
        i++;
    }
    for (j=0;j<i/2;j++){
        sum= sum + arr[k] + arr[k+1];
        cout << sum << endl ;
        k+=2;
        sum=0;
    }  
return 0;    
}