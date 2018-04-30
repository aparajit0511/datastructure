#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;
void insert(int x);
void show();
void removeduplicates();

int main(){
	
	int n,z,t;
	
	scanf("%d",&t);
	
	for(z=0;z<t;z++){
		
		scanf("%d",&n);
		
		insert(n);
	}
	
	 removeduplicates();
	show();
	
	return 0;
}

void insert(int x){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=x;
	
	if(head==NULL){
		
		head=temp;
		temp->next=NULL;
	}
	else{
		
		ptr=head;
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		//head=temp;
		ptr->next=temp;
		temp->next=NULL;
	}
}

void show(){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp=head;
	
	while(temp!=NULL){
		
		printf("%d ",temp->data);
		
		temp=temp->next;
	}
}

void removeduplicates(){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* put=(struct node*)malloc(sizeof(struct node));
	struct node* swap=(struct node*)malloc(sizeof(struct node));
	
	ptr=head->next;
	temp=head;
	
	while(temp->next!=NULL){
		swap=temp;
		put=ptr->next;
		ptr->next=temp;
		temp->next=put;
		swap=ptr;
		//head=swap;
		printf("%d\n ",ptr->data);
		temp=put;
	
	}
}



