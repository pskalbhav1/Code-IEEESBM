#include <iostream>  
using namespace std;  

int main()
{
   int num1, num2, sum;
   cin>>num1;
   cin>>num2;
   sum = num1 + num2;
   cout<<sum;
   if(sum%2 != 0){
    cout<<"\nThe sum is odd";
   }
    else{
        cout<<"\nThe sum is even";
    }

   return 0;
}
