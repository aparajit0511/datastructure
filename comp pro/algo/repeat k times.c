#include <stdio.h>

int main()
{
   long int n,k;
   int i;
   scanf("%ld",&n);
   
 
   long int a[n];
   
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    int min=a[0];
   for(i=1;i<n;i++)
   {
   	if(min > a[i])
   	min=a[i];
	} 
	int count=0;
	for(i=0;i<n;i++)
	{
		if(min==a[i])
		count++;
	}
	   scanf("%ld",&k);
	if(count==k)
	printf("%d",min);
    return 0;
}

