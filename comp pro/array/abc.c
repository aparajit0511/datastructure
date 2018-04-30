#include <stdio.h>

int main()
{
    long unsigned int n;
    
    scanf("%ld",&n);
     
     int a[n],i;
     
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     int found=0;
     for(i=0;i<n;i++)
     {
     	a[i]--;
     	
     	if(a[i]<0)
     	{
		 
     	printf("NO\n");
     	break;
     }
     else
     continue;
	 }
	 int z=0;
	 while(z<n)
	 {
	 
	 if(a[z]==0)
	 {
	 
	 continue;
     	found=1;
     }
	z++;
}
if(found==1)
 printf("YES\n");
    return 0;
}

