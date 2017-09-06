#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    char apellido[20];
    //estimar la cantidad de caracteres en esta variable
    int tam=5;
    char apellidoNombre[tam];
    int c_nom;
    int c_ape;

    printf("Nombre: ");
    gets(nombre);

    printf("Apellido: ");
    gets(apellido);
    //cantidad de espacios
    c_nom = strlen(nombre);
    c_ape = strlen(apellido);

    tam = (c_nom + c_ape)+5;

    printf("TAM : %d \n", tam);
    strcat(apellidoNombre, nombre);
    strcat(apellidoNombre, apellido);

    printf("\n%s", apellidoNombre);


    return 0;
}
