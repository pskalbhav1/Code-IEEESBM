#include <iostream>
using namespace std;
void linear(int a[],int n,int key)
{  int i;
   for(i=0;i<n;i++)
   {
       if(a[i]==key){
         cout<<"element found";
       break;}
    }
    if(i==n)
        cout<<"element not found";
}
int main()
{
  int n,a[100],key,i;
   cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  cin>>key;
  linear(a,n,key);
  return 0;
}
