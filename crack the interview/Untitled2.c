#include<stdio.h>
#include<string.h>

void quicksort(char* str,int start,int end);
void partition(char* str,int start,int end,int* pivot);

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		char* str[100];
		
		scanf("%[^\n]s",*str);
		
		int l,start,end,i,found;
		
		l=strlen(str);
		
		start=0,end=l-1;
		
		quicksort(str,start,end);
		
		for(i=0;i<l-1;i++)
		{
			found=0;
			if(str[i]==str[i+1])
			{
			
			printf("String has duplicates:\n");
			break;
		}
			else
			found=1;
			
		}
		if(found==1)
		printf("String does not have duplicates:\n");
		
	}
	
	return 0;
}

void quicksort(char* str,int start,int end)
{
	int pivot;
	
	if(start < end)
	{
		partition(str,start,end,&pivot);
		quicksort(str,start,pivot-1);
		quicksort(str,pivot+1,end);
	}
}

void partition(char* str,int start,int end,int* pivot)
{
	int left=start;
	int right=end;
	
	char tmp;
	*pivot=left;
	
	while(1)
	{
	
	while(str[*pivot] < str[right] && *pivot!=right)
	{
		right--;
	}
	
	if(str[*pivot]==str[right])
	break;
	else if(str[*pivot] > str[right])
	{
		tmp=str[*pivot];
		str[*pivot]=str[right];
		str[right]=tmp;
	}
	
	while(str[*pivot] > str[left] && *pivot!=left)
	{
		left++;
	}
	
	if(str[*pivot]==str[left])
	break;
	else if(str[*pivot] < str[left])
	{
		tmp=str[*pivot];
		str[*pivot]=str[left];
		str[left]=tmp;
	}
}
}













