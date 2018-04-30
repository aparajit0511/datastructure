#include<stdio.h>

int main()
{
	long int n;
	
	scanf("%ld",&n);
	
	long int a[n],i,j;
	
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
	
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}	
	
	long int q,x;
	int t;
	
	
	scanf("%ld",&q);
	for(i=0;i<q;i++)
	{
		int count;
		scanf("%d %ld",&t,&x);
		
		if(t==0)
		{count=0;
			for(j=0;j<n;j++)
			{
				if(a[j]>=x)
				count++;
				
			}
			printf("go\n");
		}
		else if(t==1)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				if(a[j]>x)
				count++;
				
			}
			printf("go+\n");
		}
		
		printf("%d\n",count);
	}
	
	return 0;
}
