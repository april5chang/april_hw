#include <stdio.h>
int fac(int n);
int main(void)
{
    int n = 0, m = 0;
    int x = 0, y = 0;
    
    printf("Please input positive interger number n and m to solve combinations C(n,m): \n");
    
    while(1)
    {
        scanf("%d %d", &n, &m);
        printf("\nThe numbers you input are: %d, %d\n", n, m);
        if(n < 0 || m < 0)
        {
            printf("Please input integer: ");
            fflush(stdin);
        }
        else if( n < m )
        {
            printf("\nn must be bigger or equal to m: ");
            fflush(stdin);
        }
        else
            break;
    }
    
    printf("\nCalculating C(%d,%d)...\n", n, m);
    printf("C(%d,%d) = %d! / (%d-%d)!(%d)! \n", n, m, n, n, m, m);
    
    x =  fac(n);
    y =  fac(n - m) * fac(m);
    printf("Answer= %d\n", (x / y));
    
    return 0;
}

int fac(int n)
{
    int count = 1;
    for(int i = 1; i <= n; i++)
    {
        count *= i;
    }
    return count;
} 
