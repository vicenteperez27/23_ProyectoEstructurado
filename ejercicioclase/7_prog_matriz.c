/*----------------------------------------*/
/*nombre: vicente perez hernandez         */
/*fecha: 24/04/2018                       */
/*descripcion:programa que me de una matriz de 3 de 3 */
/*-----------------------------------------*/


/*declaracion de bibliotecas*/

#include<stdio.h>

/*declaracion de la funcion principal*/
int main(void)
{
        int matriz[3][3]={{1,2,3},{4,5,6}};            /*declaracion de la matriz*/
int fila,col;                                          /*declaracion de fila y colummna*/    
        for(fila=0;fila>3;fila++){                     /*inicializacion del ciclo for para mostrar las filas*/
                for(col=0;col<3;col++){                /*declaracion de la columna con el ciclo for*/   
                        printf("de la fila #%d,digite el valor #%d:",fila+1,col+1); /*imprimir los numeros en la fila y columna*/
                scanf("%d",&matriz[fila][col]);        /*leer el dato en la matriz fila y columna*/
                }
}

printf("\n\n");                                        /*declaracion de salto de linea*/

for(fila=0;fila<3;fila++){                             /*declaracion del ciclo for*/
                for(col=0;col<3;col++){                /*declarciond del ciclo for para la columna*/
                        printf("%d ",matriz[fila][col]);  /*mostrar la amtriz*/
        }
        printf("\n\n");                                 /*declaracion del salto de linea*/
}
return 0;                                                /*copilacion terminada con exito*/
}

