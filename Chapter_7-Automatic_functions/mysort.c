#include <stdio.h>

int numbers[] = {3,4,6,2,9,1,7,8,5
};

int compare(const void *first,const void *second){
    int first_num  = *(int*)first;
    int second_num = *(int*)second;

    return first_num - second_num;
}


int qsort(int *array,int sizeof_array,int (*compared)(const void*,const void*)){

    int displaced;
    int value;

    for(int i = 0;i<sizeof_array;i++){
        for(int x = i;x<(sizeof_array-1);x++){
        value = compared(array+i,(array+x+1));

        if (value<0){
            displaced = array[i];
            array[i] = array[x+1];
            array[x+1] = displaced;
        }}

        printf("%i\n",array[i]);
    }
}

int main(){
    qsort(numbers,10,compare);

    printf("%i",numbers[0]);
    return 0;
}