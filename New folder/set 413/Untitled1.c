#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* next;
};

struct node* head1=NULL;
struct node* head2=NULL;
struct node* head3=NULL;
struct node* head4=NULL;

void insert1(int x);
void insert2(int y);
void insert3(int z);
void addition();
void list4(int sum);
void show();

int main()
{
	int i,n,m,p,x,y,z;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		insert1(x);
	}
	
	scanf("%d",&m);
	
		for(i=0;i<m;i++)
	{
		scanf("%d",&y);
		insert2(y);
	}
	
		scanf("%d",&p);
	
		for(i=0;i<p;i++)
	{
		scanf("%d",&z);
		insert3(z);
	}
	
	addition();
	
	show();
	
	
	return 0;
}


void insert1(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=x;
	
	printf("go1\n");
	
	if(head1==NULL)
	{
		head1=temp;
		temp->next=NULL;
	}
	else
	{
		ptr=head1;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		
		ptr->next=temp;
		temp->next=NULL;
	}
	
}

void insert2(int y)
{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=y;
	
	printf("go2\n");
	if(head2==NULL)
	{
		head2=temp;
		temp->next=NULL;
	}
	else
	{
		ptr=head2;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		
		ptr->next=temp;
		temp->next=NULL;
	}
}


void insert3(int z)
{
		struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=z;
	
	printf("go3\n");
	
	if(head3==NULL)
	{
		head3=temp;
		temp->next=NULL;
	}
	else
	{
		ptr=head3;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		
		ptr->next=temp;
		temp->next=NULL;
	}
}


void addition()
{
	struct node* ptr1=(struct node*)malloc(sizeof(struct node));
	struct node* ptr2=(struct node*)malloc(sizeof(struct node));
	struct node* ptr3=(struct node*)malloc(sizeof(struct node));
	
	ptr1=head1;
	ptr2=head2;
	ptr3=head3;
	
	while(1)
	{
		printf("&&\n");
		 if(ptr1==NULL && ptr2==NULL && ptr3==NULL)
		break;
		
		//if(ptr1!=NULL || ptr2!=NULL || ptr3!=NULL)
	
		else
			{
			int a=0,b=0,c=0;
			if(ptr1!=NULL)
			{
			
		      a=ptr1->data;
		      ptr1=ptr1->next;
		}
		      if(ptr2!=NULL)
		      {
			  
		      b=ptr2->data;
		      ptr2=ptr2->next;
		  }
		      if(ptr3!=NULL)
		      {
			  
		      c=ptr3->data;
		      ptr3=ptr3->next;
	}
			int sum=a+b+c;
				printf("gogo\n");
			int carry=sum/10;
			sum=sum%10;
			
			list4(sum);
			
			if(ptr1!=NULL)
			{
				ptr1->data=ptr1->data+carry;
			}
			else if(ptr2!=NULL)
			{
				ptr2->data=ptr2->data+carry;
			}
			else if(ptr3!=NULL)
			{
				ptr3->data=ptr3->data+carry;
			}
			else
			{
				list4(carry);
			}
		}
	}
}

void list4(int sum)
{
	printf("too\n");
		struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=sum;
	
	if(head4==NULL)
	{
		head4=temp;
		temp->next=NULL;
	}
	else
	{
		ptr=head4;
		
		//ptr->next=temp;
		temp->next=ptr;
		head4=temp;
	}
}

void show()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp=head4;
	
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}




