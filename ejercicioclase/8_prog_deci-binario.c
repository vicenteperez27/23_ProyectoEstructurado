/*------------------------------------------------------------*/
/* Autor: Vicente Perez Hernandez                             */
/* Fecha: 24/04/2018                                          */
/* email: vicenteperezhernandez27@gmail.com                   */
/* Descripcion:programa para convertir de un numero decimal a binario*/
/*------------------------------------------------------------*/


/*declaracion de bibliotecas*/
#include <stdio.h>

/*declaracion de la funcion principal*/

void binario (int n);             /*declaracion de tipo void, devuelven un valor. Este valor se especifica explícitamente en la sentencia return*/                       

int main(void)               /*declaracion de tipo void, devuelven un valor. Este valor se especifica explícitamente en la sentencia return*/

{
int numero;                    /*declaracion del numero*/
do                             /*inicializacion de do while*/
{
printf("inserte un número:\n");       /*declaracion de ingreso de un numero decimal*/
scanf("%i",&numero);                  /*leer numero*/
printf("\n");                          /*declaracion de salto de linea*/
printf("el número convertido a binario es:");   /*declaracion mensaje del numero convertido a binario*/
}
while (numero < 0);                             /*fin del ciclo while*/

binario(numero);                                 /*declaracion del numero binario*/

return 0;	                         /*termina la sentencia return*/                                  

}
void binario(int n){                   /*declaracion del void binario*/
if(n>1) binario(n/2);                   /*declaracion del if y dividir para obterner el resultado*/
printf("%i",n%2);                       /*imprimiento resultado*/
                                                
}

