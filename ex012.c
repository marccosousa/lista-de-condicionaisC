#include <stdio.h>
#include <stdlib.h>

int main () {

    int anos = 0;
    float Pa = 80000, Pb = 200000;


    while (Pa < Pb) {

        Pa += Pa * 0.03;
        Pb += Pb * 0.015;
        anos++;

    } 

    printf ("test: %.0f, %.0f, %d", Pa, Pb, anos); 
    

    return 0;
}