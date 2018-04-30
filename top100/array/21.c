#include<stdio.h>

int main()
{
	int n,z,i,j,k,sum=0;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(z=0;z<n;z++)
	{
		scanf("%d",&a[z]);
	}
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			
			for(k=i;k<=j;k++)
			{
				sum=sum+a[k];
				if(sum==0 && k==j)
				{
			//	printf("boo:%d ",a[k]);
			//	printf("\n");
				printf("index from %d to %d\n",i,j);
			}
		}
			sum=0; 
		}
	}
	
	return 0;
}
