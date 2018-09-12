#include <stdio.h>
#include <stdlib.h>
#define aX 5
#define aY 5
#define bX 5
#define bY 5
#define X 5
#define Y 5

void readFile(FILE *fptr, int Matrix[X][Y]);

int main(void)
{
	FILE *fpRead1 = NULL;
	FILE *fpRead2 = NULL;
	FILE *fpWrite = NULL;
	int a[aX][aY] = {0};
	int b[bX][bY] = {0};
	int c[aX][bY] = {0};
	int i = 0, j = 0, k = 0;
	
	fpRead1 = fopen("1.txt","r");
	fpRead2 = fopen("2.txt","r");	
	
	/*test if FILE exists*/
	if(fpRead1 == NULL || fpRead2 == NULL)   
	{
		printf("No file! \n");
		return -1; 
	}
	
	/*read 1.txt and 2.txt to matrix a and b*/
	printf("matrix a: \n");
	readFile(fpRead1, a);
	printf("\nmatrix b: \n");
	readFile(fpRead2, b);
	printf("\nCalculate: a * b :\n");
	
	if(bY != bX) 
		printf("\nCan't multiple 2 matrix!\n");
		
	for(i = 0 ;  i < aX ; i++)
	{
		for(j = 0 ; j < bY ; j++)
		{
			for(k = 0 ; k < aY ; k++)
			{
				c[i][j] += a[i][k] * b[k][j] ;
			}
		}
	}
		
	fclose(fpRead1);
	fclose(fpRead2);
	
	fpWrite = fopen("3.txt", "w") ; 
	
	for(i = 0 ; i < aX ; i++)
	{
		for(j = 0 ; j < bY ; j++)
		{
			fprintf(fpWrite, "%d ", c[i][j]);
		}
		fprintf(fpWrite, "\n");
	}
	
	readFile(fpWrite, c);
	
	fclose(fpWrite);
	
	return 0;
}

void readFile(FILE *fptr, int Matrix[X][Y])
{
	int i = 0, j = 0;
	
	if(!feof(fptr)) 
	{
		for(i = 0 ; i < X ; i++)
		{
			for(j = 0 ; j < Y ; j++)
			{
				fscanf(fptr, "%d", &Matrix[i][j]);
				printf("%d ", Matrix[i][j]); 
			}
			printf("\n");
		}
	}
	printf("\n");
}

