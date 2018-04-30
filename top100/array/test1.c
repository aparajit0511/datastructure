#include<stdio.h>

void inversion(int *a,int start,int end);
void countinv(int *a,int *start,int end);

int count=0;

int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int start=0,end=n-1;
	
	inversion(a,start,end);
	
	printf("%d",count);
	
	
	return 0;
}

void inversion(int *a,int start,int end)
{
	int pivot=start;
	countinv(a,&pivot,end);
	
	while(start < end)
	{
	//	printf("start:%d\n",start);
		start++;
		pivot=start;
		countinv(a,&pivot,end);
	}
}

void countinv(int *a,int *start,int end)
{
	//printf("go\n");

	int right=end;
	
	while(1)
	{
		while(a[*start] < a[right] && *start!=right)
		{
			
			right--;
		}
		
		if(a[*start] > a[right])
		{
		//	printf("go1\n");
			count++;
			right--;
		}
		else if(*start==right)
		break;
	}
	
//	printf("start1:%d\n",start);
}











