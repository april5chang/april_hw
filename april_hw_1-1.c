#include <stdio.h>
#include <math.h>

int main11(void)
{
    
    float x1=0,x2=0;
    float a=0,b=0,c=0;
    float m=0;
    
    printf("Please input a, b, and c to solve equation ax^2+bx+c=0:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\nThe numbers you input are: %f,%f,%f\n",a,b,c);
    
    m = pow(b,2) - 4*a*c;    //discriminant
    
    if(m == 0)             //discriminant=0, 2 equal roots
    {
        x1=-b/(2*a);
        printf("x= %.0f\n",x1);
    }
    else if(m>0)         //discriminant>0, 2 real roots
    {
        x1=(-b+sqrt(m))/(2*a);
        x2=(-b-sqrt(m))/(2*a);
        printf("Two real roots: %.2f,%.2f\n",x1,x2);
    }
    else                //discriminant<0, 2 imaginary roots
    {
        printf("imaginary root 1= %f+%fi\n",(-b/(2*a)),(sqrt(-m))/(2*a));    //x=(-b+sqrt(-m)i/2a
        printf("imaginary root 2= %f-%fi\n",(-b/(2*a)),(sqrt(-m))/(2*a));    //x=(-b-sqrt(-m)i/2a
    }
    
    return 0;
}
