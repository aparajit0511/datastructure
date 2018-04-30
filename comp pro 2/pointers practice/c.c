#include <stdio.h>
#include<conio.h>

void foo(int n,int *pn);

int main()
{
	int n1,n2;
	 n1=n2=10;
	
	int pn2;
	
	pn2=&n2;
	
    foo(n1,pn2);
	
	printf("%d %d",n1,n2);
	
	
	return 0;
}

void foo(int n,int *pn)
{
	printf("go");
	n++;
	*pn++;
}
