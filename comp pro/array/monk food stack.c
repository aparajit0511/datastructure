#include<stdio.h>
#define MAXSIZE 10

int top=-1;
int A[MAXSIZE];
int item;

void push(int c)
{
	A[++top]=c;
}
int pop()
{
	if(item==-1)
	{
			printf("NO FOOD\n");
	}
	item=A[top];
	top=top-1;
	return item;
}
int main(void)
{
	
	
	int n,c,q;
	int i;
	printf("enter no of queues:\n");
	scanf("%d\n",&q);
	
	for(i=0;i<q;i++)
//while(1)
	{
	printf("enter your choice:\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:item=pop();
		
			if(top==-1)
			{
				printf("NO FOOD\n");
				
			}
	else
	{
		printf("%d\n",item);
		
	}
	break;
	
	case 2:
	
		printf("enter cost:\n");
			scanf("%d\n",&c);
		//	top=top+1;
			push(c);
		break;
		
	}
}
	return 0;
}


