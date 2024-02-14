#include <stdio.h>


typedef struct
{
    const char *name;
    const char *species;
    int age;
} turtle;

/*
The function below attempts to  update the value of age in a struct.
    We use a pointer to the value because of the following reasons:

        1. Directly function(turtle .t) would simply clone the values
            the structure...But we want to update the real struct

        2. Using a pointer we are able to get the address of the real
            struct value we want to modify instead of cloning it.
*/

void happy_birthday(turtle *t)
{
    /*
    Its crucial to use (*t).age instead of *t.age...

        (*t).age or t->age 
            This means the age of the turtle pointed to by t

        *t.age or *(t.age)
            This means the value at the memory location given by (t.age)
                while there isn't a memory location called t.age

    */

    (*t).age = (*t).age + 1;
    printf("Happy Birthday %s! You are now %i years old!\n",
           (*t).name, (*t).age);
}

int main()
{
    turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};

    happy_birthday(&myrtle);

    printf("%s's age is now %i\n", myrtle.name, myrtle.age);
    
    return 0;
}