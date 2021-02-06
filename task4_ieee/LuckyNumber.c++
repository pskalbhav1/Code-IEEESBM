#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long>generator;
void gen(long long value,int four,int seven)
{
   if(value>1E10)
   return;
   if(four==seven&&value!=0)
   generator.push_back(value);
   gen(value*10LL+4,four+1,seven);
   gen(value*10LL+7,four,seven+1);
}
int main()
{
    long n;
    cin >> n;
    gen(0,0,0);
    sort(generator.begin(),generator.end());
  
    int lower=0;
    int upper=generator.size();
    int mid=0;
    long long found=0;
    while(lower<=upper)
    {
        
         mid=lower+((upper-lower)/2);
        // cout<<generator[mid]<<" ";
        // cout<<"lower = "<<lower<<"upper = "<<upper<<"\n";
        if(generator[mid]==n)
        break;
        if(generator[mid]>n)
        upper=mid-1;
        else
        lower=mid+1;
    }
    if(generator[mid]>=n)
    cout<<generator[mid]<<"\n";
    else
    cout<<generator[mid+1]<<"\n";
    // cout<<"found = "<<generator[mid];
}