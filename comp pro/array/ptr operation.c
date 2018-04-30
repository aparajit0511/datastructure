#include<stdio.h>

void swap1(int *ptr1,int *ptr2);
void swap2(int *ptr3,int *ptr4);

int main(void)
{
	
	int a[100];
	int i,n,l,r,s,t;
	
	int q,b;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	
	scanf("%d",&q);
	
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
	printf(" %d",a[i]);
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
