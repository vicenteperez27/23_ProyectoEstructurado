/*------------------------------------------------------------------- */
/* Autor: Vicente Perez Hernandez                                     */
/* Fecha: 24/04/2018                                                  */
/* email: vicenteperezhernandez27@gmail.com                           */
/* Descripcion:programa para convertir de un numero binario a decimal */
/*--------------------------------------------------------------------*/

/*declaracion de bibliotecas*/
#include <stdio.h>
#define Tamanio 35

void Recibe( int a[]);                        /*declaracion de tipo void, devuelven un valor,Este valor se especifica explícitamente en la sentencia return*/
void Imprime( int b[]);                       /*declaracion de tipo void, devuelven un valor,Este valor se especifica explícitamente en la sentencia return*/                      

int main()                        
{
int arreglo[Tamanio];                        /*declaracion del arreglo[Tamaño]*/

int evaluar;                                 /*declaracion de evaluacion*/


Recibe(arreglo);                             /*recibiendo el arreglo*/
Imprime(arreglo);
                                         /*impresion del arreglo*/
return 0;                                  /*fin de la sentencia return*/                                

}

void Recibe( int a[])                       /*declaracion del tipo int void*/
{
int i = 0;                                  /*declaracion del int=0*/

for( i = 0; i < Tamanio; i++ )                /*declaracion del ciclo for*/
a[i] = ' ';

printf("\n Ingresa un numero binario: \n");      /*ingreso de un numero binario*/

i = 0;

while ( (a[i++] = getchar()) != '\n' && Tamanio > i );   /*funcion while*/
printf("\n");
}


void Imprime( int b[] )                       /*declaracion de la sentencia void imprime*/

{

int i;                                       /*declaracion de la variable i*/
int potencia = 1;                            /*declaracion de la potencia igual a 1*/
int decimal = 0;                             /*declaracion del numero decimal iniciano en 0*/
int inicio;                                  /*declaracion del inicio*/


for ( i = Tamanio - 1; i >= 0; i-- )          /*inicia el ciclo for*/
{
if ( ' ' != b[i] )                            /*si b esta en la posicion cero*/
{
inicio = i;                                   /*declaracion de la funcion inicio con la posicion de la potencia*/
break;
}
}


int valido = 1;

 for ( i = inicio; i >= 0; i-- )
{
switch( b[i] )                              /*declaracion de la funcion switch*/
{
case '0':                                   /*posicion ceo*/
decimal += 0*potencia;                      /*realizamos la operacion en  la potencia 0*/
potencia *= 2;                               /*posicion 2*/
break;
case '1':
decimal += 1*potencia;
potencia *= 2;
break;
default:
if ( '\n' != b[i])
{
printf("\n la cadena no es valido\n");        /*declaracion emitiento un mensaje que la cadena no es valida*/
valido = 0;

printf("\nEl caracter no es valido: ");        /*declaracion del caracter incorrecto*/
putchar(b[i]);
printf("\n");
}
break;
}
}

if ( 1 == valido )                              /*declaracion de 1 es valido es decir si es igual o equivalente al numero que corresponde*/
printf("\nEl valor decimal es: %d\n", decimal); /*impresion del valor convertido*/
else                                               /*declaracion si no es valido*/
printf("no es valido");                           /*no es valido*/

}  
