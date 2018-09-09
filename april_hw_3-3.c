#include <stdio.h> 
#include <math.h>

int main(void)
{
	int i = 0, num = 0;
	float sqrtN = 0;
	
	while(1)
	{
		printf("Please input number: ");
		scanf("%d", &num);
	
		if(num <= 0)
		{
			printf("Please input positive integer: ");
			fflush(stdin);
		}
		else
			break;
 	}
 	
	sqrtN = sqrt(num);
	
	for(i = 2 ; i < sqrtN ; i++)
	{
		if(num % i == 0)
		{
			printf("\nIt's not a prime.\n");
			break;
		}
		else
		{
			printf("\nIt's a prime.");
			break;
		}
	}
	
	
	return 0;
}
