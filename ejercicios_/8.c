#include <stdio.h>
#include <stdlib.h>
/*
8) Diseñar un programa que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.
(b*h) /2
*/

int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

    int base, altura;
    float superficie;

    printf("Ingrese La base");
    scanf("%d", &base);

    superficie = (base * altura)/2;

    printf("La superficie es: %f", superficie);

	return 0;
}