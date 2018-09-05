#include <stdio.h>

int main(void)
{	 
	int n = 0, m = 0;
	int i = 0;
	int x = 0, y = 0;
			
	printf("Please input interger n and m to solve combinations C(n,m): \n");	
	
	while(1)
	{
		scanf("%d %d", &n, &m);	
		printf("The numbers you input are: %d, %d\n", n, m);
		if(n * m == 0 )
		{
			printf("Please input integer:\n");
			printf("Please input interger n and m to solve combinations C(n,m): ");	
		 	fflush(stdin);
		}
		else if( n - m < 0)
		{
			printf("\nn must be bigger or equal to m.");
			printf("\nPlease input interger n and m to solve combinations C(n,m): ");	
		}
		else
			break;
	} 
	
	printf("\nCalculating C(%d,%d)...\n", n, m);	
	printf("C(%d,%d) = %d! / (%d - %d)! \n", n, m, n, n, m);
	
	x =  fac(n);
	y =  fac(n - m);
   	printf("Answer= %d\n", (x / y));
   	
	return 0;
}

int fac(int n)
{
	if( n == 0 || n == 1)
		return 1;
	else
		return ( n * fac(n - 1));
}
	

