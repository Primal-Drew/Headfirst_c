#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct school{
    char *name;
    int *adm;
    struct school *next;
}school;

school *create(char *name){
    school *start = malloc(sizeof(school));
    start->name = strdup(name);
    start->adm = 0;
    start->next = NULL;

};

void display(school *start){
    school *i = start;
    school *next = NULL;
    for(;i->next !=NULL;i=next){
        printf("Name:%s\n",i->name);
        next = i->next;
    }
    
}

void freedom(school *start){
    school *i =start;
    school *next =NULL;
    for(;i!=NULL;i =next)
    {
        next = i->next;
        free(i->name);
        free(i);
    };
};

int main(){
    char name[40];
    school *start = NULL;
    school *next = NULL;
    school *i = NULL;

    for(;fgets(name,sizeof(name),stdin) !=NULL; i=next){
        next = create(name);
        
        if(start==NULL)
            start =next;
        
        if(i != NULL)
            i->next =next;
    };

    display(start);
    freedom(start);
    return 0;
}

