#include <stdio.h>
#include<string.h>
int main(void)
{
    char s[1000];
    gets(s);
    int i;
   
    
    
    int l=strlen(s);
    int count=0,max=0;
    
    for(i=0;i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'  && s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
        {
        	
             
		    count++;
            if(count>max)
           
            max=count;
            
           }
            else
            count=0;
        
}
	

    printf("%d",max);
    
    return 0;
}

