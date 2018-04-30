#include<stdio.h>
#include<string.h>

void quicksort(char* a,int start,int end);
void PartitionArray(char* a,int start,int end,int* pivot);

int main()
{
	char a[100];
	
	int i,l;
	
	scanf("%[^\n]s",a);
	//scanf("%s ",&a);
	
	l=strlen(a);
	
	int start=0,end=l-1;
	
	quicksort(a,start,end);
	
//	printf("go-\n");
	//for(i=0;i<l;i++)
	printf("output: ");
	printf("%s",a);
//puts(a);	
	return 0;
}

void quicksort(char* a,int start,int end)
{
	int pivot;
	
	if(start < end)
	{
	//	printf("go\n");
		PartitionArray( a,start,end,&pivot);
		quicksort(a,start,pivot-1);
		quicksort(a,pivot+1,end);
		
	}
	
}

void PartitionArray(char* a,int start,int end,int* pivot)
{
	 int left=start;
	int right=end;
	
	*pivot=left;
	
	char tmp;
	
	while(1)
	{
		while(a[*pivot]<=a[right] && *pivot!=right)
		{
			//	printf("go1\n");
			right--;
		  }  
		  
		  if(a[*pivot]==a[right])
		  {
		  	//	printf("go2\n");
		  	break;
		  }
		  else if(a[*pivot] > a[right])
		  {
		  	//	printf("go3\n");
		  	tmp=a[*pivot];
		  	a[*pivot]=a[right];
		  	a[right]=tmp;
		  	*pivot=right;
		  }
		  
		  while(a[*pivot]>=a[left] && *pivot!=left)
		  {
		  	//	printf("go4\n");
		  	left++;
		  }
		  if(a[*pivot]==a[left])
		  { //	printf("go5\n");
		  
		  break;
	}
		  else if(a[*pivot]<a[left])
		  {
		  //	printf("go6\n");
		  	tmp=a[*pivot];
		  	a[*pivot]=a[left];
		  	a[left]=tmp;
		  	*pivot=left;
		  }
		  
	}
	
}



