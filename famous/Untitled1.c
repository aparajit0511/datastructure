#include<stdio.h>
#include<string.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		char str[10];
		scanf("%s",str);
		
		int l,i;
		int res=0,found;
		l=strlen(str);
		
		//printf("go\n");
		for(i=0;i<l;i++)
		{
			//printf("i:%d\n",i);
		found=0;
			if(str[i]>= 48 && str[i]<=57)
			{
				res=res*10+str[i]-'0';
			}
			else
			{
				found=1;
				break;
			}
			
		}
			if(found==0)
			printf("%d\n",res);
			else
			printf("-1\n");
			
	}
	
	return 0;
}

/*


#include<stdio.h>
#include<string.h>

int main()
{
	int t,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		char str[10];
		//gets(str);
		
		scanf("%s",str);
		
		int l,i;
		int res=0,found;
		l=strlen(str);
		
	//	printf("go\n");
		for(i=0;i<l;i++)
		{
			//printf("i:%d\n",i);
		found=0;
		
			if(str[i]>= 48 && str[i]<=57)
			{
				res=res*10+str[i]-'0';
			}
			else
			{
				found=1;
				break;
			}
			
		}
		
		if(str[0]=='-' || str[0]=='+')
		{
		  found=2;
		  res=0;
		  for(i=1;i<l;i++)
		  {
		    	if(str[i]>= 48 && str[i]<=57)
			{
				res=res*10+str[i]-'0';
			}
			else
			{
				found=1;
				break;
			}
		  }
		  if(found==2 && str[0]=='-')
		  printf("%d\n",res*-1);
		  else if(found==2 && str[0]=='+')
		  printf("%d\n",res);
		  
		}
			if(found==0)
			printf("%d\n",res);
			else if(found==1)
			printf("-1\n");
			
	}
	
	return 0;
}



*/




