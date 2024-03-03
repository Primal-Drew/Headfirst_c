#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum
{
    DUMP,
    SECOND_CHANCE,
    MARRIAGE
} response_type;

typedef struct
{
    char *name;
    response_type type;
} response;

void dump()
{
    puts("Unfortunately your last date contacted us to");
    puts("say that they will not be seeing you again");
};

void second_chance()
{
    puts("Good news: your last date has asked us to");
    puts("arrange another meeting. Please call ASAP.");
};

void marriage()
{
    puts("Congratulations! Your last date has contacted");
    puts("us with a proposal of marriage.");
};

void sms(response *user)
{
    printf("Dear %s,\n", user->name);
    void (*replies[])(void) = {
        dump,
        second_chance,
        marriage,
    };
    (*replies[user->type])();
}

int main()
{
    response r[] = {
        {"Mike", DUMP}, {"Luis", SECOND_CHANCE}, {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}};

    int no_r = 4;
    for (int i = 0; i < no_r; i++)
    {
        sms(&r[i]);
    };
}