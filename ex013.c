#include <stdio.h>
#include <stdlib.h>

int main () {
    
    double populacao, taxa_crescimento;
    char continua = 's'; 
    
    do {
            printf ("Populacao inicial: ");
            scanf ("%lf", &populacao);
            printf ("Taxa de crescimento anual: ");
            scanf ("%lf", &taxa_crescimento);

            if (populacao <= 0 || taxa_crescimento <= 0){
                printf ("Populacao ou taxa de crescimento invalida. Tente novamente.\n\n");
            }

            printf ("Deseja continuar? [S] ou [N]? ");
            rewind(stdin);
            scanf ("%c", &continua);
            
    } while (continua == 's' || continua == 'S');

    printf ("%lf", populacao);
               
    return 0; 
}