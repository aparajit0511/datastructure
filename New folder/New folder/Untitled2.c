#include<stdio.h>
#include<math.h>

int main()
{
	int t,n,i,z;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		scanf("%d",&n);
		
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		int x=a[0];
		int y=a[1];
		
		int h=gcd(x,y);
		
		for(i=2;i<n;i++)
		{
			h=gcd(a[i],h);
		}
		
		long int pro=1;
		
		for(i=0;i<n;i++)
		{
			pro=pro*a[i];
		}
		
		long int ans=pow(pro,h);
		
		ans=ans%(1000000000+7);
		
		printf("%ld\n",ans);
	}
	
	return 0;
}


int gcd(int x,int y)
{
	int rem,den,num;
	
	if(x > y)
	{
		num=x;
		den=y;
	}
	else if(x < y)
	{
		num=y;
		den=x;
	}
	else if(x==y)
	{
		num=x;
		den=y;
	}
	
	rem=num%den;
	
	while(rem!=0)
	{
		num=den;
		den=rem;
		
		rem=num%den;
	}
	
	return den;
	
}












