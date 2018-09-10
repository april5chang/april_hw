#include <stdio.h> 
#include <math.h> 
#include <stdbool.h> 

bool isPrime(int num);

int main(void)
{
	int num = 0;
	
	/*input filter*/ 
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
 	
 	if(isPrime(num))
		printf("\nIt's a prime.\n");
	else
		printf("\nIt's not a prime.\n");
		
	return 0;	 
}
 	
bool isPrime(num)
{
	float sqrtN = sqrt(num);
	bool boolN = true;
	
	for(int i = 2 ; i <= sqrtN ; i++)
	{
		if(num % i == 0)
		{
			boolN = false;
			break;
		}
	}
	return boolN;
}

