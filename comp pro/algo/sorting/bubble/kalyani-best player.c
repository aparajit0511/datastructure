#include <stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
int t,i,n;

scanf("%d",&t); 

char **a=(char*)malloc(t * sizeof(char));;
long int q[t];

for(i=0;i<t;i++)
scanf("%s %ld",a[i],&q[i]);
/*
int j,temp,temp1;

for(i=0;i<t;i++)
{
	for(j=0;j<t-i-1;j++)
	{
		if(q[j]<q[j+1])
		{
			temp=q[j];
			temp1=a[j][0];
			q[j]=q[j+1];
			a[j][0]=a[j+1][0];
			q[j+1]=temp;
			a[j+1][0]=temp1;
		}
	}
}
*/
for(i=0;i<t;i++)   
printf("%s %ld \n",a[i],q[i]);
    return 0;
}

