#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num, sum = 0;

    num = 8;
    printf("We have %d elements to allocate memory to\n", num);

    ptr = (int *)malloc(num * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }
    else
    {
        printf("Memory allocation has been successful set to %p using malloc\n", &ptr);
    }

    for (int i = 0; i < num; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Inserted 8 elements in the block are as follows:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\n");
    num = 16;

    // ptr = realloc(ptr, num * sizeof(int));
    // printf("Memory has been reallocated.");

    for (int i = 0; i < num; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Inserted 8 elements in the block are as follows:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d, ", ptr[i]);
    }
    printf("\n");
}
