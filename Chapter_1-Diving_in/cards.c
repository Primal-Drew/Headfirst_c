/*This a program to calculate the number of cards in a deck*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int counter = 0;
    while(card_name[0] != 'X'){
    printf("Enter the name of the card:");
    scanf("%2s",card_name);
    
    int val =0;

    
    switch(card_name[0]){
        case 'K':
        case 'Q':
        case 'J':
        val =10;
        break;
        case 'A':
        val =11;
        break;
        case 'X':
        printf("\nDone counting\n");
        break;
        default:
        val = atoi(card_name);
        break;
        
    }

    if (val>11){
        printf("\nError!");
        continue;
    }


    printf("\nValue:%d\n",val);

    static int count = 0;

    if(val==3||val==4||val==5||val==6){
        count++;
    }
    else if(val==10){
        count--;
    }
    
    printf("Count:%d\n",count);

    }

    return 0;

}