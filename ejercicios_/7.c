#include <stdio.h>
#include <stdlib.h>
/*
7) Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado.

longitud 2*3,1416 * radio;
pi * r*r
*/

int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

    int radio;
    float longitud;
    float area;

    printf("Ingrese el radio");
    scanf("%d", &radio);

    longitud = 2*3,1416 * radio;
    area = 3,1416 * radio * radio;

    //imprimo
    printf("La longitud es: %f", longitud );
    printf("El area es: %f",area );


	return 0;
}