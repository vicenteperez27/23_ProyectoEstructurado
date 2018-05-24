/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    A U T O S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de autos");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de autos");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de autos Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de autos Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Auto");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Auto");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Auto");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO      _NEGRITA);
  printf("%-20.25s|%-12s|%-18s|%-18s|%-18s|\t", " PLACA","MOTOR", "MODELO","COLOR","MARCA");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarAuto(Auto autos)
{
  printf(_TBLANCO   _NEGRITA);
  printf("%-20.25s|%-12d|%-18s|%-18s|%-18s|\t", autos.placa, autos.motor, autos.modelo, autos.color, autos.marca);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO    _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
