#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

struct node
{
	int data;
	struct node* next;
	struct node* random;
};

struct node* head=NULL;

void insert(int x);
void rotate(int k);
void show();

int main()
{
	int t,z;
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,x,i,k;
		
		scanf("%d",&n);
		scanf("%d",&k);
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(x);
		}
		
		rotate(k);
		
		show();
		
		head=NULL;
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

void rotate(int k)
{
		struct node* alpha=(struct node*)malloc(sizeof(struct node));
		struct node* ptr;
		
		int count=0;
		
		alpha=head;
		
		while(alpha!=NULL)
		{
			if(count==k-1)
			{
				ptr=alpha->next;
				alpha->next=NULL;
				alpha=head;
				head=ptr;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				
				ptr->next=alpha;
				break;
			}
			else
			{
				count++;
				alpha=alpha->next;
			}
		}
}


void show()
{
	struct node* alpha=(struct node*)malloc(sizeof(struct node));
	
	alpha=head;
//	printf("Deserialise:");
	while(alpha!=NULL)
	{
		//memcpy(a+i,alpha,sizeof(int));
		printf("%d ",alpha->data);
		alpha=alpha->next;
		//i++;
	}
}








