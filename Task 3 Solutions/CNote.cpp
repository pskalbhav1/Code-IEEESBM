#include <iostream>
using namespace std;

int main() {
    int P[111111];
    int C[111111],T,X,Y,K,N,i,m;
    cin>>T;
    while(T--)
    {
        m=0;
        cin>>X>>Y>>K>>N;
        for(i=0;i<N;i++)
        {
             cin>>P[i]>>C[i];
        }
        for(i=0;i<N;i++)
        {
            if(P[i] >= X - Y && C[i] <= K)
            {
                m=1;
                cout<<"LuckyChef\n";
                break;
            }
            
        }
        if(m==0)
        {
            cout<<"UnluckyChef\n";
        }
    }
	// your code goes here
	return 0;
}