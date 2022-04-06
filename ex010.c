#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    char usuario[10], senha [10];
    int res; 

    do {
    
        printf ("Usuario: ");
        scanf ("%s", &usuario); 
        printf ("Senha: ");
        scanf ("%s", &senha);
        res = strcmp(senha, usuario);
        
        if (res == 0) {
            
            printf ("A senha precisa ser diferente do usuario! Tente novamente \n\n");
        }
    
    } while (res == 0);

    printf ("Boa senha!");
     
    return 0; 
} 