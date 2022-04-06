#include <stdio.h>
#include <math.h>

//1. Faça um Programa que leia três números e mostre o maior deles.
//2. Faça um Programa que leia três números e mostre o maior e o menor deles. 


int main () {

    float valores, maior, menor;
    int c;

    for (c = 0; c < 3; c++) {

        printf ("Escreva o %da numero: \n", c+1);
        scanf ("%f", &valores);

        if (c == 0) {

            maior = valores;
            menor = valores;
        
        } else if (valores > maior) {

            maior = valores;
        
        } else if (valores < menor) {

            menor = valores;
        
        }
                
    }

    printf ("maior valor: %.2f \n", maior); 
    printf ("menor valor: %.2f", menor); 
    
        return 0;
}