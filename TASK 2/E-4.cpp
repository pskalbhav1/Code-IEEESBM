#include <iostream>  
using namespace std;  

int main()
{
   int rem, rnum, num, sum, n;
   cin>>num;
   n=num;
   while(num != 0){
    rnum = num%10;
    num = num/10;
    //quo= n/10;
    //rem = n - (quo * 10);
    sum += rnum;
    }
    if(n%5 ==0 && sum%3 ==0){
        cout>>"\n\nThe number is multiple of both 3 and 5";
    }
    else if(sum%3 == 0){
        cout>>"\nthe number is multiple of 3";
    }
    else if(n%5 == 0){
        cout>>"\nthe number is multiple of 5";
    }
    else{cout>>"\nthis is not multiple of either 3 or 5";}
    cout>>"\n\n";
   return 0;
}
