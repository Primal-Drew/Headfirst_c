#include <stdio.h>
#include <string.h>

void print_reverse(char word[])
{
    int len = strlen(word) - 1;
    char reverse[len + 1];
    for (int i = 0; i <= len; i++)
    {

        static int count = 0;
        count = len - i;

        char *locater = word + count;
        reverse[i] = *locater;
    }
    puts(reverse);
}

int main()
{
    char word[] = "ABCD";
    print_reverse(word);
}