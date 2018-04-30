#include<stdio.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,i,k;
		
		scanf("%d",&n);
		scanf("%d",&k);
		
		int a[n];
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		int start=0,end=n-1,mid,mark,found=0;
		
		while(start<=end)
		{
			mid=(start+end)/2;
			
			if(a[mid] > a[mid+1] && a[mid-1] < a[mid])
			{
				mark=mid;
				break;
			}
			else
			{
				if(a[start] <= a[mid])
				start=mid+1;
				else
				end=mid-1; 
			}
		}
		
		start=0,end=n-1;
		
		while(start<=end)
		{
			if(a[mark]==k)
			{
				printf("%d\n",mark);
				found=1;
				break;
			}
			else
			{
				if(k >= a[start] && k < a[mark])
				end=mark-1;
				else
				start=mark+1;
			}
			
			mark=(start+end)/2;
		}
		
		if(found==0)
		printf("OOPS!NOT FOUND\n");
	}
	
	return 0;
}
