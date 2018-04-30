#include<stdio.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,i;
		
		scanf("%d",&n);
		
		int h[n];
		
		for(i=0;i<n;i++)
		scanf("%d",&h[i]);
		
		int left=0,right=n-1,ans=0,left_max=0,right_max=0;
		
		while(left < right)
		{
			if(h[left] < h[right])
			{
				if(h[left] >= left_max)
				left_max=h[left];
				else
				ans=ans+(left_max-h[left]);
				
				left++;
			}
			else if(h[left] >= h[right])
			{
				if(h[right] >= right_max)
				right_max=h[right];
				else
				ans=ans+(right_max-h[right]);
				
				right--;
			}
			
			//printf("go\n");
		}
		
		printf("%d\n",ans);
	}
	
	return 0;
}
