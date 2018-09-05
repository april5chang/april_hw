#include <stdio.h> 

//input 10 integers to find the largest 3 numbers

int main(void)
{
	int a[9];
	int i = 0, j = 0;
	int temp = 0;
	
	printf("Please input 10 integers to find the largest 3 numbers: ");
		
	for(i = 0 ; i <= 9; i++)
		scanf("%d", &a[i]);

	printf("\nThe numbers you input are: ");
	
	for(i = 0; i <= 9 ; i++)
		printf("%d ", a[i]);
	
	for (i = 0 ; i <= 9 ; i++)
	{
		for(j = 9 ; j > i ; j--)
		{
			if(a[j] > a[i])     //exchange
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nThe largest 3 numbers: %d, %d, %d", a[0], a[1], a[2]);
	
	return 0;
}
