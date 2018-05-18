
/* Declaracion de bibliotecas*/
#include <stdio.h>
#include <stdlib.h>

int multi(int num, int mult, int x);
/*declaracion de la funcion principal*/
int main(void)
{
int num=1,mult,x;
printf("Programa que muestra en pantalla la tabla de multiplicar del 1\n\n");
	printf("La Tabla de multiplicar del 1 es:\n");
	for(x=1; x<=10; x++)
	{
		mult=num*x;
		printf("%d * %d = %d\n",num,x,mult);
	}
return 0;
}
	int multi(int num, int mult, int x)
{
	return num,x,mult;
}
