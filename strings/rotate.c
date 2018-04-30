#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void insert(int z);
void rotate(int k);
void show();

int main(){
	int t,z,x,k,n,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
	
	scanf("%d",&t);
	for(x=0;x<t;x++){
		scanf("%d",&z);
		insert(z);
	}
	
	scanf("%d",&k);
	
	rotate(k);
	
	show();
	printf("\n");
	head=NULL;
}
	return 0;
}

void insert(int z){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=z;
	if(head==NULL){
		head=temp;
	}
	else{
		ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
	temp->next=NULL;
}

void rotate(int k){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	int count=1;
	ptr=head;
	
	while(ptr->next!=NULL){
		ptr=ptr->next;
		count++;
		
		if(count==k){
			temp=ptr->next;
			ptr->next=NULL;
			ptr=temp;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=head;
			head=ptr;
			break;
		}
	}
}

void show(){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr=head;
	
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}
