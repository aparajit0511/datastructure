#include<stdio.h>

int main(void)
{
	
	int arr1[30],arr2[30];
	
	int i,j,k,a,large1,large2;
	int t,n;

		
	

	printf("enter test cases:\n");
	
	scanf("%d",&t);
	
	for(a=0;a<t;a++)
	{
		printf("no of stones:\n");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("weight set 1:\n");
			scanf("%d",&arr1[i]);
		}
	
	for(j=0;j<n;j++)
	{
		printf("weight set 2:\n");
		scanf("%d",&arr2[j]);
	}
	
	int element1=0;
	int count1=0;
	
	
	for(i=0;i<n;i++)
	{
		int tempe1=arr1[i];
		int tempc1=0;
		for(j=0;j<n;j++)
		{
			if(arr1[j]==tempe1)
			tempc1++;
			
			if(tempc1>count1)
			{
				element1=tempe1;
				count1=tempc1;
			}
		}
	}
		int element2=0;
	int count2=0;
	
	
	for(i=0;i<n;i++)
	{
		int tempe2=arr2[i];
		int tempc2=0;
		for(j=0;j<n;j++)
		{
			if(arr2[j]==tempe2)
			tempc2++;
			if(tempc2>count2)
			{
				element2=tempe2;
				count2=tempc2;
			}
		}
	}
	
	

if(count1==1 && count2==1)
{
	printf("go");
	large1=arr1[0];
	for(k=1;k<n;k++)
	{
		if(large1<arr1[k])
		large1=arr1[k];
	}
	
	large2=arr2[0];
	for(k=1;k<n;k++)
	{
		if(large2<arr2[k])
		large2=arr2[k];
	}
	
		if(large1==large2)
	printf("tie");
	else
	{
	
	if(large1>large2)
	printf("rupam\n");
	else
	printf("ankit\n");
}

	}	
	
	else if(count1>1 && count2>1)
	{
		printf("go++");
		if(element1==element2)
		printf("tie");
		else
		{
		
		if(element1>element2)
		printf("rupam\n");
		else
		printf("ankit\n");
	}
		
		
	}
	
	
}
	
	return 0;
	
}
