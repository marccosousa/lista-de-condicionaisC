#include <stdio.h>
#include <stdlib.h>

int main () {

    float notas;  
       
    inicio: 
    printf ("Digite uma nota entre 0 e 10: ");
    scanf ("%f", &notas);
        
        if (notas < 0 || notas > 10) {
            printf ("Nota invalida, tente novamente. \n\n");
            goto inicio; 
        }
    
    printf ("A nota digitada foi %.2f", notas);
    return 0;
}