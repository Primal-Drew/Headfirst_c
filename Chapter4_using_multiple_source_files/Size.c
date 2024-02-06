/*This program will tell you about the sizes of ints and floats*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("The value of INT_MAX is %i\n", INT_MAX);

    printf("The value of INT_MIN is %i\n", INT_MIN);

    printf("An int takes %li bytes\n", sizeof(int));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);

    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);

    printf("A float takes %li bytes\n", sizeof(float));

    printf("The value of CHAR_MAX is %i\n",CHAR_MAX);

    printf("The value of CHAR_MIN is %i\n", CHAR_MIN);

    printf("An char takes %li bytes\n", sizeof(char));




    return 0;
}