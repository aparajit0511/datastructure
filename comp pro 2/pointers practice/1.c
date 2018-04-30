#include <stdio.h>
#include<stdlib.h>

int main()
{
   int i,j,k,n;
   
   scanf("%d",&n);
   
   int *ptr;
   
   ptr=(int*)malloc(sizeof(int)*n);
   
   for(i=0;i<n;i++)
   {
   	scanf("%d",&ptr[i]);
   }
   
   scanf("%d",&k);
   
   int diff,count=0;
   
   int *p;
   p=&ptr[0];
   while(j<n)
   {
   	for(i=0;i<n;i++)
   	{
   	//	if(*p==ptr[i])
   	//	i++;
   		
   		diff=*p-ptr[i];
   		printf(" %d \n",diff);
   		if(diff==k)
   		printf("%d %d ",*p,ptr[i]);
	   }
	   p++;
	   j++;
	   
   	
   }
   
   printf("%d",count);
   
   free(ptr);
    return 0;
}

