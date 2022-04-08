#include <stdio.h>
#include <stdlib.h>

int main () {

    float num1, num2;
    int res; 
    
    printf ("Digite o primeiro valor: ");
    scanf ("%f", &num1);
    printf ("Digite o segundo valor: ");
    scanf ("%f", &num2); 

    printf ("Menu: \n[1] SOMAR \n[2] SUBTRAIR  \n[3] MULTIPLICAR  \n[4] DIVIDIR ");
    scanf ("%d", &res);

    switch (res) {
        case 1: 
            printf ("%.2f + %.2f = %.2f", num1, num2, num1+num2);
            break;
        case 2: 
            printf ("%.2f - %.2f = %.2f", num1, num2, num1-num2);
            break;
        case 3: 
            printf ("%.2f x %.2f = %.2f", num1, num2, num1*num2);
            break;
        case 4: 
            printf ("%.2f / %.2f = %.2f", num1, num2, num1/num2);
            break;
        default:
            printf ("Opcao invalida, tente novamente."); 
    }

       

    return 0;
}