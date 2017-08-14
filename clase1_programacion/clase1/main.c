#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables
    int numero;
    int contador = 0;
    int total_n = 0;
    float promedio;
    //bucle de 5 numeros
    while(contador<5){
        contador++;
        printf("Ingrese un numero");
        scanf("%d", &numero);
        total_n = total_n + numero;
    }
    // imprimo en pantalla
    promedio = (float)total_n / contador;

    printf("El promedio es: %.2f, total de numeros %i, cantidad de Numeros: %i", promedio, total_n, contador);

    return 0;
}
