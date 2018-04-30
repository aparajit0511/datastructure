#include<stdio.h>

int sum,find;

int divide(int a[],int start,int end,int i);
int conquer(int a[],int start,int end,int mid,int i);

int main()
{
  
  int t,z;
  
  scanf("%d",&t);
  
  for(z=0;z<t;z++)
  {
    
    int n,i,start,end,count=0,sum=0;
    
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    scanf("%d",&find);
    
    for(i=0;i<n;i++)
    {
      start=i+1,end=n-1;
      
      count=divide(a,start,end,i);
    }
    
    printf("%d\n",count);
    
  }
  return 0;
}

int divide(int a[],int start,int end,int i)
{ 
  int count,mid;
  
  if(start < end)
  {
    mid=(start+end)/2;
    
    count=divide(a,start,mid,i);
    count=divide(a,mid+1,end,i);
    
    count=conquer(a,start,end,mid,i);
  }
  return count;
}

int conquer(int a[],int start,int end,int mid,int i)
{
  int count;
  
  int k;
  for(k=start;k<=end;k++)
  {
    sum=a[i]+a[k];
    
    if(sum==find)
    {
      count++;
    }
    else
    {
      sum=sum-a[k];
    }
  }
  
  return count;
}







