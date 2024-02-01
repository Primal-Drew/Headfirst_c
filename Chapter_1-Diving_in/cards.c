/*This a program to calculate the number of cards in a deck*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    printf("Enter the name of the card:");
    scanf("%2s",card_name);
    
    int val =0;

    if(card_name[0] == 'K'){
        val = 10;
    }
    else if(card_name[0] == 'Q'){
        val =10;
    }
    else if(card_name[0] == 'J'){
        val =10;
    }
    else if(card_name[0]== 'A'){
        val=11;
    }
    else{
        val = atoi(card_name);
    };
    

    printf("\nValue:%d\n",val);

    int count = 0;

    if(val==3||val==4||val==5||val==6){
        count++;
    }
    else if(val==10){
        count--;
    }
    
    printf("Count:%d\n",count);

    
    return 0;

}