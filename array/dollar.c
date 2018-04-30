#include <stdio.h>

int main(void)
{
	// your code goes here
	int a,n,temp,i,i1;
	int b[n];
	
//int *p;
	printf("enter test cases");
	scanf("%d",&a);
	
	printf("enter size");
	scanf("%d",&n);
	
	for( i1=0;i1<n;i1++)
	{
		printf("enter array");
		scanf("&d",&b[i1]);
	}                                        
//	p=&b;
	i=0;
	int count=0;
	while(i<n)
	{
	if(b[i]%2==1)
	count++;
	else
	{
	temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
	}
	i++;
	}
	
	for(i1=0;i1<n;i1++)
	
		printf("\n output= %d",b[i1]);
	
	return 0;
}
