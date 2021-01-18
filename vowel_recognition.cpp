#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int vowel_checker(string vow)
{
	int count=0;
    char ch=' ';
	for(int i=0;i<vow.length();i++)
	{
        
		if(vow[i]=='a' ||vow[i]=='e'||vow[i]=='i'||vow[i]=='o'||vow[i]=='u')
			count=count+1;
	}
   // cout<<"count = "<<count;
	return count;
}
int main()
{

int t=0;
cin>>t;
for(int k=0;k<t;k++)
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
   // cout<<word;
   int counter=0;
	for(int i=0;i<word.length();i++)
	{
		for(int j=i;j<word.length();j++)
		{
			hold=hold+word[j];
            vowels=vowel_checker(hold);

			total=total+vowel_checker(hold);
            counter++;
		}
        hold="";
	}
    cout<<total<<"\n";
    cout<<counter<<" = counter";
}
}