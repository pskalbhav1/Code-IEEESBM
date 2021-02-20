#include<stdio.h>
#include<string.h>
char s[11][1000];
int main()
{
	int a,b,n;
	int i,cnt,t;
	scanf("%d",&n);
	getchar( );
	for(i=0;i<n;i++)
	{
		gets(s[i]);
	}
	for(i=0;i<n;i++)
	{
		t=strlen(s[i]);
			a=(s[i][0]=='m'&&s[i][1]=='i'&&s[i][2]=='a'&&s[i][3]=='o'&&s[i][4]=='.');
			b=(s[i][t-5]=='l'&&s[i][t-4]=='a'&&s[i][t-3]=='l'&&s[i][t-2]=='a'&&s[i][t-1]=='.');
				if(a&&!b)
				printf("Rainbow's\n");
				if(!a&&b)
				printf("Freda's\n");
				if((a&&b)||(!a&&!b))
				printf("OMG>.< I don't know!\n");
	}
	return 0;
 }
 	 	 	  	 	 	 	   	 		 	  		  	
