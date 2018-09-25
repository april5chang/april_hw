#include <stdio.h>

void getGCD(int num1, int num2, int *result);

int main()
{
    int n1 = 0, n2 = 0;
    int gcd = 1;
    
    printf("Please input 2 postive integer: ");
    
    /*check 2 numbers*/
    while(1)
    {
        scanf("%d %d", &n1, &n2);
        if(n1 > 1 && n2 > 1)
            break;
        else
        {
            printf("\nPlease input 2 positive integer: ");
            fflush(stdin);
        }
    }
    
    getGCD(n1, n2, &gcd);
    
    if(gcd == 1)
    {
    	printf("\nThe 2 numbers are relatively prime.\n");
	}
    else
	{
		printf("\nGCD of two numbers = %d\n", gcd);
	}
	return 0;
}

void getGCD(int num1, int num2, int *ptr)
{
    int i = 0;
    int min = 0;
    
    num1 < num2 ? (min = num1) : (min = num2);

    for(i = min ; i > 0 ; i--)
	{
        if( num1 % i == 0 && num2 % i == 0)
        {
            *ptr = i;
            break;
        }
    }
}
