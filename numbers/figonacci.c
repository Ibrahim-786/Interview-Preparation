#include <stdio.h>

int main(){

int number;

	printf("enter the number to print factorial\n");
	scanf("%d",&number);


	int serias = 1;


	for(int i=2;i<=number;i++)
	{
		
		serias = serias*i;

		
	}

	printf("fact is %d\n",serias);
	


	return 0;

}
