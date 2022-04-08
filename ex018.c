#include <stdio.h>
#include <stdlib.h>

int main () {

int num1, num2, c, soma=0;

    printf ("Digite o 1a numero: ");
    scanf ("%d", &num1);    
    printf ("Digite o 2a numero: ");
    scanf ("%d", &num2);

    if (num1 > num2) {
        for (c = num1; c >= num2; c--) {
            printf ("%d..\n", c);
            soma += c; // linha adicionada para exercício;
        }
    
    } else {
        for (c = num1; c <= num2; c++) {
            printf ("%d..\n", c); 
            soma += c; // linha adicionada para exercício;       
        }
    }
    
    printf ("A soma entre os numeros do intervalo e: %d", soma);
    return 0;
}