#include <stdio.h> 
#define arraySIZE 10

int main()
{
	int a1[arraySIZE] = {0}; 
	int a2[arraySIZE] = {0}; 
	int a3[arraySIZE] = {0}; 
	int i = 0, j = 0, k = 0;
	char ch;
  	FILE *fpRead1;
  	FILE *fpRead2;
  	FILE *fpWrite;
  	
  	fpRead1= fopen("3.txt", "r") ;
  	fpRead2= fopen("4.txt", "r") ;
	
	if(fpRead1 == NULL || fpRead2 == NULL)   /*test if FILE exists*/
	{
		printf("No file! \n");
		return -1; 
	}
	
	for(i = 0 ; i < arraySIZE ; i++)      /*add 2 numbers*/ 
	{
		fscanf(fpRead1, "%d", &a1[i]);
		fscanf(fpRead2, "%d", &a2[i]);
		a3[i] = a1[i] + a2[i];
	} 
	
	fclose(fpRead1);
	fclose(fpRead2);
	
	fpWrite = fopen("5.txt", "w") ;       /*save result to 2.txt*/

	for(i = 0 ; i < arraySIZE ; i++)
	{
		fprintf(fpWrite, "%d ", a3[i]);
	}
	
	fclose(fpWrite);
	
	return 0;
}
