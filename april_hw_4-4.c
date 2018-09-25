#include <stdio.h>
#define BINSIZE 32

int main(void)
{
	int inputNum = 0;
	int i = 0, j = 0;
	short arrayBin[BINSIZE] = {0};
	
	printf("**Decimal to Binary**\n\n");
	printf("Please input a positive integer: ");
	
	while(1)
	{
		scanf("%d", &inputNum);
		if(inputNum < 1)
		{
			printf("\nInput number must >= 1 : ");
			fflush(stdin);
		}
		else
			break;
	}
	
	j = inputNum;
	do
	{
		arrayBin[i] = j % 2;
		j /= 2;
		i++;
	} while (j != 0);
	
	printf("\nBinary of input number %d = ", inputNum);
	while(i > 0)
	{
		printf("%d", arrayBin[i-1]);
		i--;
	}
	printf("\n");
	return 0;
}
