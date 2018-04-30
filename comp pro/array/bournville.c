#include<stdio.h>

int main(void)
{
	
	int a[10000],b[10000];
	
	int c,n,i,j,temp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]==a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	int count[1000]={0};
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
		if(count[a[i]]>1)
		b[i]=a[i];
			c=b[0];
	}
	

	
	for(i=1;i<n;i++)
	{
		if(b[i]==c)
		{
			c=b[i];
			printf("%d",c);
		}
		else
		{
			if(b[i]>c)
			printf("%d",c);
		}
	}
	
	return 0;
	
}
