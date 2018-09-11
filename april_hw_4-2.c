#include <stdio.h> 
#define arraySIZE 25

int main()
{
	int a1[arraySIZE] = {0}; 
	int a2[arraySIZE] = {0}; 
	int a3[arraySIZE] = {0};
	int a1count = 0;
	int a2count = 0;
	int a3count = 0;	
	int i = 0;

  	FILE *fpRead1 = NULL;
  	FILE *fpRead2 = NULL;
  	FILE *fpWrite = NULL;
  	
  	fpRead1= fopen("1.txt", "r") ;
  	fpRead2= fopen("2.txt", "r") ;
  	
	/*test if FILE exists*/
	if(fpRead1 == NULL || fpRead2 == NULL)   
	{
		printf("No file! \n");
		return -1; 
	}
	
	/*find how many numbers in a1 and a2*/
	for(i = 0 ; i < arraySIZE ; i++)     
	{
		if(!feof(fpRead1))
		{
			++a1count;
			fscanf(fpRead1, "%d", &a1[i]);
		}
	} 	
	
	for(i = 0 ; i < arraySIZE ; i++)     
	{
		if(!feof(fpRead2))
		{
			++a2count;
			fscanf(fpRead2, "%d", &a2[i]);
		}
	} 
		
	/*confirm how many number in a3*/
	if(a1count <= a2count)
		a3count = a1count;
	else
		a3count = a2count;
		
	/*calculate a3[i]*/	
	for(i = 0 ; i < a3count ; i++)
	{
		a3[i] = a1[i] * a2[i];
	}
	
	fclose(fpRead1);
	fclose(fpRead2);
	
	/*save result as 3.txt*/
	fpWrite = fopen("3.txt", "w") ;       /*save result to 2.txt*/

	for(i = 0 ; i < a3count ; i++)
	{
		fprintf(fpWrite, "%d ", a3[i]);
	}
	
	fclose(fpWrite);
	
	return 0;
}
