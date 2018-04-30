#include <stdio.h>

char main()
{
	int n=10;
	
	printf("%u \n",n);//vslur of n etiher use %u or %d,both provide same answer
	printf("%u\n",&n);//address of n
	
	printf("%d",*(&n));//use of star bcoz pointer is not declared
	return 0;
}
