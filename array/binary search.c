#include<stdio.h>

int main(void)
{
	int arr[10];
	int n,x;
	int i;
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	int first=0, last=n-1,mid;
	
	for(i=0;i<n;i++)
	{
		mid=(first+last)/2;
		
		if(arr[mid]==x)
		{
			printf("%d",arr[mid]);
			break;
		}
		else
		{
			
			if(arr[mid]<x)
			{
				first=mid+1;
			}
			else
			{
				last=mid-1;
			}
	}
	}
/*	if(first!=last)
	printf("search found");
else
	printf("search not found");
*/

	
return 0;
}
