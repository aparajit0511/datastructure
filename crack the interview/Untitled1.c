#include<stdio.h>

void merge(int a[],int b[],int mark,int alpha);
int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int m,n,i,mark;
		
		scanf("%d",&m);
		
		scanf("%d",&n);
		
		int a[m],b[n];
		
			printf("input for m:\n");
		for(i=0;i<m;i++)
		scanf("%d",&a[i]);
		
		printf("input for n:\n");
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		
		for(i=0;i<m;i++)
		{
			if(a[i]==-1)
			{
				 mark=i-1;
				break;
			}
		}
		
		merge(a,b,mark,n-1);
		
		printf("\n");
		printf("output: ");
		for(i=0;i<m;i++)
		printf("%d ",a[i]);
	}
	
	return 0;
}

void merge(int a[],int b[],int mark,int alpha)
{
	
	int index=mark+alpha+1;
	int i=mark;
	int j=alpha;
	
	while(j>=0)
	{
		if(i>=0 && a[i]>=b[j])
		{
			a[index]=a[i];
			i--;
		}
		else
		{
			a[index]=b[j];
			j--;
		}
		index--;
	}
	/*
	index=mark+alpha+1;
	
		printf("output11: ");
		for(i=0;i<=index;i++)
		printf("%d ",a[i]);
		*/
		
}













