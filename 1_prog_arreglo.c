
/*----------------------------------------*/
/*nombre: vicente perez hernandez         */
/*fecha: 14/04/2018                       */
/*descripcion: programa que muestre cuantas veces se repite un numero usando arreglo*/
/*-----------------------------------------*/


/*declaracion de bibliotecas*/

#include <stdio.h>
 
/*declaracion de la funcion principqal*/
int main(void){

	int arreglo [10],i,n,contador;                                                 /*declaracion de la variable*/

	contador=0;                                                                    /*leer contador*/

 

	for (i=0;i<10;i++){                                                            /*declaracion del ciclo for*/

		printf("\nDigite el %d numero de la lista: ",i);                       /*pide ingresar un numero*/

		scanf("%d",&arreglo[i]);                                               /*leer el numero en el arreglo*/

	}

	printf("Digite el numero que quiere saber cuantas veces se repite: ");         /*pide ingresar un numero que quiere saber cuantas veces se repite*/

	scanf("%d",&n);                                                                /*leer numero*/

	for (i=0;i<10;i++){                                                            /*declaracion del ciclo for*/

		if (n==arreglo[i]){                                                    /*declaracion si se cumple la condicion*/

			contador++;                                                    /*incremento*/

		}

	}

	printf("El elemento %d, se repite %d",n,contador);                             /*declaracion del numero que se repite*/

	return 0;                                                                      /*declaracion terminada*/

 
	}
