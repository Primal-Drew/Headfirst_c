#include <stdio.h>
#include "checksum.h"
#include "encrypt.h"

int main()
{
    char message[] = "Andrew aren't you coming home";
    encrypt(message);

    printf("Encrypted:%s\n",message);
    printf("Checksum:%i\n",checksum(message));

    encrypt(message);
    printf("Dencrypted:%s\n",message);
}