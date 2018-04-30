#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* left;
	struct node* right;
};

struct node* root=NULL;
int stack[100];
int top=-1;

struct node* insert(struct node* root,int x);
struct node* getnode(int x);
void printSpiral(struct node* root);
struct node* getnode(int x);
int height(struct node* root);
void level(struct node* root,int i);
void stack1(int data);
void pop();
void pop1();
void pop2();

int main()
{
	int n,i,x;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		
		root=insert(root,x);
	}
	
	printSpiral(root);
	
	return 0;
}

struct node* insert(struct node* root,int x)
{
	if(root==NULL)
	{
		root=getnode(x);
		
	}
	else if(x <= root->data)
	{
		root->left=insert(root->left,x);
		
	}
	else if(x > root->data)
	{
		root->right=insert(root->right,x);
	}
	
	return root;
}

struct node* getnode(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp->data=x;
	temp->left=NULL;
	temp->right=NULL;
	
	return temp;
}

void printSpiral(struct node* root)
{
	int h=height(root);
	int i;
	for(i=0;i<=h;i++)
	{
		level(root,i);
		if(i==0 || i==1)
		{
			pop();
			printf("\n");
		}
		if(i > 1 && i%2==0)
		{
			pop1();
			printf("\n");
		}
		else if(i > 1 && i%2==1)
		{
			pop2();
			printf("\n");
		}
	}
}

int height(struct node* root)
{
	if(root==NULL)
	return -1;
	else
	{
		int d1=height(root->left);
		int d2=height(root->right);
		
		if(d1 > d2)
		return d1+1;
		else
		return d2+1;
	}
}

void level(struct node* root,int i)
{
	if(root==NULL)
	{
		return ;
	}
	
	if(i==0)
	{
		stack1(root->data);
	}
	else if(i > 0)
	{
		level(root->left,i-1);
		level(root->right,i-1);
	}
}

void stack1(int data)
{
	top++;
	stack[top]=data;
}

void pop()
{
	int i;
	
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	
	top=-1;
}

void pop1()
{
	while(top!=-1)
	{
		printf("%d ",stack[top]);
		top--;
	}
	
	top=-1;
}

void pop2()
{
	int i;
	
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
	
	top=-1;
}






