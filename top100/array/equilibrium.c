#include<stdio.h>


int equib(int *a,int start,int mid,int end);

int main()
{
	int t,z,n,i;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		scanf("%d",&n);
		
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		if(n==1)
		printf("%d",i);
		
		else
		{
		int start=0,mid=0,end=n-1,k;
		
		for(i=start;i<=end;i++)
		{
		//	printf("Go\n");
			k=equib(a,start,mid,end);
			if(k!=-1)
			break;
		mid++;
		}
		
		printf("%d",k);
	
		}
		
			printf("\n");
	}
	
	return 0;
}

int equib(int *a,int start,int mid,int end)
{
//	printf("go\n");
	int tmp;
	int left=start;
	int right=end;
	
	int sum1=0,sum2=0;
	
//	printf("mid:%d\n",mid);
	while(left<mid)
	{
		sum1=sum1+a[left];
		left++;
	}
	
	while(right>mid)
	{
		sum2=sum2+a[right];
		right--;
	}
//	printf("sum1:%d and sum2:%d\n",sum1,sum2);
	tmp=a[mid];
	if(sum1==sum2)
	return mid+1;
	else
	return -1;
}















