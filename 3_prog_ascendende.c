/*----------------------------------------*/
/*nombre: vicente perez hernandez         */
/*fecha: 14/04/2018                       */
/*descripcion:un programa que ordene un arreglo de números enteros de forma ascendente */
/*-----------------------------------------*/




/*declaracion de biblioteca*/
#inlude <stdio.h>

/*declaracion de la funcion principal*/
int main(void)
{

	int aux;                                                 /*declaracion de la funcion auxiliar*/
	int dim;                                                 /*declaracion de la funcion dimension*/                                                 

	int ind;                                                 /*declaracion de la funcion indice*/

	int j;                                                   /*declaracion de la funcion j*/

	int num[ARREGLO_MAX];                                    /*declaracion del arreglo*/

	dim = 6;                                                 /*declaracion de la dimension*/

	for (ind=0;ind<=dim-1;ind+=1) {                          /*declaracion del ciclo for*/

printf("dame el numero\n");                                      /*pide ingresar un numero*/
scanf("%i",&num[ind]);                                           /*leer num*/

	}

	for (j=1;j<=dim-1;j+=1) {                                /*declaracion de variables para el ciclo for*/

		for (ind=0;ind<=dim-2;ind+=1) {                  /*declaracion de la dimension en el ciclo for*/

			if (num[ind]>num[ind+1]) {               /*declaracion si se cumple la condicion*/

				aux = num[ind+1];                /*declaracion del auxiliar*/

				num[ind+1] = num[ind];           /*declaracion del indice*/

				num[ind] = aux;                  /*declaracion del auxiliar en el indice*/

			}

		}


	}

	for (ind=0;ind<=dim-1;ind+=1) {                         /*declaracion del ciclo for con la dimension*/

		printf("%i\n",num[ind]);                         /*leer el numero del indice*/

	}

	return 0;                                                /*copilacion termianda*/

}



