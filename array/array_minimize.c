#include <stdio.h>

//int function(int );
int main(void)
{
	// your code goes here
	int ans;
	int  marks[ ] = { 4,2,3,1 } ; 

	int i,j,temp,z;
	int pass=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i-1;j++)
		{
			if(marks[j]>marks[j+1])
			{
				temp=marks[j];
				marks[j]=marks[j+1];
				marks[j+1]=temp;
			
//pass++;
		//	printf("%d",pass);
			for(z=0;z<4;++z)
			{
//printf("%2d",marks[z]);
//printf("\n");
ans=function (&marks[z]);	
	for(int q=0;q<=4;q++)
//	printf("retun sum");
		printf("return sum= %d",ans);
		printf("\n");
			}
	//	printf("\n%d",marks[j]);
	}

//	printf("\n%1d\n",marks[i]);
}

	}
	for(i=0;i<4;i++)
		printf("%7d",marks[i]);
	
	

	
	return 0;
}

function(int *k)
{int  c=0 ; 
	int *h;
 int *n;
 int mul,sum=0; 
	while(c<3)
{
h=&k[c];
n=&k[c+1];
mul=*h**n;
sum=sum+mul;
//printf("\n%d",mul);
//printf("\n%d",sum);
c=c+2;

}
if(sum>9)
return sum;

}