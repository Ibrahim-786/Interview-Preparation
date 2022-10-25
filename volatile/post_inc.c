#include<stdio.h>



int main()
{





	int x=10;


// printf is will perform operation right to left    
//                          13  12  11
// after arithmatic operation value of x is stored in cache in mcu register
// so in cache value is x is 13 but in memory value of x is 11 12 13 
// so cache memory will increase the perf but decrease the accurates
// so fix for these is use volatile
	printf("%d %d %d\n",++x,++x,++x);


	return 0;
}

