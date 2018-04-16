/*---------------------------------------------*/
/*autor:vicente perez hernandez                */
/*fecha:14/04/2018                             */ 
/*descripcion: programa que encuentre el numero menor de un arreglo unidimensional*/


/*declaracion de bibliotecas*/

#include<stdio.h>

/*declaracion de la funcion principal*/
int  main(void)

{
int i;                                                                           /*declaracion de la variable i*/
int arreglo[10];                                                                 /*declaracion del arreglo*/
int menor=0;                                                                     /*declaracion del menor*/

for(i=0;i<10;i++){                                                               /*eclaracion del ciclo for*/

printf("ingrese diez numeros enteros: %d\n",i+1);                                /*ingrese diez numeros*/
scanf("%d",&arreglo[i]);                                                         /*leer arreglo en la posicion de i*/

}
menor=arreglo[0];                  

for(i=0;i<10;i++){                                                               /*for si es menor a 10*/

if(arreglo[i]<menor){
menor=arreglo[i];
}
}
{

printf("El numero menor es: %d\n",menor);                                       /*declaracion de impresion en pantalla*/
return 0;                                                                       /*copilacion terminada*/
}
}
