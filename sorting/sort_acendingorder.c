#include <stdio.h>

int main(){


	int arr[5] = {2,4,1,3,5};

	int temp;
	for(int i=0 ;i<5; i++)
	{
		for(int j =0; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("descesding order\n");
	for(int i=0; i<5; i++)
	{
		printf("%d ",arr[i]);
	}


	return 0;

}
