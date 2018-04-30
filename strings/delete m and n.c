#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void insert(int z);
void delete(int m,int n);
void show();

int main(){
	int t,z,x,k,m,n,i;
	
	scanf("%d",&k);
	for(i=0;i<k;i++){
		
	
	scanf("%d",&t);
	for(x=0;x<t;x++){
		scanf("%d",&z);
		insert(z);
	}
	scanf("%d",&m);
	scanf("%d",&n);
	
	delete(m,n);
	
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


void show(){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	
	ptr=head;
	
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}


void delete(int m,int n){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* p=(struct node*)malloc(sizeof(struct node));
	
	int count=1,count1;
	ptr=head;
	while(ptr->next!=NULL){
//		printf("go\n");
		if(count==m){
			temp=ptr->next;
			count1=1;
			while(count1<=n){
//				p=temp->next;
//printf("go1 go\n");
				ptr->next=temp->next;
				count1++;
				if(ptr->next==NULL)
				break;
				temp=ptr->next;
			}
			ptr=temp;
			count=1;
		}
		else{
			ptr=ptr->next;
			count++;
		}
		if(ptr==NULL)
		break;
	}
}




