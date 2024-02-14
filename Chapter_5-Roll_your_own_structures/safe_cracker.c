/*Shhh…it’s late at night in the bank vault. Can you spin the correct combination to crack the
safe? Study these pieces of code and then see if you can find the correct combination that
will allow you to get to the gold. Be careful! There’s a swag type and a swag field.*/

#include <stdio.h>

typedef struct
{
    const char *description;
    float value;
} swag;

typedef struct
{
    swag *swag;
    const char *sequence;
} combination;

typedef struct
{
    combination numbers;
    const char *make;
} safe;

/*The bank created its safe like this:*/

int main()
{
    swag gold = {"GOLD!", 1000000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};

    /*This is the path taken to reach the value:Gold*/
    printf("Here is the gold:%s\n", s.numbers.swag->description);
}
