#include <stdio.h>
#include<string.h>

int main()
{
int t,a;
char s[10000];

scanf("%d",&t);

for(a=0;a<t;a++)
{
	
	scanf("%s",&s);
	int i,count=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'  )
		count++;
	}
	printf("%d",count);
}
    
    return 0;
}

