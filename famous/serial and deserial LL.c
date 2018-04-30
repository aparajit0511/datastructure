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
void printserial(int a[],int n);
void serialise(int a[],int n);
void deserialise(int a[],int n);
//void reverse();
void show();
//void recurse(struct node* current,struct node* frwd,struct node* ptr);

int main()
{
	int t,z;
	scanf("%d",&t);
	
	for(z=0;z<t;z++)
	{
		int n,x,i;
		
		scanf("%d",&n);
		int a[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			
			insert(x);
		}
		
		serialise(a,n);
		
		printserial(a,n);
		
		printf("\n");
		head=NULL;
		
		deserialise(a,n);
		
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

void serialise(int a[],int n)
{
//	int *k=(int*)malloc(sizeof(int)* n);
	
	int i=0;
	
	struct node* alpha=(struct node*)malloc(sizeof(struct node));
	
	alpha=head;
	
	while(alpha!=NULL)
	{
		memcpy(a+i,alpha,sizeof(int));
		alpha=alpha->next;
		i++;
	}
}

void printserial(int a[],int n)
{
	int i;
	printf("Serialise:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void deserialise(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		insert(a[i]);
	}
}

void show()
{
	struct node* alpha=(struct node*)malloc(sizeof(struct node));
	
	alpha=head;
	printf("Deserialise:");
	while(alpha!=NULL)
	{
		//memcpy(a+i,alpha,sizeof(int));
		printf("%d ",alpha->data);
		alpha=alpha->next;
		//i++;
	}
}







