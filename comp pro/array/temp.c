#include<stdio.h>

int main(void)
{
	
	int arr1[30],arr2[30];
	
	int i,j,k,a,l1,l2;
	
	int t,n;
	
	int element1=0;
		int count1=0;
		
			int element2=0;
		int count2=0;
	
	printf("test cases:\n");
	scanf("%d",&t);
	
	for(a=0;a<t;a++)
	{
		printf("no of stones:\n");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("stone weight set 1:\n");
			scanf("%d",&arr1[i]);
		}
		for(j=0;j<n;j++)
		{
			printf("stone weight set 2:\n");
			scanf("%d",&arr2[j]);
		}
		
		
		
		
		for(i=0;i<n;i++)
		{
			int tempe1=arr1[i];
			int tempc1=0;
			for(j=0;j<n;j++)
			{
			if(arr1[j]==tempe1)
			tempc1++;
			if(tempc1>=count1)
			{
				element1=tempe1;
				count1=tempc1;
				}	
			}
		}
		
		if(count1==0)
		{
			l1=arr1[0];
			for(k=1;k<n;k++)
			{
				if(l1<arr1[k])
				l1=arr1[k];
			}
		}
		//
	
		
		for(i=0;i<n;i++)
		{
			int tempe2=arr2[i];
			int tempc2=0;
			for(j=0;j<n;j++)
			{
			if(arr2[j]==tempe2)
			tempc2++;
			if(tempc2>=count2)
			{
				element2=tempe2;
				count2=tempc2;
				}	
			}
		}
		
		if(count2==0)
		{
			l2=arr2[0];
			for(k=1;k<n;k++)
			{
				if(l2<arr2[k])
				l2=arr2[k];
			}
		}

printf("element1 is: %d count1 is: %d\n",element1,count1);
printf("element2 is: %d count2 is: %d\n",element2,count2);
printf("%d %d\n",l1,l2);
if(element1>element2)

printf("rupam\n");
else
printf("ankit\n");

if(element1==element2)
printf("tie");

if(l1>l2)

printf("rupam\n");
else
printf("ankit\n");

if(l1==l2)
printf("tie");
		
}
	
	return 0;
}

