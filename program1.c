#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	FILE *fptr;
	if ((fptr = fopen("file1.txt","r")) == NULL ) 
	{
		printf("ERROR in Opening file!");
		exit(1);
	}


	fscanf(fptr,"%d", &num);

	printf("Value of n: %d\n", num);
	fclose(fptr);
}
