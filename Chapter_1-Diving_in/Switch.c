/*Using the switch statements*/

#include <stdio.h>

int main(){

    int winning = 0;
    int train = 37;

    switch(train)
    {
        case 37 :
        winning += 80;
        printf("Jackpot!");
        break;

        case 65:
        winning += 50;
        break;

        case 12:
        winning += 20;
        break;

        default:
        winning = 0;
        break;
    }

}