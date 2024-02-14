#include <stdio.h>

typedef union
{
    short count;
    float weight;
    float volume;
}quantity;



int main(){
/* Way of setting the value in unions*/

// C89 style for the first field
    quantity q ={4};
    printf("The count is:%i\n",q.count);

//Designated initializers set other values
    quantity r = {.weight=7.5};
    printf("Weight is:%f\n",r.weight);

//Set the value with dot notation
    quantity w;
    w.volume= 8.9;
    printf("The volume is:%f\n",w.volume);


}

