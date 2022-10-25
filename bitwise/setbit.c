#include <stdio.h>

int main(){




	int x =0;
	int bitpos = 0;
	printf("please enter a value of x and bit position to set\n");


	scanf("%d %d",&x,&bitpos);


	x= (1<<bitpos)|x;

	printf("%d\n",x);


	return 0;

}
