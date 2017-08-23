#include <stdio.h>
#include <stdlib.h>

/*
4) Escribir un programa que realice las siguientes acciones:
    •   Limpie la pantalla
    •   Declare 2 variables y les asigne sendos valores
    •   Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor que cero o "Resultado negativo" si es menor que cero
*/

int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla
    
    int contador = 0;
    int numero;
    int c_negativos = 0;
    int c_positivos = 0;
    int resultado;

    while(contador<10){
    	contador++;

    	printf("%d\n", "Ingrese Un Numero" );
    	scanf("%d", &numero);
    	//cuento positivos y negativos
    	if(numero<0){
    		c_negativos++
    	} else if(numero>0){
    		c_positivos++
    	}
    }
    printf("Se encontraron %d positivos", c_positivos );
    printf("Se encontraron %d negativos", c_negativos );
    
	return 0;
}