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

void insert(int x);
void reverse();
void show();
void recurse(struct node* current,struct node* frwd,struct node* ptr);

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
		
		reverse();
		
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

void reverse()
{
	struct node* current=head;
	
	struct node* frwd;
	
	struct node* ptr=NULL;
	
	recurse(current,frwd,ptr);
	/*
	while(current!=NULL)
	{
		frwd=current->next;
		current->next=ptr;
		ptr=current;
		current=frwd;
	}
	*/
	head=ptr;
	
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

void recurse(struct node* current,struct node* frwd,struct node* ptr)
{
	if(current==NULL)
	return;
	else
	{
		frwd=current->next;
		current->next=ptr;
		ptr=current;
		current=frwd;
		recurse(current,frwd,ptr);
		
	}
}








