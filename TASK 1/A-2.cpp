#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int vowel_checker(string vowel)
{
    int count1=0;
    char ch=' ';
    for(int i=0;i<vowel.length();i++)
    {
        
        if(vowel[i]=='a' ||vowel[i]=='e'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u')
            count1=count1+1;
    }
    return count1;
}
int main()
{

int TestCase=0;
cin>>TestCase;
for(int a=0;a<TestCase;a++)
{
    int vowels=0;
    int total=0;
    string word1="";
    
    cin>>word1;
    string word="";
    char keep=' ';
    for(int i=0;i<word1.length();i++)
    {
        keep=tolower(word1[i]);
        word=word+keep;
    }
    
    int upper=1;
    string hold="";
   int count2=0;
    for(int i=0;i<word.length();i++)
    {
        for(int j=i;j<word.length();j++)
        {
            hold=hold+word[j];
            vowels=vowel_checker(hold);

            total=total+vowel_checker(hold);
            count2++;
        }
        hold="";
    }
    cout<<total<<"\n";
    
}
}
