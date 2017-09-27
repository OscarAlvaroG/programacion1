#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

int menu();

void inicializarArray(eProgramador[], int);
void mostrarProgramadores(eProgramador[], int);
void mostrarProgramador(eProgramador[], int);
void altaProgramador(eProgramador[],int);
int buscarLibre(eProgramador[], int);
int buscarProgramador(int, eProgramador[], int);
void bajaProgramador(int, eProgramador[], int);
void modificaProgramador(eProgramador[], int);





int main()
{
    int salir = 1;

    eProgramador eqiupo[TAM];







    return 0;
}




void buscarLibre(eProgramador lista[], int TAM){
    int indice = -1;
    int i;
    for(i=0;i<TAM;i++){
        if(lista[i].estado == 0){
            indice = 1;
            break;
        }
    }//fin for

    return indice;
}//fin funcion BuscarLibre

void altaProgramador(eProgramador lista[], int TAM){

    eProgramador nuevoProgramador;
    int lugar;
    int id;
    int encuentra;

    lugar = buscarLibre(lista, TAM);

    if(lugar == -1){
        printf("\n\n No hay lugar en el Sistema. \n\n");
    } else {
        printf("\n Ingrese ID: ");
        scanf("%d", &id);
        encuentra = buscarProgramador(id, lista, TAM);

        if(encuentra != -1){
            printf("\n El ID: %d , ya se encuentra registrado.\n\n", id);
        } else {
            nuevoProgramador.id = id;
            printf("\nIngrese Nombre: ");
            fflush(stdin);
            gets(nuevoProgramador.nombre);

            printf("\nIngrese Categoria: a: Senior \t b:SemiSenior \t c:Junior");
            fflush(stdin);
            scanf("%c", &nuevoProgramador.categoria);

            printf("\nIngrese Proyecto:");
            fflush(stdin);
            scanf("%c", &nuevoProgramador.proyecto);
            nuevoProgramador.estado = 1;
            lista[lugar] = nuevoProgramador;
        }
    }//fin else
}//fin funcion

void modificaProgramador(eProgramador lista[], int TAM){
    int id, indice, confirm;
    printf("\nIngrese ID:");
    scanf("%d", &id);

    indice = buscarProgramador(id, lista, TAM);

    if(indice != -1){
        mostrarProgramador(lista[indice]);
        printf("\n Ingrese Nueva Categoria:");
        fflush(stdin);
        lista[indice].categoria = getchar();
        printf("\n Categforia Modificada.\n");
    } else {
        printf("\n no se encuentra el ID.");
        getch();
    }//fin else

}//fin modificaProgramador


void ordenarProgramadores(eProgramador lista[], int TAM){

    eProgramador aux;
    int i,j;
    for(i=0 ; i<TAM ; i++){
        for(j=i+1; j<TAM; j++){
            if(lista[i].id > lista[j].id){
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = lista[i];
            }
        }//fin for j
    }//fin for i
}//fin funcion

void buscaProgramador(int id, eProgramador lista[], int TAM ){
    int indice = -1;
    int i;
    for(i=0; i<TAM; i++){
        if(lista[i]==id && lista[i].estado == 1){
            indice = i;
            break;
        }
    }//fin for
    return indice;
}//fin funcionBuscarP


