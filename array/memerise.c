#include<stdio.h>

int main (void)
{
	int arr[100];
	
	int n,i,j;
	int q,b;

	
	printf("no of elements to be shown:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	printf("total no of elements:\n");
scanf("%d",&arr[i]);
}

printf("no of query to be asked:\n");
scanf("%d",&q);

for(j=0;j<q;j++)
{//count =0;
auto int count=0;
	printf("enter search element:\n");
	scanf("%d",&b);
	for(i=0;i<n;i++)
	{
		if(b==arr[i])
		count++;
	}

		if(count==0)
	printf("NOT PRESENT	\n");
	else
		printf("%d\n",count);
}

	

//	else
	
}
