#include<stdio.h>

int main(void)
{
	int t,n,i,a,j,b,c;
	
	int h[10000];
	
	scanf("%d",&t);
	
	if(t>=0 && t<=50)
	{
		int count=0,winner=0,max=0;
		for(a=0;a<t;a++)
		{
			scanf("%d",&n);
			if(n>=1 && n<=10000)
			{
				for(i=0;i<n;i++)
				scanf("%d",&h[i]);
				
				for(i=0;i<n;i++)
				{
					int left=0;
					j=i;
					while(h[j]>h[j-1] && j!=0)
					{
						j--;
						left++;
					}
				//	if(h[j]<h[j-1])
				//	left++;
					j=i;
					int right=0;
					while(h[j]>h[j+1] && j!=n)
					{
						j++;
						right++;
					}
				//	if(h[j]<=h[j+1])
				//	right++;
					
					int sight=(left+right)*i;
				//	count++;
					
					if(sight>max)
					{
						max=sight;
						winner=i;
					}
				/*	else if(sight==max)
					{
						for(b=0;b<count;b++)
						{
							for(c=1;c<count;c++)
							{
								if(h[b]==h[c])
								if(b<c)
								
							winner=b;	
								
							
								else
								
								winner=c;
							
							}
						}
					}
					
				*/}
				printf("%d",winner+1);
			}
		}
	}
	
	return 0;
}
