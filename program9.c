#include <stdio.h>
#include <time.h>

void func_name()
{
    printf("Function starts\n");

    for (int i = 0; i < 1000000000; i++)
    {
    }

    printf("Function ends\n");
}

int main()
{
    clock_t t;
    t = clock();
    func_name();
    t = clock() - t;

    double time_taken_by_func = (double)(t) / CLOCKS_PER_SEC;
    printf("The function runtime duration was %f\n", time_taken_by_func);
}