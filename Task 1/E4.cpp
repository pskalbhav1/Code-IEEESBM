#include <iostream> 
using namespace std; 
  
// Returns true if n is even, else odd 
 
bool isEven(int n) 
{ 
return (n % 2 == 0); 
} 
  
// Driver code 
int main() 
{  
int n = 1002; 
isEven(n)? cout << "Even" : 
           cout << "Odd"; 
  
return 0; 
}