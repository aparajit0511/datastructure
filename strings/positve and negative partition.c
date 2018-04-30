#include<stdio.h>

int main(){
	
	int n,i,start=0,temp;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		if(a[start]>=0 && a[i]<=0 || a[start]<=0 && a[i]>=0){
			temp=a[i];
			a[i]=a[start];
			a[start]=temp;
			start++;
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
