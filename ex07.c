#include <stdio.h>
#include <stdlib.h>

int main () {

    float salhora, horasmes, salario, inss, fgts, descontos, n_salario, ir;
    
    printf ("Salario/H? ");
    scanf ("%f", &salhora);
    printf ("Horas/Mes? "); 
    scanf ("%f", &horasmes);

    salario = salhora * horasmes;

    if (salario <= 900) {

        ir = 0;
        inss = salario - salario * 0.9; // valor do desconto do inss 
        descontos = inss; // descontos totais 
        n_salario = salario - descontos;
        fgts = salario - salario * 0.89; 
                         
    } else if (salario <= 1500) {

        ir = salario - salario * 0.95; // valor do desconto do ir
        inss = salario - salario * 0.9; // valor do desconto do inss 
        descontos = inss + ir; // descontos totais 
        n_salario = salario - descontos;
        fgts = salario - salario * 0.89;
        
    } else if (salario <= 2500) { 

        ir = salario - salario * 0.9; // valor do desconto do ir 
        inss = salario - salario * 0.9; // valor do desconto do inss 
        descontos = inss + ir; // descontos totais 
        n_salario = salario - descontos;
        fgts = salario - salario * 0.89;

    } else {

        ir = salario - salario * 0.8; // valor do desconto do ir 
        inss = salario - salario * 0.9; // valor do desconto do inss 
        descontos = inss + ir; // descontos totais 
        n_salario = salario - descontos;
        fgts = salario - salario * 0.89;

    } 

    printf ("SALARIO BRUTO                            R$%.2f \n", salario);
    printf ("FGTS (11%% SEM DESCONTO NO SALARIO):      R$%.2f \n", fgts);
    printf ("IR (5%%),                               - R$%.2f \n", ir);
    printf ("INSS (10%%)                             - R$%.2f \n", inss);
    printf ("Total de descontos:                      R$%2.f \n\n", descontos);
    printf ("Salario liquido:                       R$%.2f", salario - descontos); 

    
    return 0; 
}