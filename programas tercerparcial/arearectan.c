#include<stdio.h>

//*prototipo de funciones
void imprimirMensaje(void); //*prototipo de la funcion

int areaRectangulo(int, int);
//int areaRectangulo(int base,int altura);  no es necesario poner las variables


//*funciones con arreglos
int main(void)
{

int base = 10;
int altura = 5;
//*hacer la llamada a la funcion imprimirMensaje
//*invocar a la funcion imprimir imprimirMensaje
imprimirMensaje();


int area = areaRectangulo(base, altura);

printf("\n El area del rectangulo es: %d", area);

  return 0;
}

int areaRectangulo(int base, int altura)
{
  return base * altura;
}


void imprimirMensaje(void)

{
    printf("\n estas en la funcion imprimir mensaje\n");
}
