#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    system("cls"); //limpio pantalla

	int num1;
	int num2;
	int resultado;

	printf("\nIngrese 1 numero: ");
	scanf("%d",&num1);

	//validaciones
	while(num1==0){
		printf("\nIngrese 1 numero: ");
		scanf("%d",&num1);
	}
	printf("\nIngrese 2 numero: ");
	scanf("%d",&num2);

	while(num2==0){
		printf("\nIngrese 2 numero: ");
		scanf("%d",&num2);
	}

	resultado=num1-num2;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	} else if(resultado<0){
		printf("\nResultado negativo \n");
	}
    printf("______________________________________\n\n\n\n");

	return 0;
}
