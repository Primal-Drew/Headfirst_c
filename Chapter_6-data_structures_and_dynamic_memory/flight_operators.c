/*The Case of the Vanishing Island Captain’s Log. 11:00. Friday. Weather clear. A create() function
using dynamic allocation has been written, and the coding team says it is ready for air trials.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island *create(const char *name)
{
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "9:00 AM";
    i->closes = "10:00 PM";
    i->next = NULL;
}

void display(island *start){
    island *i = start;
    for(;i != NULL;i = i->next){
        printf("Name: %s\nOpen: %s-%s\n\n",i->name,i->opens,i->closes);
    }
}


void release(island *start){
    island *i = start;
    island *next =NULL;

    for(;i!=NULL;i = next)
    {
        next = i->next;
        free(i->name);
        free(i);
    };

}


int main()
{   
 island *start = NULL;
 island *i = NULL;
 island *next =NULL;
 char name[40];

 for(;fgets(name,sizeof(name),stdin) != NULL;i = next)
    {
        next = create(name);

        if(start == NULL)
            start = next;
        
        if(i != NULL)
            i->next =next;
        

    }
    display(start);

    release(start);



    return 0;
}
