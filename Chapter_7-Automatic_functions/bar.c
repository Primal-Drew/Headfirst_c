#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef enum
{
    MUDSLIDE,
    FUZZY_NAVEL,
    MONKEY_GLAND,
    ZOMBIE
} drink;

double price(drink d)
{
    switch (d)
    {
    case MUDSLIDE:
        return 6.79;
    case FUZZY_NAVEL:
        return 5.31;
    case MONKEY_GLAND:
        return 4.82;
    case ZOMBIE:
        return 5.89;
    }
    return 0;
}

void bill(int arg, ...)
{
    double (*prices)(drink) = price;
    va_list ap;
    va_start(ap, arg);
    double sum = 0.0;

    for (int i = 0; i < arg; i++)
    {
        sum += prices(va_arg(ap,drink));
        if(i==arg-1)
        printf("%lf",sum);
    }
    va_end(ap);
}

int main()
{
    bill(3,MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL);
}
