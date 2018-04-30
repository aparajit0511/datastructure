#include <stdio.h>

void partitionArray(long int *a,int start,int end,int *pivot);
void quicksort(long int *a,int start,int end);


int main()
{
   int t,g;
   
   scanf("%d",&t);
   
   for(g=0;g<t;g++)
   {
     long int n,m;
	 
	 scanf("%ld %ld",&n,&m);
	 
	 long int a[n],b[m];
	 
	 int i,j;
	 
	 for(j=0;j<n;j++)
	 scanf("%ld",&a[j]);//for boys
	 
	 int start=0,end=n-1;
	 quicksort( a,start,end);  
	 
	 for(i=0;i<m;i++)
	 scanf("%ld",&b[i]);// for girls
	 
	 start=0,end=m-1;
	 quicksort( b,start,end); 
	 
	 long int count;
	 
	//  for(j=0;j<n;j++)
//	   printf("\n %ld",a[j]);
	   
	  //  for(i=0;i<m;i++)
	// printf("\n %ld",b[i]);
	 
	 for(i=0;i<m;i++)
	 {
	 	count=n;
	 	for(j=0;j<n;j++)
	 	{
	 		if(b[i]>a[j])
	 		{
			 
	 		count--;
	 		
	 	/*	 if(count==0)
	 		 {
			  
		   printf("NO");
		   break;
	}
		   else
		   printf("YES"); 
	 	*/	
	 	}
		 }
		   } 
		   
		  	 if(count==0)
	 		 {
			  
		   printf("NO");
		   break;
	}
		   else
		   printf("YES"); 
   }
    return 0;
}

void quicksort(long int *a,int start,int end)
{
int pivot;

if(start<end)
{
	partitionArray(a,start,end,&pivot);
	 quicksort( a,start,pivot-1);
	  quicksort( a,pivot+1,end);  
	}	
}

void partitionArray(long int *a,int start,int end,int *pivot)
{
	
int left=start;
int right=end;

*pivot=left;

int temp;

while(1)
{
while(a[*pivot]<=a[right] && *pivot!=right)
{
	right--;
}

if(a[*pivot]==a[right])
break;
else if(a[*pivot]>a[right])
{
temp=a[*pivot];
a[*pivot]=a[right];
a[right]=temp;
*pivot=right;
	
}

while(a[*pivot]>=a[left] && *pivot!=left)
{
	left++;
}
	
	if(a[*pivot]==a[left])
	break;
	else if(a[*pivot]<a[left])
	{
		temp=a[*pivot];
		a[*pivot]=a[left];
		a[left]=temp;
		*pivot=left;
	}
	}	
}






