#include<stdio.h>


int front=-1,rear=-1;

void queue1(int queue[],int a[],int i);
void pop(int queue[]);
void quicksort(int a[],int start,int end);
void partition(int a[],int start,int end,int *pivot);

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,i,k,j;
		
		scanf("%d",&n);
		scanf("%d",&k);
		
		int a[n],queue[k];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		i=0;
			for(j=0;j<k;j++)
			{
			
			queue1(queue,a,i);
			i++;
		
		}
		
		int start=front,end=rear;
		
		quicksort(queue,start,end);
		
		printf("%d ",queue[rear]);
		
		pop(queue);
		pop(queue);
		
		for(i=k;i<n;i++)
		{
			if(queue[rear] >= a[i])
			{
				
				printf("%d ",queue[rear]);
			}
			else 
			{
				pop(queue);
				queue1(queue,a,i);
				printf("%d ",queue[rear]);
			}
		}
		
		printf("\n");
		
	}
	
	return 0;
}

void queue1(int queue[],int a[],int i)
{
	if(front==-1 && rear==-1)
	{
		queue[++rear]=a[i];
		front=0;
		
	}
	else
	{
		queue[++rear]=a[i];
	}
}

void pop(int queue[])
{
	front=front+1;
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
	
	int tmp;
	*pivot=left;
	
	while(1)
	{
		while(a[*pivot] <= a[right] && *pivot!=right)
		{
			right--;
		}
		
		if(a[*pivot] == a[right])
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
		
		if(a[*pivot] == a[left])
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












