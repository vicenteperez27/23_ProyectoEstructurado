/*----------------------------------------------------------------*/
/* Autor: Pedro Gabriel Rolando																	  */
/* E-mail: rolando.pedro.gabriel@gmail.com                        */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_MARCA     50
#define TAM_PLACA     50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MODE      12        /* Tamanio de la matricula del alumno                */
#define TAM_COLOR     12        /* Tamanio de la fecha de nacimiento                 */
#define TOTAL_AUTO    10        /* Tamanio total del alumno                          */


/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - matricula                 */
/*                                    - fechaNacimiento           */
/*                                    - sexo                      */
/*                                    - estatura                  */
/*                                    - peso                      */
typedef struct
{
  char marca[TAM_MARCA];
	char placa[TAM_PLACA];
	char modelo[TAM_MODE];
	char color[TAM_COLOR];
	int motor;

}Auto;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarAuto(Auto);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de alumnos */
Auto crearNuevoAuto(void);
void mostrarListaAuto(Auto [], int);
void buscarAuto(Auto []);
void actualizarAuto(Auto []);
void eliminarAuto(Auto []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarAlumno() */
Auto * eliminarUnAuto(Auto [], int);


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Auto [], int []);
int * ordenarDescendente(Auto [], int []);


#endif
