#include<stdio.h>

int binary(int a[],int start,int end,int k);
int main()
{
	
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,i,k,mark;
		
		scanf("%d",&n);
		scanf("%d",&k);
		
		int a[n];
		
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		for(i=0;i<n;i++)
		{
			if(a[i] < a[i+1])
			continue;
			else
			{
				mark=i;
				break;
			}
		}
		int start=0,end=n-1,x,y;
		x=binary(a,start,mark,k);
		
		if(x == -1)
		{
			y=binary(a,mark+1,end,k);
			
			if(y == -1)
			{
				printf("-1\n");
				continue;
			}
			else
			{
				printf("%d\n",y);
				continue;
			}
		}
		else
		{
			printf("%d\n",x);
			continue;
		}
	}
	//code
	return 0;
}

int binary(int a[],int start,int end,int k)
{
	int mid,i,n=end;
	
	for(i=0;i<=n;i++)
	{
		mid=(start+end)/2;
		
		if(a[mid]==k)
		{
			return mid;
		}
		else
		{
			if(a[mid] < k)
			start=mid+1;
			else
			end=mid-1;
		}
	}
	
	return -1;
}














