#include<stdio.h>

int main()
{
	int t,a,i;
	long signed int n;
	 long signed int s[n];
	
	scanf("%d",&t);
	for(a=0;a<t;a++)
	{
		scanf("%ld",&n);
		
		for(i=0;i<n;i++)
		scanf("%ld",&s[i]);
		
	int min=0,count=0;
	min=s[0];
	for(i=1;i<n;i++)
	{
		if(min>s[i])
		min=s[i];
	}
//	printf("%d\n",min);
	for(i=0;i<n;i++)
	{
		if(min==s[i])
		count++;
	}
//	printf("%d \n",count);
	if(count%2==1)
		printf("Lucky");
		else
		printf("Unlucky");
}
	 
	 	return 0;
}
