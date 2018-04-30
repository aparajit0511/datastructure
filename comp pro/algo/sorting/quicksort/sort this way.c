#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

void quicksort(long int* a,int start,int end);
void partitionArray(long int* a,int start,int end,int *pivot);

int main()
{
	long int n,i,j;
	
	scanf("%ld",&n);
	
	long int a[n];
	long int b[n];
	
//	long int *b=(long int*)malloc(sizeof(long int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	
	memcpy(b+i,a+i,n);
}
	
	//	for(i=0;i<n;i++)
//	printf("%ld ",b[i]);
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		a[i]=a[i]*-1;
	}
	
//		for(i=0;i<n;i++)
//	printf(" \n%ld ",a[i]);
	
	
	int start=0,end=n-1;
	quicksort(a,start,end);
	
	for(i=0;i<n;i++)
	{
		if(b[i]<0)
		{
			b[i]=b[i]*-1;
			for(j=0;j<n;j++)
			{
				if(b[i]==a[j])
				a[j]=a[j]*-1;
			}
		}
	}
	
	for(i=0;i<n;i++)
	printf("%ld ",a[i]);
	
	
	return 0;
}

void quicksort(long int* a,int start,int end)
{

int pivot;

if(start < end)
{
	partitionArray(a,start,end,&pivot);
	quicksort(a,start,pivot-1);
	quicksort(a,pivot+1,end);
	
	}	
}

void partitionArray(long int* a,int start,int end,int *pivot)
{
	int left=start;
	int right=end;
	
	*pivot=left;
	
	int tmp;
	
	
	while(1)
	{
		while(a[*pivot]<=a[right]  &&  *pivot!=right)
		{
		
		right--;
	}
		if(a[*pivot]==a[right])
		break;
		else if(a[*pivot]>a[right])
		{
			tmp=a[*pivot];
			a[*pivot]=a[right];
			a[right]=tmp;
			*pivot=right;
		}
		
		while(a[*pivot]>=a[left]  &&  *pivot!=left)
		{
		
		left++;
	}
	
		if(a[*pivot]==a[left])
		break;
		else if(a[*pivot]<a[left])
		{
			tmp=a[*pivot];
			a[*pivot]=a[left];
			a[left]=tmp;
			*pivot=left;
		}
	}
}
