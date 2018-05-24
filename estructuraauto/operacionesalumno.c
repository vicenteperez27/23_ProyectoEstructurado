/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */

#include "colores.h"
#include "prototipofunciones.h"
#include "enum.h"

/* Variable global inicializada en principal.c */
extern int numAutos;



Auto crearNuevoAuto(void)
{
  Auto autos;

  printf(_TBLANCO _NEGRITA  "Introduce la marca del auto:"        _NNEGRITA _TVERDE);
  fgets(autos.marca, TAM_MARCA, stdin);
  strcpy(autos.marca, strtok(autos.marca, "\n"));

  printf(_TBLANCO _NEGRITA "Introduce la placa del auto: "      _NNEGRITA _TVERDE);
  fgets(autos.placa, TAM_PLACA, stdin);                                    /* Solicita el nombre del alumno al usuario          */
  strcpy(autos.placa, strtok(autos.placa, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el modelo del auto: "      _NNEGRITA _TVERDE);
  fgets(autos.modelo, TAM_MODE, stdin);                                 /* Solicita la matricula el alumno al usuario        */
  strcpy(autos.modelo, strtok(autos.modelo, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el color del auto: " _NNEGRITA _TVERDE);
  fgets(autos.color, TAM_COLOR, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(autos.color, strtok(autos.color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */


  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

  printf(_TBLANCO _NEGRITA "Introduce el motor del auto: "            _NNEGRITA _TVERDE);
  scanf("%d", &autos.motor);
  printf("\n\n");

  return autos;
}




void mostrarListaAuto(Auto listaAuto[], int ordenar)
{
  int arrayTemp[numAutos];
  for(int i = 0; i < numAutos; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaAuto, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaAuto, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numAutos; i++)
  {
    mostrarAuto(listaAuto[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarAuto(Auto listaAuto[])
{
  int opcionBuscar;
  char marcaBuscar[TAM_MARCA];            /* Almacena el nombre a buscar dentro de la estructura                */
	char modeloBuscar[TAM_MODE];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar auto por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xMarca:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre del alumno: ");
        fgets(marcaBuscar, TAM_MARCA, stdin);
        strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

        for(int i = 0; i < numAutos; i++)
            if(strcmp(marcaBuscar, listaAuto[i].marca) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarAuto(listaAuto[i]);
            }
            break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
          fgets(modeloBuscar, TAM_MODE, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numAutos; i++)
          if(strcmp(modeloBuscar, listaAuto[i].modelo) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarAuto(listaAuto[i]);
          }
          break;
  }
}



void actualizarAuto(Auto listaAuto[])
{
  int opcionBuscar;
  char marcaBuscar[TAM_MARCA];            /* Almacena el nombre a buscar dentro de la estructura                */
	char modeloBuscar[TAM_MODE];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar el alumno a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(marcaBuscar, TAM_MARCA, stdin);
          strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

          for(int i = 0; i < numAutos; i++)
          {
              if(strcmp(marcaBuscar, listaAuto[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  printf("\n\n");

                  listaAuto[i] = crearNuevoAuto();

                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  break;
              }

          }



          break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la modelo: ");
          fgets(modeloBuscar, 50, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numAutos; i++)
          {
              if(strcmp(modeloBuscar, listaAuto[i].modelo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  printf("\n\n");

                  listaAuto[i] = crearNuevoAuto();

                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  break;
              }
          }

          break;
  }
}


void eliminarAuto(Auto listaAuto[])
{
  int opcionBuscar;
  char marcaBuscar[TAM_MARCA];            /* Almacena el nombre a buscar dentro de la estructura                */
  char modeloBuscar[TAM_MODE];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar auto por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. marca\n");
  printf(_TBLANCO   _NEGRITA "2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(marcaBuscar, TAM_MARCA, stdin);
          strcpy(marcaBuscar, strtok(marcaBuscar, "\n"));

          for(int i = 0; i < numAutos; i++)
          {
              if(strcmp(marcaBuscar, listaAuto[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "  listaAuto[numAutos-1].placa      = '\n'; \n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;

                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaAuto));
                    listaAuto = eliminarUnAuto(listaAuto, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
          fgets(modeloBuscar, TAM_MODE, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numAutos; i++)
          {
              if(strcmp(modeloBuscar, listaAuto[i].modelo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarAuto(listaAuto[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaAuto = eliminarUnAuto(listaAuto, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Auto * eliminarUnAuto(Auto listaAuto[], int posicion)
{
  if(posicion < (numAutos - 1))
  {
    for(int j = posicion; j < numAutos-1; j++)
    {
      strcpy(listaAuto[j].marca,     listaAuto[j+1].marca);
      strcpy(listaAuto[j].modelo,    listaAuto[j+1].modelo);
      listaAuto[j].motor =            listaAuto[j+1].motor;
      strcpy(listaAuto[j].placa,       listaAuto[j+1].placa);
      strcpy(listaAuto[j].color,     listaAuto[j+1].color);

    }
  }

  strcpy(listaAuto[numAutos-1].marca,       "");
  strcpy(listaAuto[numAutos-1].modelo,      "");
  strcpy(listaAuto[numAutos-1].placa,       "");
  strcpy(listaAuto[numAutos-1].color,       "");
  listaAuto[numAutos-1].motor =  -1;

  numAutos--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaAuto;
}
