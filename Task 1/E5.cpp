#include <iostream>
using namespace std;
 
int main()
{
     
    // Variable declaration
    int n1 = 10, n2 = 12, n3 = 28, max;
     
    // Largest among n1, n2 and n3
    max = (n1 > n2) ? 
          (n1 > n3 ? n1 : n3) : 
          (n2 > n3 ? n2 : n3);
           
    // Print the largest number
    cout << "Largest number among "
         << n1 << ", " << n2 << " and "
         << n3 << " is " << max << "." ;
          
    return 0;
}
 