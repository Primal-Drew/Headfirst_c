#include <stdio.h>

struct preferences{
    const char* food;
    float exercise_hours;
};

struct fish
{
    const char *name;
    const char *species;
    int age;
    int teeth;
    struct preferences care;
};

int main(){
    struct fish snappy ={"Snappy","Prinha",4,69,{"Bread",4.32}};
    printf("Snappy likes to eat:%s\n",snappy.care.food);
}
