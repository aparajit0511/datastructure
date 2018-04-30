#include <stdio.h>

int main()
{
    int t,z;
    
    scanf("%d",&t);
    
for(z=0;z<t;z++)
{
    long int l,r,k;
    
    scanf("%ld %ld %ld",&l,&r,&k);
    
    long int i,j,a,b;
    int count=1;
    for(i=l;i<=r;i++)
    {
        a=i*k;
        for(j=l;j<=r;j++)
        {
            b=j*k;
            if(i>b && j>a && i!=j)
            count++;
        }
    }
  printf("%d \n",count);  
}
    return 0;
}

