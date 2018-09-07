#include <stdio.h> 
#define arraySIZE 10

int main()
{	
	int a[arraySIZE] = {0}; 
	int i = 0, j = 0, temp = 0;
	char ch;
  	FILE *fpRead;
  	FILE *fpWrite;
  	
	fpRead = fopen("1.txt", "r") ;
  	
	if(fpRead == NULL)   /*test if FILE exists*/
	{
		printf("No file! \n");
		return -1; 
	}
	
	for( i = 0 ; i < arraySIZE ; i++)
	{
		fscanf(fpRead,"%d",&a[i]);
		printf("%d ", a[i]);
	}	
	fclose(fpRead);
	
	for (i = 0 ; i < arraySIZE ; i++)  	/*sort*/
	{
		for(j = arraySIZE-1 ; j > i ; j--)
		{
			if(a[j] > a[i])     
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	fpWrite = fopen("2.txt", "w") ;        /*save sorting result to 2.txt*/
	for(i = 0 ; i < arraySIZE ; i++)
	{
		fprintf(fpWrite, "%d ", a[i]);
	}
	
	fclose(fpWrite);
	
	return 0;
}

