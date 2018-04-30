#include<stdio.h>

int main()
{
	
	int t,z,n,i;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		scanf("%d",&n);
		
		int a[n],stack[n],top=-1;
		
		for(i=0;i<n;i++)
		{
		
		scanf("%d",&a[i]);
		stack[++top]=a[i];
	}
	
	int max=0,d;
	
	for(i=0;i<n;i++)
	{
		d=stack[top]-a[i];
		
		if(d> max)
		max=d;
		
		if(i==n-1 && top!=-1)
		{
			i=0;
			top--;
		}
	}
	
	printf("max:%d\n",max);
	}
}
