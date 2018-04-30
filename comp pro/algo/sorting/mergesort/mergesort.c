#include <stdio.h>

void divide(int a[],int start,int end);
void conquer(int a[],int start,int mid,int end);

int main()
{
   int n,i;
   
   scanf("%d",&n);
   
   int a[n];
   
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   int start=0,end=n-1;
   
   divide(a,start,end);
   
   for(i=0;i<n;i++)
   printf(" %d ",a[i]);
   
    return 0;
}


void divide(int a[],int start,int end)
{
	int mid;
	
	if(start<end)
	{
		mid=(start + end)/2;
		
		divide(a,start,mid);
		divide(a,mid+1,end);
		conquer(a,start,mid,end);
	}
}

void conquer(int a[],int start,int mid,int end)
{

int p=start,q=mid+1,k=0,i;

int Arr[end-start+1];

for(i=start;i<=end;i++)
{
	if(p > mid)
	Arr[k++]=a[q++];
	
	else if(q > end)
	Arr[k++]=a[p++];
	
	else if(a[p] < a[q])
	Arr[k++]=a[p++];
	
	else
	Arr[k++]=a[q++];
	
	}
	
	int j;
	
	for(j=0;j<k;j++)
	a[start++]=Arr[j];
		
}

