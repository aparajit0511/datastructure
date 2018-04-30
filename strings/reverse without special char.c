#include<stdio.h>
#include<string.h>

int main()
{
	int t,x;
	
	scanf("%d",&t);
	
	for(x=0;x<t;x++)
	{
		char s[100];
		
		scanf("%s",&s);
		
		int l=strlen(s);
		
		int i,left=0,right=l-1;
		
		char temp;
		
		for(i=left;i<=right;i++){
			
			if(s[left]>=65 && s[left]<=122 && s[right]>=65 && s[right]<=122){
				
				temp=s[left];
				s[left]=s[right];
				s[right]=temp;
				
				left++;
				right--;
			}
			else if(s[left]<65){
				left++;
			}
			else if(s[right]<65){
				right--;
			}
		}
		
		printf("%s\n",s);

	}
	return 0;
}
