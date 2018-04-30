#include<stdio.h>
#define MAXSIZE 10

int top=-1;
int A[MAXSIZE];
int c;
void pop();
void push();
int main(void)
{
	
	
	int q;
	int i;
	printf("enter no of queues:\n");

	
	for(i=0;i<q;i++)
	{
		scanf("%d\n",&q);
	switch(q)
	{
		case 1:
		pop();
		
	break;
	
	case 2:
		push();
		break;
		
	}
}
	return 0;
}

void pop()
{
		if(top==-1)
			{
				printf("NO FOOD\n");
				
			}
	else
	{
		printf("%d\n",c);
		top=top-1;
	}
}

void push()
{
	if(top==-1)
		{
			scanf("%d\n",&c);
		//	top=top+1;
			A[++top]=c;
			pop();
		}
}
