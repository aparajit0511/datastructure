#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
	struct node* random;
};

struct node* head=NULL;

int main()
{
	int t,z;
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,x,i;
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(x);
		}
		
		clone();
	}
	
	show();
	
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

void clone()
{	
	struct node* original=NULL;
	
	original=head;
	
	while(original!=NULL)
	{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		
		original->random=temp;
		temp->data=original->data;
		temp->random=original->next;
		
		
		original=original->next;
	}
}

void show()
{
	struct node* alpha=(struct node*)malloc(sizeof(struct node));
	
	alpha=head->random;
	
	while(alpha!=NULL)
	{
		
	}
}











