#include<stdio.h>

int main(void)
{
	int n,i,k,t,hit;
	int x;
	int a[1000];
	int *ptr;
	printf(" enter no of monsters:\n");
	scanf("%d",&n);
	
	printf(" enter hit points:\n");
	scanf("%d",&hit);
	
	printf(" enter total time:\n");
	scanf("%d",&t);
		
	for(i=0;i<n;i++)
	{
		
		printf(" enter monsters:");
		scanf("%d",&a[i]);
		
	}
	
	
	int small,count=0,shoot;
			
	for(i=0;i<t;i++)
	
	{
		ptr=&a[0];
		while(*ptr<=0)
		{
			ptr++;
			printf("%d",*ptr);
		}
		small=*ptr;
		


		for(k=1;k<n;k++)
		{
			printf("go");
			if(small>a[k] && a[k]>0)
			small=a[k];
			
		}
		for(x=0;x<n;x++)
		{
		
		if(small==a[x])
		{
		
		
		
	shoot=small-hit;
	
		if(shoot<=0)		
		count++;
	printf("shoot= %d\n",shoot);
	a[x]=shoot;

}
}

printf("time= %d\n",i);


}
	printf("monsters killed= %d\n",count);
		for(i=0;i<n;i++)
	{
		
	//	printf(" enter monsters:");
	printf(" %d",a[i]);
		
}

	return 0;
	
}
