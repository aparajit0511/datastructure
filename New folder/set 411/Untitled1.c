#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* left;
	struct node* right;
};

struct node* root=NULL;
int sum;

struct node* insert(struct node* root,int x);
struct node* getnode(int x);
int height(struct node* root);
void level(struct node* root,int i);
void sum1(struct node* root);

int main()
{
	int n,z,i,x;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		root=insert(root,x);
	}
	
	int h=height(root);
	
	printf("height:%d\n",h);
	/*
	for(i=0;i<=h;i++)
	{
		sum=0;
		level(root,i);
		printf("%d\n",sum);
	}
	*/
	sum=0;
	sum1(root);
	
	return 0;
}

struct node* insert(struct node* root,int x)
{
	if(root==NULL)
	{
		root=getnode(x);
	}
	else
	{
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		
		struct node* parent=NULL;
		
		ptr=root;
		while(ptr!=NULL)
		{
		
		if(x <= ptr->data)
		{
			parent=ptr;
			ptr=ptr->left;
		}
		else
		{
			parent=ptr;
			ptr=ptr->right;
		}
	}
		
		if(x <= parent->data)
		parent->left=getnode(x);
		else
		parent->right=getnode(x);
	}
	
	return root;
}

struct node* getnode(int x)
{
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		
		ptr->data=x;
		ptr->left=NULL;
		ptr->right=NULL;
		
		return ptr;
}

int height(struct node* root)
{
	if(root==NULL)
	{
		return -1;
	}
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
/*
void level(struct node* root,int i)
{
	if(root==NULL)
	return ;
	
	if(i==0)
	{
		printf("%d ",root->data);
		sum=sum+root->data;
	}
	else if(i > 0)
	{
		level(root->left,i-1);
		sum=sum-root->data;
		level(root->right,i-1);
	}
}


*/

void sum1(struct node* root)
{
	if(root==NULL)
	return ;
	else
	{
		sum=sum+root->data;
		sum1(root->left);
		sum1(root->right);
		//printf("sum:%d\n",sum);-
	
		
		if(root->left==NULL && root->right==NULL)
		{
			int mark;
			mark=sum;
			printf("mark:%d\n",mark);
		}
		
			sum=sum-root->data;
		
	}
}









