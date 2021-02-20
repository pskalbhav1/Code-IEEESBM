#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

    while(t--)
    {
		string b;
		int i;
		cin >> b;

		cout<<b[0];
		for(i=1;i<b.size();i=i+2)
		{
		    cout<<b[i];
		}
		cout<<endl;
	}

	return 0;
}
