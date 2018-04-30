#include <stdio.h>
#include<string.h>
int main()
{
  int t,a;
  
  scanf("%d",&t);
  for(a=0;a<t;a++)
  {
  	
  	long int n;//,temp,count=0;
  	
  	scanf("%ld",&n);
  	
  	char s[1000000];
  	int i;
  	sprintf(s,"%ld",n);
  	if(n%21==0)
  	{
	  
  	printf("The streak is broken!\n");
  	break;
  }
  /*	temp=n;
  	while(temp!=0)
  	{
  		s[count]=temp/10;
  		count++;
	  }*/
  	int flag=0;
  	for(i=0;i<strlen(s);i++)
  	{
  		
  		if(s[i]=='2' && s[i+1]=='1')
  			{flag=1;
			  printf("The streak is broken!\n");
  			break;
  	}
	  }
	  if(flag==0)
  			printf("The streak lives still in our heart!\n");
  }
    return 0;
}

