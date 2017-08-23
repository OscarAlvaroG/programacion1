#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

//Ingresar 5 números y calcular su media
    int contador = 0;
    int numero;
    int acumulador = 0;

    while(contador<5){
        contador++;

        printf("Ingrese un numero");
        scanf("%d", &numero);
        acumulador = acumulador + numero;
    }

    media. = acumulador / contador;

    printf("El promedio de los numeros es: %d", promedio);
    
	return 0;
}