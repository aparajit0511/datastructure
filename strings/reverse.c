#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node* next;
	int data;
};
struct node* head=NULL;


void insert(int x);
void show();
void reverse();

int main(){
	
	int t,z,x;
	scanf("%d",&t);
	
	for(x=0;x<t;x++){
		scanf("%d",&z);
		insert(z);
	}
	
	reverse();
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

void show(){
	
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	
	temp=head;
	
	while(temp!=NULL){
		
		printf("%d ",temp->data);
		
		temp=temp->next;
	}
}

void reverse(){
		struct node* temp=(struct node*)malloc(sizeof(struct node));
			struct node* current=(struct node*)malloc(sizeof(struct node));
				struct node* prev=(struct node*)malloc(sizeof(struct node));
				
				current=head;
				prev=NULL;
				
				while(current!=NULL){
					temp=current->next;
					current->next=prev;
					prev=current;
					current=temp;
				}
				head=prev;
}
