// This is to track the name of songs in a tracklist.
#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvad Med school",
    "Newmark,Newmark-A wonderful Town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl for Iwo Jima",
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i, tracks[i]);
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    
    fgets(search_for, sizeof(80),stdin);
//    printf("Search for: ");


    find_track(search_for);
    return 0;
}