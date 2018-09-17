#include <stdio.h>

void getGCD(int num1, int num2, int *result);

int main()
{
    int n1 = 0, n2 = 0;
    int *ptr = NULL;
    int GCD = 1;
    
    printf("Please input 2 postive integer: ");
    
    /*check 2 numbers*/
    while(1)
    {
        scanf("%d %d", &n1, &n2);
        if(n1 > 1 && n2 > 1)
            break;
        else
            printf("\nPlease input positive integer: ");
            fflush(stdin);
    }
    
    ptr = &GCD;
    getGCD(n1, n2, ptr);
    
    if(GCD == 1) 
    {
    	printf("\nThe 2 numbers are relatively prime.");
	}
    else
	{
		printf("\nGCD of two numbers = %d", GCD);
	}
	return 0;
}

void getGCD(int num1, int num2, int *ptr)
{
    int i = 0;
    int n = 0;
    
    num1 < num2 ? (n= num1) : (n = num2);

    for(i = n ; i > 0 ; i--)
	{
        if( num1 % i == 0 && num2 % i == 0)
        {
            *ptr = i;
            break;
        }
    }
}
