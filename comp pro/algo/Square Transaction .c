#include <stdio.h>

int main()
{
   long int t,b;
  // printf("test no\n");
   scanf("%ld",&t);
   
  // int n,d;
  // 	scanf("%d",&n);
   	
   	int a[t];
  // 	printf("elements\n");
  	for(b=0;b<t;b++)
   	scanf("%d",&a[b]);
   
  // for(b=0;b<t;b++)
  // {
   //	printf("query\n");
   	
   	long int q,target,i;
   	
   	scanf("%ld",&q);
   	
   	for(i=0;i<q;i++)
   	{
   	//	printf("target\n");
   		scanf("%ld",&target);
   		
   		long int sum=0;
   		int z;
   		
   		for(z=0;z<t;z++)
   		{
   			sum=sum+a[z];
   			if(sum < target)
   			continue;
   			else
   			printf("%d\n",z+1);
   			break;
		   }
	   }
  // }
    return 0;
}

