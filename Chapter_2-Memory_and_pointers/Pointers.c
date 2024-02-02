#include <stdio.h>
//The function takes a pointer to a variable and then changes the value at the address thus successfully updating it  

void go_southeast(int* lat,int* lon)
{ 
    *lat -= *lat;
    *lon += *lon ;
}
int main(){
    int latitude,longitude;

    latitude = 32;
    longitude = -64;

    go_southeast(&latitude,&longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}