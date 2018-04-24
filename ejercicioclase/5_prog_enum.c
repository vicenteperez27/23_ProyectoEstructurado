
/*---------------------------------------------------------*/
/* Autor: Perez hernandez vicente                          */
/*Fecha:23/04/2018                                         */
/*Descripcion:programa que imprima  el enum                */
/*---------------------------------------------------------*/
#include <stdio.h>

/*declaracion de unum*/
/*tipo de indentificador{lista_de_identificadores};*/
/* tarea para el dia lunes:imprimir var1,var2,var3*/
enum DIAS{L,M,MI,J,V,S,D};                                         /*declarando dias*/
enum MESES{EN=1,FE,MAR,AB,MAY,JUN,JUL,AG,SE,OC,NO,DI};             /*declarando meses*/
enum FRUTAS{manzana,mango,durazno,pera,uva,pina};                  /*declarando frutas*/
enum PRECIOAUTO{NUEVO = 10,SEMINUEVO=-5,USADO,INSERVIBLE};         /*declaracion de variables mediante el uso de enum*/
/*enumeracion anonima*/
enum {PROG,MATEDIS,MATII,TGS,ELECT} var1,var2,var3;                /*declaracion de enum*/
int main (void)
{
  printf("%d ",USADO );                                      /*imprimiendo usado*/
  printf("%d ",var1 );                                       /*imprimiendo var 1*/
  printf("%d ",var2 );                                       /*imprimiendo var 2*/
  printf("%d ",var3 );                                       /*imprimiendo var 3*/
  printf("%d ",PROG );                                       /*imprimiendo PROG*/
  printf("%d ",MATII );                                      /*imprimiendo MATII*/


  for (enum MESES mes=EN; mes<=DI;mes++)                     /*declarando el ciclo for*/
   {
    printf("%d \n",mes );                                    /*imprimiendo el mes*/
    switch (mes)                                             /*declaracion del uso se switch*/
    {
      case EN: printf("\n Enero\n");                         /*declaracion de case e impresion del mes*/
             break;
      case OC: printf("\n Octubre\n");
            break;
    }
  }
  return 0;                                                 /*copilacion terminada*/
}
