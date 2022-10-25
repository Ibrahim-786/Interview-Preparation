#include <stdio.h>

int main(){

	int x =0;
	int bitpos = 0;
	printf("please enter a value of x and bit position to clear \n");


	scanf("%d %d",&x,&bitpos);

	int status = 0;
	status = (1<<bitpos) & x;

	if(status){

	printf("bit is set\n");

	}
	else{

		printf("bit is not set\n");
	}
	


	return 0;

}
