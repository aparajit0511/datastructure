#include<stdio.h>

void divide(int a[],int start,int end);
void conquor(int a[],int mid);

int count;
int main()
{
	int t,z,n,i;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		count=0;
		
		scanf("%d",&n);
		
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		if(a[0]>a[1])
		count++;
		
		if(a[n-1]>a[n-2])
		count++;
		
		int start=0,end=n-1;
		
		divide(a,start,end);
		
		printf("%d\n",count);
	}
	
	return 0;
}

void divide(int a[],int start,int end)
{
	int mid;
	
	if(start < end)
	{
		mid=(start+end)/2;
		
		divide(a,start,mid);
		divide(a,mid+1,end);
		conquor(a,mid);
	}
}

void conquor(int a[],int mid)
{
	
	if(a[mid] > a[mid+1] && a[mid] > a[mid-1])
	count++;
	else
	return ;
}









