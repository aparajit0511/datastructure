#include<stdio.h>
#define max 5

int q1[max],q2[max],front1=-1,rear1=-1,front2=-1,rear2=-1;

void push1(int x);
void push2(int x);
int pop1();
int pop2();

int main()
{
	int n,m,x,i;
	
	printf("NO of items to push\n");
	scanf("%d",&n);
	
	printf("NO of items to be poped:\n");
	scanf("%d",&m);
	
	i=2;
	for(i;i<=n+1;i++)
	{
		
		//printf("i:%d\n",i);
		if(i%2 == 0)
		{
			scanf("%d",&x);
			push1(x);
		}
		
		else if(i%2 == 1)
		{
			scanf("%d",&x);
			push2(x);
		}
		
		
	}
	printf("q1:\n");
	for(i=front1;i<=rear1;i++)
	printf("%d ",q1[i]);
	
	printf("\n");
	printf("q2:\n");
	
	
	for(i=front2;i<=rear2;i++)
	printf("%d ",q2[i]);
	
		printf("\n");
	i=2;
	int k;
	for(i;i<=m+1;i++)
	{
		if(i%2==0)
		k=pop1();
		else if(i%2==1)
		k=pop2();
		
		printf("pop:%d\n",k);
	}
	
	
	return 0;
}

void push1(int x)
{
	if(rear1==max-1)
	{
	printf("queue1 overflow\n");
	return ;
}

   if(front1==-1 && rear1==-1)
   {
   	q1[++rear1]=x;
   	front1=front1+1;
   }
   else
   {
   	q1[++rear1]=x;
   }
}



void push2(int x)
{
	if(rear2==max-1)
	{
	printf("queue2 overflow\n");
	return ;
}

   if(front2==-1 && rear2==-1)
   {
   	q2[++rear2]=x;
   	front2=front2+1;
   }
   else
   {
   	q2[++rear2]=x;
   }
}

int pop1()
{
	if(front1==max || front1==rear1)
	{
		printf("NO item left\n");
		return -1;
	}
	else
	{
	
	front1=front1+1;
	
	return q1[front1];
}
}


int pop2()
{
	if(front2==max || front2==rear2)
	{
		printf("NO item left\n");
		return -1;
	}
	else
	{
	
	front2=front2+1;
	
	return q2[front2];
}
}





