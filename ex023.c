#include <stdio.h>
#include <stdlib.h>

int main () {

    int num, fat=1, c;
    
    printf ("De qual numero voce quer o fatorial? ");
    scanf ("%d", &num);
    printf ("%d! = ", num);

    for (c = num; c >= 1 ; c--) {
        fat = fat * c; 
        printf ("%d x ", c);
              
    }
    printf ("= %d", fat);
    return 0; 
}