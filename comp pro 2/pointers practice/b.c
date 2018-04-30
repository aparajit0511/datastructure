#include <stdio.h>

int main()
{
	int n=10;
	
	int *pn;
	pn=&n;
	
	printf("%d \n",n);
	printf("%d  ",&n);//address of n
		printf("%d \n",pn);//address of n
		
		printf(" p=%d \n",&pn);//address of pointer varaible pn in memory
		
		printf("%d \n",*pn);//value of n=10,as pointer is pointing to address of n containing 10
		
	//	printf("%d \n",*(*pn);throws error
	
	printf("%d \n",*(&pn));
		printf("%d \n",*(&n));
	return 0;
}
