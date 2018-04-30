#include<stdio.h>
#include<limits.h>

int main()
{
	
	int t,z,n,i;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		scanf("%d",&n);
		
		int a[n],sum=0,max=INT_MIN;
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
			
			if(sum > max)
			max=sum;
			
			if(sum < a[i])
			{
				sum=0;
				//max=INT_MIN;
				i--;
				continue;
			}
		}
		
		printf("%d\n",max);
	}
	
	return 0;
}
