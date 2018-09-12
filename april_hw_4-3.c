#include <stdio.h>
#define arraySize 31

int main(void)
{
	int inputN = 0;
	int i = 0;
	long long int arrayFibo[arraySize] = {0};
	arrayFibo[0] = 0;
	arrayFibo[1] = 1;
	
	printf("Please input an integer N to find fibonacchi F(N)\n");
	printf("N must between 0 and 30. ");
	printf("\nIf there exists any decimal number, it will be chopped off.\n");
	printf("Input number N: ");
	
	while(1)
	{
		scanf("%d", &inputN);
		if(inputN < 0 || inputN > 30)
		{
			printf("\nPlease input a number between 0 and 30 : ");
			fflush(stdin);
		}
		else  
			break;
	}
	
	printf("\nFibonacchi F(%d) = ", inputN);
	
	if(inputN != 0 || inputN != 1)
	{
		for(i = 2 ; i <= inputN ; i++)
		{
			arrayFibo[i] = arrayFibo[i-1] + arrayFibo[i-2];
		}
	}
	
	printf("%d",arrayFibo[inputN]);
	
	return 0;
}

