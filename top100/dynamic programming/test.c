#include<stdio.h>
#include<limits.h>

int main()
{

int t,n,x,s;

scanf("%d",&t);

for(x=0;x<t;x++)
{
	printf("coins:\n");
	scanf("%d",&n);
	
	printf("sum:\n");
	scanf("%d",&s);
	
	int i,a[n],c=0,k,z;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int b[100],count_coin,max=-1,found;
	
	for(i=0;i<=s;i++)
	{
		
		printf("go\n");
		count_coin=0;
		
		for(z=n-1;z>=0;z--)
		{
			found=0;
			if(a[z]==i || a[z]<i)
			{
				found=1;
				break;
			}
	}
		
		if(found==1)
		{
		//	printf("go\n");
			k=i-a[z];
			count_coin++;
			
			int start=0,end=c-1,mid;
			
			for(z=0;z<c;z++)
			{
				mid=(start+end)/2;
				
				if(mid==k)
				{
					count_coin=count_coin+b[mid];
					break;
				}
				else
				{
					if(mid < k)
					start=mid+1;
					else
					end=mid-1;
				}
			}
		
		//	printf("coin: %d \n",count_coin);
		printf("%d\n",found);
		
		}
		
			if(max < count_coin)
			max=count_coin;
			b[c]=count_coin;
			c++;
	}
	
	printf("max: %d \n",max);
	printf("coin: %d \n",count_coin);
	
	for(i=0;i<c;i++)
	printf("%d ",b[i]);
}

return 0;
}












