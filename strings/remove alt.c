#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node* next;
	int data;
};
struct node* head=NULL;

void insert(int x);
void show();
void removealt(struct node* dead);

int main(){
	
	int t,z,x;
	scanf("%d",&t);
	
	for(x=0;x<t;x++){
		scanf("%d",&z);
		insert(z);
	}
	struct node* temp=head;
	removealt(temp);
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
//
//void removealt(){
//	struct node* temp=(struct node*)malloc(sizeof(struct node));
//	struct node* ptr=(struct node*)malloc(sizeof(struct node));
//	struct node* swap=(struct node*)malloc(sizeof(struct node));
//	
//	temp=head;
//	while(temp->next!=NULL){
//	ptr=temp->next;
//		swap=ptr->next;
//
//temp->next=swap;
//temp=swap;
//if(temp==NULL)
//break;
//	}
//	printf("go\n");
//}

void show(){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp=head;
	
	while(temp!=NULL){
		
		printf("%d ",temp->data);
		
		temp=temp->next;
	}
}

void removealt(struct node* dead){
		struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* swap=(struct node*)malloc(sizeof(struct node));
	
	temp=dead;
	
	if(temp->next==NULL)
	return;
    
	
	ptr=temp->next;
		swap=ptr->next;

temp->next=swap;
temp=swap;

if(temp==NULL)
	return;
removealt(temp);
}
