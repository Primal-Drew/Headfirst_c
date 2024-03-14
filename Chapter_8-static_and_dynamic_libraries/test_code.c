#include <stdio.h>
#include "checksum.h"
#include "encrypt.h"

int main()
{
    char message[] = "Speak friend and enter";
    encrypt(message);

    printf("Encrypted:%s\n",message);
    printf("Checksum:%i\n",checksum(message));

    encrypt(message);
    printf("Dencrypted:%s\n",message);
}