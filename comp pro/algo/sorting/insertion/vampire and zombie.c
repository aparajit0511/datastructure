#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    
    int a[n];
    int d1=0,d2=0,sum1=0,sum2=0,i,j;
    int b[1000],c[1000];
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    	{
    		b[d1]=a[i];
    		d1++;
		}
		else if(a[i]%2==1)
		{
			c[d2]=a[i];
			d2++;
		}
	}
	int temp1,temp2;
	
	for(i=0;i<d1;i++)
	{
		for(j=i+1;j<d1;j++)
		{
			if(b[i]>b[j])
			{
				temp1=b[i];
				b[i]=b[j];
				b[j]=temp1;
			}
		}
	}
	
	for(i=0;i<d1;i++)
	{
		printf("%d ",b[i]);
		sum1=sum1+b[i];
	}
	printf(" %d ",sum1);
	
	
	
		for(i=0;i<d2;i++)
	{
		for(j=i+1;j<d2;j++)
		{
			if(c[i]>c[j])
			{
				temp2=c[i];
				c[i]=c[j];
				c[j]=temp2;
			}
		}
	}
	
	for(i=0;i<d2;i++)
	{
		printf("%d ",c[i]);
		sum2=sum2+c[i];
	}
	printf(" %d ",sum2);
	
    return 0;
}

