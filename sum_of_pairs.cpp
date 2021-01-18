#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"enter numbers in string format"<<"\nEx:1 2 3 4\n";
    string numbers="";
    getline(cin,numbers);
    int a=0;
    int b=0;
    int sum=numbers.length();
     sum=0;
     int count=0;
     string hold="";
     numbers=numbers+" ";
   for(int i=0;i<numbers.length();i++)
   {
       if (numbers[i]!=' ')
           hold=hold+numbers[i];
       
       else
       {
           if(count==0)
           {
               a=stoi(hold);
               count=1;
               hold="";
               continue;
           }
           if( count==1)
           {
               b=stoi(hold);
               sum=a+b;
               cout<<sum<<"\n";
               count=0;
           }
           hold="";


       }
  }
    
}