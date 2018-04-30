#include<stdio.h>

int main(void)
{
	
	int hit,i,t,h[1000],shoot;
	int *ptr;
	int small,count=0;
	int n,k,x;
	
	printf("a\n");
	scanf("%d",&n);
	printf("b\n");
	scanf("%d",&hit);
	printf("c\n");
	scanf("%d",&t);
	for(i=0;i<n;i++)
	scanf("%d",&h[i]);
	
	for(i=0;i<t;i++)
	{
		ptr=&h[0];
		while(*ptr<=0)
		{
			ptr++;
			printf("%d",*ptr);
		}
		small=*ptr;
		
		for(k=1;k<n;k++)
		{
			if(small>h[k])
			small=h[k];
			
		}
		for(x=0;x<n;x++)
		{
			if(small==h[x])
			shoot=small-hit;
			if(shoot<=0)
			count++;
			h[x]=shoot;
		}
	}
	
	printf("count %d",count);
	return 0;
	
}
