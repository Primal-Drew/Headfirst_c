#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scores[] = {543,323,32,554,11,3,112};


int compare_scores(const void* score_a,const void* score_b)
{
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a-b;
}


int compare_scores_desc(const void* score_a,const void* score_b)
{
    int a = *(int *)score_a;
    int b = *(int*)score_b;
    return b-a;
}


typedef struct
{
    int width;
    int length;
}   rectangle;


int compare_areas(const void* a,const void* b){

    rectangle *ra = (rectangle*)a;
    rectangle *rb = (rectangle*)b;
    
    int area_ra = (ra->length)*(rb->width);
    int area_rb = (rb->length)*(rb->width);

    return  area_ra - area_rb; 
}

int compare_names(const void* a,const void* b)
{
    char** sa = (char**)a;
    char** sb = (char**)b;

    return strcmp(*sa,*sb);
}

int compare_areas_desc(const void* a,const void* b)
{
    rectangle* ra = (rectangle*)a;
    rectangle* rb = (rectangle*)b;
    int area_ra = ra->length * ra->width;
    int area_rb = rb->length * rb->width;

    return area_rb -area_ra;
}

int compare_names_desc(const void* a,const void* b)
{
    char** sa = (char**)a;
    char** sb = (char**)b;

    return strcmp(*sb,*sa);
}

int main()
{
    char* name[]= {"Anne","Andrew","Drake","Alice","Zack"};
    puts("\n");
    int items = 5;
    qsort(name, items, sizeof(char*), compare_names);

     for (int i=0;i<items;i++)
    {
        printf("%s,",name[i]);
    }
    printf("\n");
    return 0;

}