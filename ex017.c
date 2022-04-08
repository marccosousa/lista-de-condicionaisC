#include <stdio.h>
#include <stdlib.h>

int main () {

    int c = 1; 
    
    while (c < 50) {

        if (c % 2 != 0) {
            printf ("%d..\n", c);
        }
    c++;
    }
    return 0;
}