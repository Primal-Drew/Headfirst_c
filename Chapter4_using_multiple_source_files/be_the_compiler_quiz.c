#include <stdio.h>

float mercury_day_in_earth_days();
int hours_in_an_earth_day();


int main()
{
float day = mercury_day_in_earth_days();
printf("A day on Mercury is %2f hours\n", day);
return 0;
}

float mercury_day_in_earth_days()
{
return 58.65;
}

int hours_in_an_earth_day()
{
return 24;
}