#include <stdio.h>

int main () {

    char turno; 

    printf ("Em qual turno voce estuda?\n");
    printf ("Digite: M - Matutino / V - Vespertino / N - Noturno\n");
    scanf ("%c", &turno);

    if (turno == 'm' || turno == 'M') {

        printf ("BOM DIA!!");
    
    } else if (turno == 'v' || turno == 'V') {

        printf ("BOA TARDE!!"); 
    
    } else if (turno == 'n' || turno == 'N') {

        printf ("BOA NOITE!!"); 

    } else {

        printf ("[ERRO] COMANDO INVALIDO, TENTE OUTRA VEZ");
    }

    
    return 0; 
}