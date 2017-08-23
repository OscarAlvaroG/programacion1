#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

/*Escribir  un programa que realice las siguientes acciones
    •   Limpie la pantalla
    •   Asigne a 2 variables numero1 y numero2 valores distintos de cero
    •   Efectúe el producto de dichas variables
    •   Muestre el resultado pos pantalla
    •   Obtenga el cuadrado de numero1 y lo muestre par pantalla
*/

    int numero1, numero2, cuadrado, producto;

    printf("Ingrese un numero");
    scanf("%d",&numero1);

    while(numero1==0){
        printf("Ingrese un numero");
        scanf("%d",&numero1);
    }

    while(numero2==0){
        printf("Ingrese otro numero");
        scanf("%d",&numero2);
    }

    producto = numero1*numero2;
    cuadrado1 = numero1 * numero1;

    printf("El producto es: %d",producto );
    printf("El cuadrado de Nº1 es : %d", cuadrado);
 
	return 0;
}