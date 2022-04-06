#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    char nome[10], sexo = 'a', eCivil = 'a'; 
    int qNome = 0, idade = -1;
    float salario = -1; 
    
    while (qNome <= 3) {
        printf ("Digite seu nome: ");
        scanf ("%s", &nome);
        qNome = strlen(nome);

        if (qNome <=3 ) {
            printf ("Nome invalido, digite novamente!\n\n");
        }
    }

    while (idade < 0 || idade > 150) {
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        
        if (idade < 0 || idade > 150) {
            printf ("Idade invalida, digite novamente!\n\n");
        }
    }

    while (salario < 0) {
        printf ("Digite seu salario: ");
        scanf ("%f", &salario); 

        if (salario < 0) {
            printf ("Salario invalido, digite novamente!\n\n");

        }       
    }

    while (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F') {
        printf ("Digite seu sexo (M - MASCULINO / F - FEMININO): ");
        scanf ("%s", &sexo);

       if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F') {
           printf ("Sexo invalido, digite novamente!\n\n");
        
        }
    }

    while (eCivil != 's' && eCivil != 'S' && eCivil != 'c' && eCivil != 'C' && eCivil != 'd'
          && eCivil != 'D' && eCivil != 'v' && eCivil != 'V') {
            
        printf ("Digite seu estado civil... \n");
        printf ("S - Solteiro / C - CASADO / D - DIVORCIADO / V - VIUVO): ");
        scanf ("%s", &eCivil);

        if (eCivil != 's' && eCivil != 'S' && eCivil != 'c' && eCivil != 'C' && eCivil != 'd'
        && eCivil != 'D' && eCivil != 'v' && eCivil != 'V') {

            printf ("Estado civil invalido, digite novamente!\n\n");
        }
    }

     
    return 0;
}