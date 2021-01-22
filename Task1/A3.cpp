#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n=0;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            
        }
       
    }
    int lsum=0;
    int rsum=0;
    //for left diagnol
    int col=n-1;
    int row=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if (i==j)
           lsum=lsum+(arr[i][j]);
           if(row==i && col==j)
           {
               rsum=rsum+arr[i][j];
               col--;
               row++;
           }

        }
    }
    int diff=abs(lsum-rsum);
    cout<<diff;
    


}