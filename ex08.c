#include <stdio.h>
#include <stdlib.h>

int main () {

    float lado1, lado2, lado3; 

    printf ("Primeiro lado: ");
    scanf ("%f", &lado1);
    printf ("Segundo lado: ");
    scanf ("%f", &lado2);
    printf ("Terceiro lado: ");
    scanf ("%f", &lado3);

    if (lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado2 + lado3 > lado1) {

        if (lado1 == lado2 && lado2 == lado3) {

            printf ("Triangulo Equilatero!");
        
        } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {

            printf ("Triangulo Isosceles!");
        
        } else {

            printf ("Triangulo Escaleno!");
        } 
            
    } else {

        printf ("Nao eh um triangulo! TENTE OUTRA VEZ!");
    }
    return 0;

}