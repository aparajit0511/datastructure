#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;

void insert(int x);
void delete();
void show();

int main(){
	
	int t,z,x;
	scanf("%d",&t);
	
	for(x=0;x<t;x++){
		scanf("%d",&z);
		insert(z);
	}
	
	delete();
	
	show();
	return 0;
}

void insert(int x){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	temp->data=x;
	
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

void delete(){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* swap=(struct node*)malloc(sizeof(struct node));
	
	
	temp=head->next;
	
	if(head->next!=NULL){
		if(head->data < temp->data){
			head=temp;
			swap=ptr=temp;
			temp=ptr->next;
		}
		else{
			swap=head->next;
			ptr=swap;
			temp=ptr->next;
		}
	}
	
	while(ptr->next!=NULL){
		if(ptr->data < temp->data){
			
			swap->next=temp;
			swap=ptr=temp;
			temp=ptr->next;
		}
		else{
			ptr=ptr->next;
			temp=ptr->next;
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



