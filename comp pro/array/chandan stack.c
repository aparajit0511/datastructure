#include<stdio.h>
#define SIZE 5000

int top=-1;
	int sum=0;

int main(void)
{
	int a[SIZE],x,n;
	int z;int i;
	//	printf("go\n");	
	scanf("%d ",&n);
	
	for(i=0;i<n;i++)
	
	{
//	printf("go1\n");	
		scanf("%d",&x);
	//	if(a[top]==SIZE-1)
		//{
		top++;
			a[top]=x;
			
			while(a[top]==0)
			{//	printf("go2\n");
				top=top-1;
				
		
			
			if(a[top]!=0)
			{
			
			top=top-1;
		}
		}
	
	
	}
	//}

	for(z=0;z<=top;z++)
	{
//	printf("%d\n",a[z]);
	sum=sum+a[z];
}

	
	printf("%d",sum);

	
	return 0;
}
