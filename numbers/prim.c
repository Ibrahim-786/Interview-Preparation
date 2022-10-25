#include <stdio.h>

int main(){

int number;

printf("enter the number\n");
scanf("%d",&number);

	int count =0 ;

	if(number > 1)
	{
		for(int i=1;i<=number;i++)
		{
			if(number%i==0){
				count++;
			}
		}


		if(count == 2)
		{
			printf("prime\n");
		}
		else
		{
			printf("not a prim\n");
		}



	}

	else{
		printf("0 and 1 are neighter a prim nor computite\n");
	}



	return 0;

}
