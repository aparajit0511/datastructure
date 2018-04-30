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
	
	temp=head->next;
	ptr=head;
	int x=head->data;
	
	while(temp!=NULL){
		if(x==temp->data){
			temp=temp->next;
			ptr->next=temp;
		
		}
		else{
			x=temp->data;
			ptr=temp;
		}
	}
}



