#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string numbers="";
    
    int a=0;
    int b=0;
    int sum=0;
     int count=0;
     string hold="";
     for (int j=0;j<12;j++)
     {
         numbers="";
         getline(cin,numbers);
         if(numbers!="")
         {
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
               a=0;
               b=0;
               sum=0;
           }
           hold="";


       }
   }
         }
  }
    
}

