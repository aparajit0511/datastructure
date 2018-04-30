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

int main()
{
	int t,z;
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		struct node* head1=NULL;
struct node* head2=NULL;

		int n,x,y,m,i;
		
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(head1,x);
		}
		
		scanf("%d",&m);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(head2,y);
		}
		
		merge(head1,head2);
		//reverse();
		
		show();
	}
	
	
	
	return 0;
}

void insert(struct node* head,int x)
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


void merge(Struct node* head1,struct node* head2)
{
	
}













