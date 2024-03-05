#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* These is a program  that takes the the admission of people then
   sorts them out in an alphabetical order.*/

int sort_num(const void *a, const void *b)
{
    int a_num = *(int *)a;
    int b_num = *(int *)b;

    return a_num - b_num;
}

int items = 7;

void printer(int *array)
{
    for (int i = 0; items > i; i++)
    {
        printf("%i ", array[i]);

        if (i == items - 1)
            printf("\n");
    }
}

int main()
{
    int admissions[] = {101, 107, 105, 103, 106, 104, 102};
    qsort(admissions, items, sizeof(int), sort_num);
    printer(admissions);
}