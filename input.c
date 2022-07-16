#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 1) 
	{
		printf("One or more arguments are missing");
		exit(1);
	}
	int num;
	FILE *fptr;
	fptr = fopen(argv[1],"w");

	if(fptr == NULL) 
	{
		printf("Error");
		exit(1);
	}

	printf("Enter num: ");
	scanf("%d", &num);

	fprintf(fptr, "%d\n", num);
	fclose(fptr);
}
