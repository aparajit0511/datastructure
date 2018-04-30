/*Input : A[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5

Input : A[] = {1, 3, 5, 5, 5, 5 ,7, 123 ,125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6
*/

#include<stdio.h>

int main(void)
{
	int n;int k;
//	int arr[100]={1, 3, 5, 5, 5, 5 ,7, 123 ,125 };
	int arr[9];
	int first,last,count=0;
	int i;
	
	
	
		scanf("%d",&n);
	scanf("%d",&k);
	
	for( i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for( i=0;i<n;i++)
	{
		if(k==arr[i])
		{
			count++;
			if(count==1)
			{
				first=i;
				last=i;
				
				printf("%d\n",first);
				
			}
			
			else
			
				last=i;
			
			
			
				}
	}
	printf("%d\n",last);
	return 0;
}
