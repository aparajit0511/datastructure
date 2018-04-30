#include<stdio.h>
#include<string.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		
		char s[2000];
		
		scanf("%s",&s);
		
		int l,i,mark,x;
		l=strlen(s);
		
		mark=l-1;
		for(i=l-1;i>=0;i--)
		{
			
			if(s[i]=='.')
			{
				for(x=i+1;x<=mark;x++)
				printf("%c",s[x]);
				printf(".");
				mark=i-1;
			}
			
		}
		
		for(x=i+1;x<=mark;x++)
				printf("%c",s[x]);
		
	}
	
	return 0;
}
