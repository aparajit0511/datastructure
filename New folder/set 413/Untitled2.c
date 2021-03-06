#include<stdio.h>

void quicksort(int a[],int start,int end);
void partition(int a[],int start,int end,int *pivot);

int main()
{
	
	int n,i;
	
	scanf("%d",&n);
	int a[n],pro=1;
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int start=0,end=n-1;
	
	quicksort(a,start,end);
	
	pro=a[n-1]*a[n-2]*a[n-3];
	
	printf("%d",pro);
	
	return 0;
}

void quicksort(int a[],int start,int end)
{
	int pivot;
	
	if(start < end)
	{
		partition(a,start,end,&pivot);
		quicksort(a,start,pivot-1);
		quicksort(a,pivot+1,end);
		
	}
}
void partition(int a[],int start,int end,int *pivot)
{
	int left=start;
	int right=end;
	
	*pivot=left;
	int temp;
	
	while(1)
	{
		while(a[*pivot]<=a[right] && *pivot!=right)
		{
			right--;
		}
		
		if(a[*pivot]==a[right])
		break;
		else if(a[*pivot]>a[right])
		{
			temp=a[*pivot];
			a[*pivot]=a[right];
			a[right]=temp;
			*pivot=right;
		}
		
		while(a[*pivot]>=a[left] && *pivot!=left)
		{
			left++;
		}
		
		if(a[*pivot]==a[left])
		break;
		else if(a[*pivot]<a[left])
		{
			temp=a[*pivot];
			a[*pivot]=a[left];
			a[left]=temp;
			*pivot=left;
		}
	}
}









