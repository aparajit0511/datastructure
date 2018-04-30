#include<stdio.h>

int main(void)
{
	long int n,k;
	
	scanf("%ld",&n);
	long int a[n];
long int i;
	
	for(i=0;i<n;i++)
	{printf("go");
		scanf("%ld",&a[i]);
	}
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{printf("go1");
		
		
		if(k==a[i])
		printf("%ld\n",i);
	}
	
	return 0;
}
