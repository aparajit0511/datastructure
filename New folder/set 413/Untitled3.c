#include<stdio.h>
#include<string.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		char a[9],b[3][3];
		
		int i,j,found=0,chow=0,chop=0,count_x=0,count_o=0;
		
	//	for(i=0;i<9;i++)
		scanf("%s",&a);
	//	gets(a);
				
		int start=0,end=8,mid;
		
		for(i=0;i<9;i++)
		{
			mid=(start+end)/2;
			
			if(a[mid]=='X')
			count_x++;
			else
			{
				if(a[mid]<'X')
				start=mid+1;
				else
				end=mid-1;
			}
		}
		start=0,end=8;
		
		for(i=0;i<9;i++)
		{
			mid=(start+end)/2;
			
			if(a[mid]=='O')
			count_o++;
			else
			{
				if(a[mid]<'O')
				start=mid+1;
				else
				end=mid-1;
			}
		}
		
		if(count_x < 4 && count_o >5)
		found=1;
		else if(count_x > 5 && count_o <4)
		found=1;
		else
		{
			int c=0;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					b[i][j]=a[c];
					c++;
				}
			}
			
			if(b[0][0]=='X' && b[0][1]=='X' && b[0][2]=='X' || b[0][0]=='X' && b[1][0]=='X' && b[2][0]=='X' || b[0][0]=='X' && b[1][1]=='X' && b[2][2]=='X' 
			|| b[2][0]=='X' && b[2][1]=='X' && b[2][2]=='X' || b[0][2]=='X' && b[1][2]=='X' && b[2][2]=='X' || b[0][2]=='X' && b[1][1]=='X' && b[2][0]=='X'
			|| b[0][1]=='X' && b[1][1]=='X' && b[2][1]=='X' || b[1][0]=='X' && b[1][1]=='X' && b[1][2]=='X')
			{
				chow=1;
			}
			
				if(b[0][0]=='O' && b[0][1]=='O' && b[0][2]=='O' || b[0][0]=='O' && b[1][0]=='O' && b[2][0]=='O' || b[0][0]=='O' && b[1][1]=='O' && b[2][2]=='O' 
			|| b[2][0]=='O' && b[2][1]=='O' && b[2][2]=='O' || b[0][2]=='O' && b[1][2]=='O' && b[2][2]=='O' || b[0][2]=='O' && b[1][1]=='O' && b[2][0]=='O'
			|| b[0][1]=='O' && b[1][1]=='O' && b[2][1]=='O' || b[1][0]=='O' && b[1][1]=='O' && b[1][2]=='O')
			{
				chop=1;
			}
			
			if(chow==1 && chop==1)
			found=1;
			
			
		}
		
		if(found==1)
		printf("Invalid\n");
		else
		printf("Valid\n");
	}
	
	
	return 0;
} 












