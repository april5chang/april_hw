#include <stdio.h>
#include <math.h>

int main(void)
{
    float a1=0,b1=0,c1=0;
    float a2=0,b2=0,c2=0;
    float delta=0;
    float deltaX=0;
    float deltaY=0;
    float n=0;
    
    printf("Please input a1,b1,c1,a2,b2,c2 to solve equation:\n");
    printf("a1X+b1Y=c1\n");
    printf("a2X+b2Y=c2\n");
    scanf("%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2);
    printf("The numbers you input are:\n%f %f %f %f %f %f\n\n", a1,b1,c1,a2,b2,c2);
    
    delta=a1*b2-b1*a2;
    deltaX=c1*b2-b1*c2;
    deltaY=a1*c2-c1*a2;
    n = pow(deltaX,2)+pow(deltaY,2);
    
    if(delta!=0)
    {
        printf("One solution: \n");
        printf("X=%f\n",deltaX/delta);
        printf("Y=%f\n",deltaY/delta);
    }
    else if(delta==0 && n!=0)
    {
        printf("No solution.");
    }
    else if(delta==0 && deltaX==0 && deltaY==0)
    {
        printf("Infinite solutions.");
    }
    
    return 0;
}
