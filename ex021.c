#include <stdio.h>
#include <stdlib.h>

int main () {
    int n1 = 0, n2 = 1, n3, c;

    printf ("%d.. %d.. ", n1, n2);
    
    for (c = 1; c <= 8; c++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    printf ("%d.. ", n3);
    }
      
    return 0;
}