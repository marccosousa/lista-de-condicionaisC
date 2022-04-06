#include <stdio.h>
#include <stdlib.h>

int main () {

    float salario, reajuste, v_aumento; 
    int aumento;  

    printf ("Digite o seu salario: ");
    scanf ("%f", &salario);

    if (salario <= 280) {

        reajuste = salario * 1.2;
        v_aumento = reajuste - salario;
        aumento = 20;
    
    } else if (salario > 280 && salario <= 700) {

        reajuste = salario * 1.15;
        v_aumento = reajuste - salario; 
        aumento = 15;

    } else if (salario > 700 && salario <= 1500) {

        reajuste = salario * 1.10; 
        v_aumento = reajuste - salario;
        aumento = 10; 
         
    } else {

       reajuste = salario * 1.05;
       v_aumento = reajuste - salario;
       aumento = 5;
        
    }
    
    printf ("Salario: R$%.2f \n", salario);
    printf ("Aumento de %d%% \n", aumento); 
    printf ("Valor do aumento: R$%.2f \n", v_aumento);
    printf ("Novo salario: R$%.2f \n", reajuste);

    return  0; 
}