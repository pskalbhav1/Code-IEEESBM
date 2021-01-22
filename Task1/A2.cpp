#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int vowel_check(string vowel)
{
	int count=0;
    char ch=' ';
	for(int i=0;i<vowel.length();i++)
	{
        
		if(vowel[i]=='a' ||vowel[i]=='e'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u')
			count=count+1;
	}
   // cout<<"count = "<<count;
	return count;
}
int main()
{

int T=0;
cin>>T;
for(int k=0;k<T;k++)
{
	int vowels=0;
	int total=0;
	string words="";
    
	cin>>words;
    string word="";
    char keep=' ';
    for(int i=0;i<words.length();i++)
    {
        keep=tolower(words[i]);
        word=word+keep;
    }
    
	int upper=1;
	string temp="";
   // cout<<word;
   int counter=0;
	for(int i=0;i<word.length();i++)
	{
		for(int j=i;j<word.length();j++)
		{
			temp=temp+word[j];
            vowels=vowel_check(temp);

			total=total+vowel_check(temp);
            counter++;
		}
        temp="";
	}
    cout<<total<<"\n";
    
}
}