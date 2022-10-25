#include <stdio.h>
#include <stdlib.h>


struct student
{
	int data;
	struct student *link;
};

struct student * createlist( struct student *node, int size);
void print_list(struct student *head);


int main(){

	
	int size;
	printf("enter the size of list\n");
	scanf("%d",&size);
	struct student  *head  = NULL;
	head = createlist(head,size);


	print_list(head);


	return 0;

}

struct student * createlist(struct student *node, int size){


	struct student * temp = NULL;
	struct student * p = NULL;

	for(int i=0;i<size;i++)
	{
		temp = (struct student*)malloc(sizeof(struct student));
		temp->data = i;
		temp->link = NULL;
		//printf("data %d and address %p\n",temp->data,temp->link);

		if(node == NULL){
			node=temp;
		}

		else
		{
			p =node;
			while(p->link != NULL)
			{
				p= p->link;
			}
			p->link = temp;
		}

	}


	return node;


}

void print_list(struct student *head){

struct student *temp=NULL;

temp = head;


	while(temp!=NULL)
	{
		printf("data %d and address %p\n",temp->data,temp->link);
		temp = temp->link;
	}

}
