#include <stdio.h>
#define BINSIZE 32

int main(void)
{
	int inputNum = 0;
	int i = 0, j = 0;	
	short arrayBin[BINSIZE] = {0};
	printf("Please input a number: ", inputNum);
	
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
		arrayBin[i] = j % 11;
		j /= 11;
		i++;
	} while (j != 0);	
		
	printf("\nResult: ");
	while(i > 0)
	{
		if( arrayBin[i-1] == 10)
			printf("A");
		else
			printf("%d", arrayBin[i-1]);
		i--;
	}
	printf("\n");	
	
	return 0;
}
