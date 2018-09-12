#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

bool isPrime(int testNum);

int main(void)
{
	int inputNum = 0;
	int i = 0;
	
	do
	{ 	fflush(stdin);
		printf("Please input a integer bigger than 1: "); 
		scanf("%d", &inputNum);
	} while (inputNum <= 1);

	printf("\nAll positive prime smaller than %d : ", inputNum);
	
	for(i = 2 ; i <= inputNum ; i++)
	{
		if(isPrime(i))
			printf("%d ", i);
	}
	
	return 0;
}

bool isPrime(testNum)
{
	int i = 0;
	float sqrtN = sqrt(testNum);
	bool boolN = true;
	
	for(i = 2 ; i <= sqrtN ; i++)
	{
		if(testNum % i == 0)
		{
			boolN = false;
			break;
		}
	}
	return boolN;
}

