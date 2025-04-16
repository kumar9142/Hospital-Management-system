#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100000
int A[MAX_SIZE];
void Add_appointment();
void cancel_appointment();
void come_for_checkup();
void appointment_list();

struct hospital_management{
	char name[50];
	int age,id;
	char Gender[10];
	char address[50];
	long long int Ph_no;
	struct hospital_management *prev;
	struct hospital_management *next;
};
struct hospital_management *front=NULL, *rear=NULL;

typedef struct hospital_management node;

int main(){
	int ch;
	while(1){
		printf("********MENU BAR***********\n");
		printf("1.Add for appointment\n2.Cancel appointment\n3.Come for checkup\n4.Total no of appointments\n5.exit\n");
		printf("---------------------");
		printf("\nSelect option: ");
		scanf("%d",&ch);
		printf("\n");
		switch(ch){
			case 1: Add_appointment();
			break;
			case 2: cancel_appointment();
			break;
			case 3: come_for_checkup();
			break;
			case 4: appointment_list();
			break;
			case 5: return 0;
			default :
				printf("Invalid choice");
		}
	}
	return 0;
}

void  Add_appointment(){
struct hospital_management *temp,*temp1;
	temp=(struct hospital_management*)malloc(sizeof(struct hospital_management));
	printf("Please Enter all details of Patent.\n");
	printf("\nID: ");
	scanf("%d",&temp->id);
	printf("\nName: ");
	scanf(" %[^\n]",temp->name);
	printf("\nAge: ");
	scanf("%d",&temp->age);
	printf("\nGender: ");
	scanf(" %[^\n]",temp->Gender);
	printf("\nAddress: ");
	scanf(" %[^\n]",temp->address);
	printf("\nPh.No: ");
	scanf("%lld",&temp->Ph_no);
	temp->next=NULL;
	temp->prev=NULL;
	
	if(front==NULL && rear==NULL){
		front=rear=temp;
	}else{
		temp1=front;
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->prev=temp1;
		rear=temp;
	}	
	printf("Appointment Booked successfully\n\n");
}

void cancel_appointment(){
	node *temp, *temp1;
	int flag = 0;
	int id;
	
	printf("\nEnter patient id who wants to cancel appointment: ");
	scanf("%d", &id);

	temp = front;

	while(temp != NULL){
		if(id==temp->id){
			if(temp->prev == NULL){ 
				front = temp->next;
				if(front != NULL)
					front->prev = NULL;
			} else {
				temp->prev->next = temp->next;
				if(temp->next != NULL)
					temp->next->prev = temp->prev;
			}
			temp1 = temp->next;
			free(temp);
			flag = 1;
			temp = temp1;
			continue;
		}
		temp = temp->next;
	}

	if(flag == 1){
		printf(" Id=%d has cancelled their appointment\n", id);
	} else {
		printf("Name not found in the appointment list\n");
	}
}

void come_for_checkup(){
	node *temp;
	temp=front;
	if(temp==NULL){
		printf("Appointment list is empty.\n");
	}
	else{
		printf("patient has went for appointment\n");
		printf("Details of patient\nId: %d\nName: %s\nAge: %d\nGender: %s\nAddress: %s\n",temp->id,temp->name,temp->age,temp->Gender,temp->address);
		front=temp->next;
		if(front==NULL){
			rear=NULL;
		}else{
			front->prev=NULL;
		}
		free(temp);
	}
	
}
void appointment_list(){
	node *temp;
	temp=front;
	printf("Appointment Lists\n");
	while(temp!=NULL){
		printf("Id: %d\nName: %s\nAge: %d\nGender: %s\nAddress: %s\nPh.No: %lld\n",temp->id,temp->name,temp->age,temp->Gender,temp->address,temp->Ph_no);
		printf("\n");
		temp=temp->next;
	}
}





