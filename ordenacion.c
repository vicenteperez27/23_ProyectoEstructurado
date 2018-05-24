/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numAutos;

int * ordenarAscendente(Auto listaAuto[], int arrayTemp[])
{
  for(int i = 0; i < numAutos; i++)
  {
    for(int j = i + 1; j < numAutos; j++)
    {
      if(strcmp(listaAuto[arrayTemp[i]].marca, listaAuto[arrayTemp[j]].marca) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Auto listaAuto[], int arrayTemp[])
{
  for(int i = 0; i < numAutos; i++)
  {
    for(int j = i + 1; j < numAutos; j++)
    {
      if(strcmp(listaAuto[arrayTemp[i]].marca, listaAuto[arrayTemp[j]].marca) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
