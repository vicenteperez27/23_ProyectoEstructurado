
/*----------------------------------------*/
/*nombre: vicente perez hernandez         */
/*fecha: 14/04/2018                       */
/*descripcion:programa que muestre la declaración de constantes con #define y const y que muestre en pantalla los valores de las constantes.*/
/*-----------------------------------------*/


/*declaracion de bibliotecas*/

#include<stdio.h>

/*declaracion de constantes*/
/*no se reservan espacios de memoria*/
#define PI 3.1416                                                     /*declaracion de define*/
#define G 9.81                                                        /*declaracion de define*/
#define TAMANIO 10                                                    /*declaracion de define*/
#define MIN 0                                                         /*declaracion de define*/
#define MAX 100                                                       /*declaracion de define*/

/*implementacion de macro*/
#define SUMA(x,y) x+y                                                 /*declaracion de macro*/
#define RESTA(x,y) x-y                                                /*declaracion de macro*/
#define MULTI(x,y) x*y                                                /*declaracion de macro*/
#define DIV(x,y) x/y                                                  /*declaracion de macro*/
#define POTCUADRADO(X) X*X                                            /*declaracion de macro*/
#define POTCUBO(x) x*x*x                                              /*declaracion de macro*/

/*definir ciclos con macro*/
#define CICLOFOR(x,y) for(x=0; x<y; x++)

/*declaracion de constantes con cont*/             
/*se reservan espacios en memoria*/
const float pi=3.1416;                                                 /*declaracion de constante*/
const float g=9.81;                                                    /*declaracion de constante*/
const int tamanio=10;                                                  /*declaracion de constante*/
const int min=0;                                                       /*declaracion de constante*/
const int max=100;                                                     /*declaracion de constante*/
int main(void)
{

/*imprimir constantes #define*/
printf("El valor de PI:\n %f \n",PI);                                  /*declaracion de impresion del valor de constantes*/

/*imprimir macros*/
printf("Operacion SUMA\n %d \n",SUMA(3,4));                            /*declaracion de impresion del valor de la suma*/

/*imprimir constantes const*/
printf("El valor de pi:\n %f \n", pi);                                 /*declaracion de impresion del valor de pi*/            
/*utilizando las macros del ciclo*/

/*imprimir las constantes#define*/
printf("el valor de G\n %f  \n",G);                                    /*declaracion de impresion del valor de la gravedad*/  

/*imprimir las constante#define*/
printf("el valor tamanio\n %d \n",tamanio);                            /*declaracion de impresion del valor de tamanio*/  

/*imprimir las constantes#define*/
printf("el valor de min\n %d \n",min);                                 /*declaracion de impresion del valor de min*/  

/*imprimir las constantes#define*/
printf("el valor de max\n %d \n",max);                                 /*declaracion de impresion del valor de max*/  



int x;                                                                 /*declaracion de x*/
int y=10;                                                              /*declaracion de y que su valor va ser de 10*/
CICLOFOR(x,y)                                                          /*declarar ciclo for*/
{
printf("\n HOLA MUNDO...\n");
}

return 0;
}
