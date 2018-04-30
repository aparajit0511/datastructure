/*A and B are good friend and programmers. They are always in a healthy competition with each other. They decide to judge the best among them by competing. They do so by comparing their three skills as per their values. Please help them doing so as they are busy.
Set for A are like [a1, a2, a3]
Set for B are like [b1, b2, b3]
Compare ith skill of A with ith skill of B
if a[i] > b[i] , A's score increases by 1
if a[i] < b[i] , B's score increases by 1
*/

#include <stdio.h>

int main(void) 
{
	// your code goes here
	
	int a[3];
	int b[3];
	int t;
	scanf("%d",&t);
	
	for(int j=0;j<2;j++)
	{
	
	for(int i=0;i<3;i++)
	scanf("%d",&a[i]);
	
	for(int i=0;i<3;i++)
	scanf("%d",&b[i]);
	int c=0,d=0;
	for(int i=0;i<3;i++)
	{
		if(a[i]>b[i])
		{
			//printf("A scores=%d",c);
			c++;
		}
		else
		{
			//printf("B scores=%d",d);
			d++;
		}
	}
	
	printf("final A=%d",c);
		printf("final B=%d",d);
		printf("\n");
	}
	return 0;
}
