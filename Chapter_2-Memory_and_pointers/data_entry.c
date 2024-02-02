// Using scanf and fgets 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[13];

    printf("Name:");
    scanf("%12c",name);
    printf("Your name is:%s",name);

    // fgets(pointer_to_buffer,sizeof(buffername),stdin)


    printf("\n\n <fgets>Name:");

    char fname[14];

    fgets(fname,sizeof(13),stdin);
    printf("Name is:%s",fname);


}