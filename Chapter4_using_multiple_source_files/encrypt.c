#include <stdio.h>

#include "encrypt.h"


void encrypt(char *message)
{

while (*message) {
    char c;
    *message = *message ^ 31;

    message++;
}
}

