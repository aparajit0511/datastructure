#include<stdio.h>

int max(int x,int y);
int main()
{
	int t,z,n,W;
	
	printf("test case:\n");
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		printf("items:\n");
		scanf("%d",&n);
		printf("final wt:\n");
		scanf("%d",&W);
		
		int val[n+1],wt[n+1],V[n+1][W+1];
		
		int i,w;
		
		for(i=1;i<=n;i++)
		{
			printf("wt:\n");
			scanf("%d",&wt[i]);
			printf("value:\n");
			scanf("%d",&val[i]);
		}
		
		for(w=0;w<=W;w++)
		{
			V[0][w]=0;
		}
		
		for(i=0;i<=n;i++)
		{
			V[i][0]=0;
		}
		
		
		for(i=1;i<=n;i++)
		{
			for(w=1;w<=W;w++)
			{
				if(wt[i] > w)
				{
					V[i][w]=V[i-1][w];
				}
				else if(wt[i] < w || wt[i]==w)
				{
					V[i][w]=max(V[i-1][w],val[i] + V[i-1][w-wt[i]]);
				}
			}
		}
		
		i=n,w=W;
		
		while(i>0 && w>0)
		{
			if(V[i][w] != V[i-1][w])
			{
				printf("%d ",wt[i]);
				w=w-wt[i];
				i=i-1;
			}
			else
			i=i-1;
		}
		
		printf("\n");
		printf("max value:%d",V[n][W]);
	}
	
	return 0;
}


int max(int x,int y)
{
	if(x > y)
	return x;
	else
	return y;
}





