/*You’re running a travel company that arranges flying tours through the islands. Each tour contains a sequence of short flights from
one island to the next. For each of those islands, you will need to record a few pieces of information, such as the name of the island and the
hours that its airport is open. So how would you record that?*/

#include <stdio.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

void display(island *start){
    island *i = start;
    for(;i != NULL;i = i->next){
        printf("Name: %s open: %s-%s\n",i->name,i->opens,i->closes);
    }
}

int main()
{
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};
    island skull={"Skull", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &skull;
    skull.next =&shutter;

    display(&amity);
}