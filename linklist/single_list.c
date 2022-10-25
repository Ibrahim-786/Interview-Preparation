#include <stdio.h>
#include <stdlib.h>


struct student
{
	int data;
	struct student *link;
};

int main(){


	struct student  *head  = NULL;

	head = (struct student*) malloc(sizeof(struct student));

	head->data = 20;
	head->link = NULL;
	printf("node 1 data :%d next link %p\n",head->data,head->link);

	struct student  *current  = NULL;

	current = (struct student*) malloc(sizeof(struct student));

	current->data = 30;
	current->link = NULL;
	printf("node 2 data :%d next link %p\n",current->data,current->link);

	head->link = current;


	
	printf("data :%d next link %p\n",head->data,head->link);
	printf("data :%d next link %p\n",head->link->data,head->link->link);

	struct student  *current_1  = NULL;

	current_1 = (struct student*) malloc(sizeof(struct student));

	current_1->data = 40;
	current_1->link = NULL;
	printf("node 3 data :%d next link %p\n",current_1->data,current_1->link);

	current->link = current_1;

	printf("data :%d next link %p\n",head->data,head->link);
	printf("data :%d next link %p\n",head->link->data,head->link->link);
	printf("data :%d next link %p\n",head->link->link->data,head->link->link->link);






	return 0;

}
