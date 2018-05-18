/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

int edad(int E);
/*declaracion de la funcion principal*/
int main(void)
{
int E;
printf("Programa que muestra en pantalla si una persona puede votar\n\n");
printf("Ingrese la edad\n");
  scanf("%d",&E);

  if (E>=18){
  printf("Puedes votar en las proximas elecciones para elegir al presidente de tu pais\n\n");
  }
  else if(E<18){
  printf("No Puedes votar ");
  }
  return 0;
  }
  int edad(int E)
{
  return E>=18,E<18;
}
