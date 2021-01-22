#include <bits/stdc++.h> 
using namespace std; 
bool check(int n) 
{ 
	 
	int d = sqrt(n); 
	
	if (d * d == n) 
		return true; 

	return false; 
} 

 
int largestNonPerfectSquareNumber(int a[], int n) 
{ 	
	int maxi = -1; 
	 
	for (int i = 0; i < n; i++) { 

		 
		if (!check(a[i])) 
			maxi = max(a[i], maxi); 
	} 
	return maxi; 
} 
int i;
 
int main() 
{ 
	int a[100];
	
	int n;
	
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	cout << largestNonPerfectSquareNumber(a, n); 
	return 0; 
} 
