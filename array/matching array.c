/*  Given two arrays of equal length, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.
Examples:
Input  : A[] = {1, 2, 5, 4, 0};
         B[] = {2, 4, 5, 0, 1}; 
Output : 1

Input  : A[] = {1, 2, 5};
         B[] = {2, 4, 15}; 
Output : 0


*/
#include <stdio.h>

int main(void) {
	
	int a[]={1, 2, 5, 4, 0};
	int b[]={2, 4, 5, 0, 1};
	
	int i,temp1,temp2;

		for(int c=0;c<5;c++)
		{
			for(int d=0;d<5-c-1;d++)
			{
				if(a[d]>a[d+1])
				{
					temp1=a[d];
					a[d]=a[d+1];
					a[d+1]=temp1;
				}
			}
		}
		for(i=0;i<5;i++)
		printf("%d",a[i]);
	
		for(int e=0;e<5;e++)
		{
			for(int f=0;f<5-e-1;f++)
			{
				if(b[f]>b[f+1])
				{
					temp2=b[f];
					b[f]=b[f+1];
					b[f+1]=temp2;
				}
			}
		}
	
for(i=0;i<5;i++)
{
	
	if(a[i]==b[i])
	printf("\n1");
	else
	printf("\n0");
}
	return 0;
}

