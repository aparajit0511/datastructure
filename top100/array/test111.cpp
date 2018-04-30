#include<stdio.h>

void quicksort(int *a,int start,int end);
void partition(int *a,int start,int end,int *pivot);

int main()
{
	
	int t,z,n,i;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		
		scanf("%d",&n);
		
		int a[n],b[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[i]=a[i];
		}
		
		int start=0,end=n-1;
		
		quicksort(b,start,end);
		
		int mark1,mark2;
		
		for(i=0;i<n;i++)
		{
			if(a[i]==b[i])
			continue;
			else
			{
				mark1=i;
				break;
			}
		}
		
		for(i=n-1;i>=0;i--)
		{
			if(a[i]==b[i])
			continue;
			else
			{
				mark2=i;
				break;
			}
			
		}
		
		printf("%d %d",mark1,mark2);
		printf("\n");
		
	}
	
	return 0;
}

void quicksort(int *a,int start,int end)
{
	int pivot;
	
	if(start < end)
	{
		partition(a,start,end,&pivot);
		quicksort(a,pivot+1,end);
		quicksort(a,start,pivot-1);
	}
}

void partition(int *a,int start,int end,int *pivot)
{
	int left=start;
	int right=end;
	
	int tmp;
	
	*pivot=left;
	
	while(1)
	{
		while(a[*pivot] <= a[right] && *pivot!=right)
		{
			right--;
		}
		
		if(a[*pivot]==a[right])
		break;
		else if(a[*pivot] > a[right])
		{
			tmp=a[*pivot];
			a[*pivot]=a[right];
			a[right]=tmp;
			*pivot=right;
		}
		
		while(a[*pivot] >= a[left] && *pivot!=left)
		{
			left++;
		}
		
		if(a[*pivot]==a[left])
		break;
		else if(a[*pivot] < a[left])
		{
			tmp=a[*pivot];
			a[*pivot]=a[left];
			a[left]=tmp;
			*pivot=left;
			
		}
	}
	
}










