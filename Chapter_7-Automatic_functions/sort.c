#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scores[] = {543,323,32,554,11,3,112};

int compare_scores(const void* score_a,const void* score_b){
    int a = *(int*)score_a;
    int b = *(int*)score_b;

    return a-b;
}


int main(){
    qsort(scores, 7, sizeof(int), compare_scores);

    for (int i=0;i<7;i++){
        printf("%i,",scores[i]);
     }

    printf("\n");
}