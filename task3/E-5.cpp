#include <iostream>
using namespace std;
int main(){
    int big;
    int arr[10];
    for(int i=0; i <10 ; i++){
        cout << "Enter element :";
        cin>>arr[i];
    }
    big=arr[0];
    for(int i=1 ; i < 10; i++){
        if(big < arr[i]){
            big=arr[i];
        }

    }
    cout << "Largest number in array is :" << big;

    return 0;
}