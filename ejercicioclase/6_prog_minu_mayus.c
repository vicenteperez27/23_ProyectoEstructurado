/*----------------------------------------*/
/*nombre: vicente perez hernandez         */
/*fecha: 14/04/2018                       */
/*descripcion:programa que convierta una letra minuscula a mayuscula.*/
/*-----------------------------------------*/


/*declaracion de bibliotecas*/
#include<stdio.h>

const int tamanio=5;
/*declaracion de la funcion principal*/
int main(void)
{
char w;
char c;                                     /*declaracion de char*/
char array[tamanio];                        /*declaracion del arreglo[tamanio]*/
char arreglo[tamanio];
int index=0;

printf("ingresa una palbara en minuscula");/*declaracion del mensaje*/

while((c=getchar()) !='\n')                 /*declaracion del ciclo while*/
{                                           
  if (c>=97 && c<=122)                      /*declaracion del ciclo if iniciando de la primera letra minuscula a a z*/
   {
     /*validando unicamemnte caracteres: letras mayusculas*/
c=c-32;                                      
array[index]=c;                             /*declaracion del ciclo while[index]*/
index ++;                                   /*incremento de la variable*/
}
}
printf("\n");                               /*declaracion de salto de linea*/
for(int i=0; i<tamanio; i++)                /*inizializando ciclo for en la posicio i=0 y i menor al tamanio y el incremento*/
{
printf("%c",array[i]);                      /*mostrar el arreglo en la posicion que se indica*/
}
printf("\n");


printf("ingresa una palabra en mayuscula");

while((w=getchar()) !='\n')
{                               /*tarea cvonvertir mayuscula a miniscula*/
  if(w>=65 && w<=90)
   {
     /*validando unicamemnte caracteres: letras minusculas*/
    w=w+32;
   arreglo[index]=w;                        /*declaracion del arreglo[index]*/
    index ++;
    }
}
printf("\n\n");
for(int i=0; i<tamanio; i++)             /*declaracion del tamanio en la posicion i*/
{
printf("%c",arreglo[i]);
}
printf("\n\n");
return 0;                              /*fin de la copilacion*/
}                         
