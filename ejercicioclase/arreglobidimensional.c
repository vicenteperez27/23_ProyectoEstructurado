
#include <stdio.h>
#include <stdlib.h>
/*efinicion de constantes*/
 #define ROW 3       /*numero de filas de la matriz*/
 #define COL 3
#define MAX 100
 int main(void)
 {
   int array[ROW][COL];
/*inicializamos ela array con valores enteros alearios 1-100*/
   for(int i=0; i<ROW; i++) /*ciclo que controla las filas del array*/
   {
     /*asignacion de datos del array*/
     for(int  j=0; j<COL; j++) /*ciclo que controla las columnas del array*/
     {
       /*asignacion de datos del array*/
       /*utilizar la funcion sacnf() para solicitar datos al usuario*/

       /*utilizar la funcion rand() para obtener datos de forma aleatoria*/
       /*la funcion se encuentra definida dentro de la biblioteca stdlib.h*/

       array[i][j]= rand() % (MAX+1);
       /*tarea: el dia viernes 27 de abril*/
       /*generar valores aleatorios de tipo flotante antre 0 - 1000*/
     }
   }
   printf("\x1b[33m datos aleatorios de la matriz:array[%d][%d]\n",ROW,COL);

printf("{\n");
   for(int i=0; i<ROW; i++) /*ciclo que controla las filas del array*/
   {
     printf("{")
     /*asignacion de datos del array*/
     for(int  j=0; j<COL; j++) /*ciclo que controla las columnas del array*/
     {
       printf("%d ",array[i][j]);
     }
     printf("}\n");
   }
   printf("}\n");
   return 0;
 }
