#include <stdio.h>

struct exercise
{
    const char *description;
    float duration;
};

struct meal
{
    const char *ingredients;
    float weight;
};

struct preferences
{
    struct meal food;
    struct exercise exercise;
};


struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};


void label(struct fish snappy)
{
    printf("Name:%s\nSpecies:%s\nFood ingridient:%s\nFood weight:%2f\nExercise description:%s\nExercise duration:%2f\n",snappy.name, snappy.species, snappy.care.food.ingredients, snappy.care.food.weight, snappy.care.exercise.description, snappy.care.exercise.duration);
}



int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"Swim in the jacuzzi", 7.5}}};
    label(snappy);
}
