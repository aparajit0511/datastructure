/*
King is getting ready for a war. He know his strengths and weeknesses so he is taking required number of soldier's with him.
 King can only defeat the strongest and the weakest person from enemy's army, 
and one soldier can only kill one enemy. Your task is to calculate that how many soldiers are required by king to take with him for the war.
*/
#include <stdio.h>

int main(void) {
	// your code goes here
	
	int arr[10];
	int t;
	int n;
	int count=0;
	scanf("%d",&t);
	for(int j=0;j<t;j++)
	{
	
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n-2;i++)
	{
		arr[i];
		count++;
		
	}
	
	printf("soldiers required=%d\n",count);
	}
	return 0;
}
