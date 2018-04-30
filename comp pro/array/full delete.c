#include<stdio.h>

void swap1(int *ptr1,int *ptr2);
void swap2(int *ptr3,int *ptr4);

int main(void)
{
	
long unsigned int a[100000000];
	int i,b,l,r,s,t;
	
	long unsigned int q,n;
	scanf("%lu",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%lu",a+i);
	}
	
	scanf("%lu",&q);
	
	for(b=1;b<=q;b++)
	{
		scanf("%d",&l);
		s=n-l+1;
		swap1(a+l,a+s);
		
		scanf("%d",&r);
		t=n-r+1;
		swap2(a+r,a+t);
	}
	
	for(i=1;i<=n;i++)
	printf(" %lu",a[i]);
	return 0;
	
}

void swap1(int *ptr1,int *ptr2)
{
	int temp1;
	temp1=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp1;
	
}

void swap2(int *ptr3,int *ptr4)
{
	int temp2;
	temp2=*ptr3;
	*ptr3=*ptr4;
	*ptr4=temp2;
}

