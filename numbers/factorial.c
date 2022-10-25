#include <stdio.h>

int main(){

int number;

printf("enter the number to print factorial\n");
scanf("%d",&number);

	int fact =1 ;

	for(int i=1;i<=number;i++)
	{
		fact = fact*i;
	}

	printf("fact is %d\n",fact);
	


	return 0;

}
