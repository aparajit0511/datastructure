#include<stdio.h>

int main(void)
{
	
	int a[100],b[100];//={1,-1,2,-2,-2,1,-1};
	int element=0,i,j,k;
	int n,size;
	
	int small;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
	
	int count=0;
	for(j=0;j<n;j++)
	{
	if(a[i]==a[j])
	{
		count++;
		element=a[j];
	}
	
	if(element!=b[i])
	{
	b[i]=element;
	printf("%d\n",b[i]);
	}	}
		
		}	
	
	small=b[0];
	size=sizeof(b)/sizeof(int);
	printf("%d",size);
	for(k=1;k<size;k++)
	{
		if(small>b[k])
		small=b[k];
	}
	
printf("%d",small);
	return 0;
}
