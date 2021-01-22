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
     string temp="";
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
           temp=temp+numbers[i]; 
       
       else
       {
           if(count==0)
           {
               a=stoi(temp); 
               count=1;
               temp=""; 
               continue;
           }
           if( count==1)
           {
               b=stoi(temp); 
               sum=a+b; 
               cout<<sum<<"\n";
               count=0;
               a=0;
               b=0;
               sum=0;
           }
           temp="";

       }
   }
         }
  }
    
}

