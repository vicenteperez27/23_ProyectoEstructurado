#include <stdio.h>

int multi(int num, int cont, int x);

int main(void)
{
	int num=5 ,cont,x;
	printf("Programa que muestra la tabla del multplicar del 1 al 5\n\n");
	for(cont=1; cont <=num; cont++)
	{
		for(x=1;x<=10;x++)
		{
		printf("%d\tX\t%d\t=\t%d\n", cont,x, (x *cont));
		}
		printf("\n\n");
	}
	return 0;
}
int multi(int num, int cont, int x)
	 {
		 return cont,x, (x *cont);
}
