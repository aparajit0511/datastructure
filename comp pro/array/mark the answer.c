#include<stdio.h>

int main(void)
{
	
	int a[10000];
	
	int i,n,q,count=0,count1=0;
	
	printf("enter no of questions:\n");
	
	scanf("%d",&n);
	
	printf("enter level of difficulty:\n");
	scanf("%d",&q);
	
	for(i=0;i<n;i++)
{
	printf("input questions:\n");
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	if(a[i]<=q)
	count++;
	else if(a[i]>q)
	{
		count1++;
		if(count1>1)
		break;
	}
	
	}	
	
	printf("output=%d",count);
	return 0;
}
