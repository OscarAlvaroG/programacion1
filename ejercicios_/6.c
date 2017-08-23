#include <stdio.h>
#include <stdlib.h>
/*
6) De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero
*/

int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

    int numero;
    int c_neg = 0;
    int c_pos = 0;
    int contador = 0;

    while(numero<10){
        contador++;
        printf("Ingrese un numero");
        scanf("%d", %numero);

        if(numero<0){
            c_neg++;
        } else if(numero>0){
            c_pos++;
        }
    }//fin while

    printf("Se encontraron %d numeros positivos",mumero);
    printf("Se encontraron %d numeros negativos",mumero);

	return 0;
}