
#include <stdio.h>


// Fortune cookie display
void fortune_cookie(char msg[]){
    printf("The msg is:%s\n",msg);
}

// a program that skips the first 6 characters in an array.
void skip(char message[]){
    message = &message[6];
    printf("New message: %s",message);
}





int main(){
    char quote[]= "Cookies make you fat";
    fortune_cookie(quote);

    char mes[] ="Don't call me!\n";

    skip(mes);


// Murder Mystery 

int doses[] ={1,2,3,1000};

printf("\n\nIssue %d doses\n",3[doses]);


}