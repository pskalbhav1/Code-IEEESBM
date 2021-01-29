#include <iostream>
using namespace std;

void evenNumbers(int n)
{
int i;
for (i = 1; i < n; i++) {
if (i % 2 == 0)
cout << i << " ";
}
cout << "\n";
}

int main()
{
int N;
// input the value of N
cout << "Enter the value of N (limit): ";
cin >> N;
cout << "EVEN numbers are...\n";
evenNumbers(N);
return 0;
}
