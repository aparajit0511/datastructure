#include<stdio.h>

int main(void)
{
	int a[1000];
	int t,y;
	
	int arr[1000];
	int n,k,i,j,x;
	
	scanf("%d",&t);
	
	for(y=0;y<t;y++)
	{
	
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int temp;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int count=0;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=a[i]&a[j];
			if(x<k)
			{
				count++;
				arr[j]=x;
			}
		}
	}
	
	int z;
	int large=arr[0];
	
	for(z=1;z<count;z++)
	{
		if(large<arr[z])
		large=arr[z];
	}
	
	printf("%d",large);
}
	return 0;
	
}
