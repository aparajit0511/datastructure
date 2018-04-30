#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		char str[10];
		scanf("%s",str);
		
		int l,i;
		int res=0,found;
		l=strlen(str);
		
		int val=atoi(str);
		/*
		//printf("go\n");
		for(i=0;i<l;i++)
		{
			//printf("i:%d\n",i);
		found=0;
			if(str[i]>= 48 && str[i]<=57)
			{
				res=res*10+str[i]-'0';
			}
			else
			{
				found=1;
				break;
			}
			
		}
			if(found==0)
			printf("%d\n",res);
			else
			printf("-1\n");
			
	
	*/
	
	printf("%d\n",val);
	}
	return 0;
}
