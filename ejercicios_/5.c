#include <stdio.h>
#include <stdlib.h>
/*
5) Escribir el programa necesario para calcular y mostrar el cuadrado de un número. 
El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
*/

int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

    int numero, cuadrado;

    printf("Ingrese Un numero");
    scanf("%d", %numero);
    while(numero==0){
        printf("ERROR, debe ingresar un numero mayor que Cero");
        scanf("%d", %numero);
    }

    cuadrado = numero * numero;

    printf("El cuadrado del numero es: %d",mumero);

	return 0;
}