#include <stdio.h>
#include "encrypt.h"
int main()
{
    char msg[80];
    printf("Enter Message: ");
    while(fgets(msg,80,stdin)){
        encrypt(msg);
        puts(msg);
        printf("Enter Message: ");
    }
    return 0;
}