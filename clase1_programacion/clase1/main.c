#include <stdio.h>
#include <stdlib.h>

int main(){
    // introducir 5 numeros y calcular su promedio
    int numero;
    int contador = 0;
    int total_n = 0 ;
    float promedio;

    for(contador = 0; contador < 5; contador++){
        printf("Ingrese un numero");
        scanf("%d", &numero);
        total_n = total_n + numero;
    }
    //promedio
    promedio = (float) total_n / contador;
    //imprimo
    printf("El promedio es: %f", promedio);

    return 0;
}
