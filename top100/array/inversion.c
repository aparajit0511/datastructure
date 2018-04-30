#include <stdio.h>

void partitionArray(int *a,int start,int end,int *pivot);
void quicksort(int *a,int start,int end);

int count;
int main()
{
int n,i,t,z;

scanf("%d",&t);

for(z=0;z<t;z++)
{
count=0;
scanf("%d",&n);

int a[n];

for(i=0;i<n;i++)
scanf("%d",&a[i]);

int start=0, end=n-1;

 quicksort(a, start, end);

//for(i=0;i<n;i++)
//printf("%d",a[i]);

printf("%d",count);
printf("\n");

}
    
    return 0;
}

void quicksort(int *a,int start,int end)
{
	int pivot;
	
	if(start<end)
	{
		 partitionArray(a,start,end,&pivot);
		// start++;
		// quicksort(a,start,pivot-1);
		 quicksort(a,start+1,end); 
	}
}

void partitionArray(int *a,int start,int end,int *pivot)
{
	//printf("start:%d \n",start);
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
		
		if(*pivot==right)
		break;
		else if(a[*pivot]>a[right])
		{
			/*
			temp=a[*pivot];
			a[*pivot]=a[right];
			a[right]=temp;
			*/
			count++;
			right--;
			//*pivot=right;
		}
		continue;
		
		while(a[*pivot]>=a[left] && *pivot!=left)
		{
			left++;
		}
		
		if(*pivot==left)
		break;
		else if(a[*pivot]<a[left])
		{
		/*
			temp=a[*pivot];
			a[*pivot]=a[left];
			a[left]=temp;
		*/
		//	*pivot=left;
		count++;
		}
	}
}





