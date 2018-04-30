#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

struct node
{
	int data;
	struct node* next;
	//struct node* random;
};
struct node* head=NULL;

void insert(int x);
void pairwiseSwap();
void show();

int main()
{
	int t,z;
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
	

		int n,x,y,m,i;
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(x);
		}
		
		//reverse();
		 pairwiseSwap();
		show();
	}
	
	
	
	return 0;
}

void insert(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	struct node* ptr=NULL;
	
	temp->data=x;
	
	if(head==NULL)
	{
		head=temp;
		temp->next=NULL;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=NULL;
	}
	
}


void pairwiseSwap()
{
	struct node* temp;
	struct node* ptr;
	struct node* alpha;
	
	ptr=head;
	temp=head;
	alpha=head->next;
	
	int i,count=2;
	
	while(alpha!=NULL)
	{
		if(count%2==0)
		{
			temp->next=alpha->next;
			alpha->next=temp;
			temp=alpha;
			alpha=ptr;
			alpha=alpha->next;
		}
		else
		alpha=alpha->next;
		
		count++;
	}
	
}


void show()
{
	struct node* alpha=(struct node*)malloc(sizeof(struct node));
	
	alpha=head;
	
	while(alpha!=NULL)
	{
		printf("%d ",alpha->data);
		alpha=alpha->next;
	}
}











