#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int t; long long k,d; long n; 
    cout<<"test case\n>"<<endl;
    cin>>t;
    do
    {
        cout<<"input n,k and d seperated by space\n>>>";
        cin>>n>>k>>d;
        vector<long long> n1(n);
        cout<<"input question by each setter, seperated by space\n>>>";
        for(int i=0;i<n;i++)
        {
            //cout<<"elements"<<endl;
            cin>>n1[i];
        }
        long long sum=n1[0];
        for(int i=1;i<n;i++)
            sum+=n1[i];
        cout<<"output ";
        cout<<min(sum/k,d)<<endl;
        t--;
    } while (t>0);
    
}