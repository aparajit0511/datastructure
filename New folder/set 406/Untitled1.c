#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* next;
};

struct node* head=NULL;
struct node* head1=NULL;

void insert(int x);
void rearrange();
void show();
struct node* reverse(struct node* head2);

int count=0;
int main()
{
	int n,x,i,z;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		insert(x);
	}
	
	rearrange();
	
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
		
		head=temp;
		temp->next=ptr;
	}
	
	count++;
}

void rearrange()
{
	struct node* ptr1=(struct node*)malloc(sizeof(struct node));
	struct node* ptr2=(struct node*)malloc(sizeof(struct node));
	struct node* frwd=NULL;
	struct node* temp2=(struct node*)malloc(sizeof(struct node));
	struct node* temp1=(struct node*)malloc(sizeof(struct node));
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	count=count/2;
	
	ptr1=head->next;
	frwd=head;
	ptr2=head;
	
	int j=0;
	
	while(j<count)
	{
		ptr1=ptr1->next;
		frwd=frwd->next;
		
		j++;
	}
	frwd->next=NULL;
	ptr1=reverse(ptr1);
	count=0;
	while(ptr2!=NULL && ptr1!=NULL)
	{
		printf("go\n");
		count++;
		if(head1==NULL)
		{
			temp2->data=ptr2->data;
			head1=temp2;
			ptr2=ptr2->next;
			temp2->next=NULL;
		}
		else
		{
			temp=head1;
			
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			
			if(count % 2==0)
			{
				temp1->data=ptr1->data;
				
				temp->next=temp1;
				ptr1=ptr1->next;
				temp1=temp1->next;
			}
			else
			{
				temp2->data=ptr2->data;
			temp->next=temp2;
			ptr2=ptr2->next;
			temp2->next=NULL;
			}
		}
	}
	if(ptr2!=NULL && ptr1==NULL)
	{
	
	temp=temp->next;
	temp->next=ptr2;
}
}

void show()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp=head;
	
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
}


struct node* reverse(struct node* head2)
{
	struct node* frwd=NULL;
	struct node* current=head2;
	struct node* ptr=NULL;
	
	while(current!=NULL)
	{
		frwd=current->next;
		current->next=ptr;
		ptr=current;
		current=frwd;
	}
	
	head2=ptr;
	
	return head2;
}












