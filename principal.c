/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 26/04/2018                                     */
/* Fecha actualizacion: 20/05/2018                                */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colres            */
#include "enum.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                       /* Los #define estan en el archivo prototipofunciones.h                */

int numAutos;                        /* Variable global: se define aqui en el main, pero se utiliza,        */
                                       /* manteniendo su valor en operacionesAlumno.c y ordenacion.c          */

int main(void)
{
  Auto listaAuto[TOTAL_AUTO];    /* Declaracion de una variable de arreglo de estructura alumno[]       */
	int opcion;                          /* Variable que ontrola las opciones del menu principal.               */

	do{
    menuPrincipal();                   /* Se llama (invoca) a la funcion menuPrincipal() implementada en      */
                                       /* operacionespantalla.c                                               */

		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     A U T O S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de autos: " _TVERDE);
							scanf("%d",&numAutos);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numAutos; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                listaAuto[i] = crearNuevoAuto();   /* Se invoca a la funcion crearNuevoAlumno() implementada en operacionesAlumno.c  */
              }
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    A U T O S\n\n");
              mostrarListaAuto(listaAuto, 0);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaAuto(listaAuto, 1);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaAuto(listaAuto, 2);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesAlumno.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarAuto(listaAuto);               /* Se invoca a la funcion buscarAlumno() implementada en operacionesAlumno.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarAuto(listaAuto);           /* Se invoca a la funcion actualizarAlumno() implementada en operacionesAlumno.c  */
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarAuto(listaAuto);             /* Se invoca a la funcion eliminarAlumno() implementada en operacionesAlumno.c    */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* Antes de terminar la ejecucion del programa, limpia la pantalla */
							exit(0);                                 /* Termina la ejecucion del programa                               */
		}
	}while(opcion != SALIR);

	return 0;
}
