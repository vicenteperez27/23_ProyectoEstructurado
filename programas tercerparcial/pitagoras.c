
#include <stdio.h>
#include <math.h>
float pitagoras(float x1,float x2,float y1,float y2);

/*declaracion de la funcion principal*/
int main(void)
{
float x1,x2,y1,y2,dis;
printf("Programa de Pitagoras\n\n");
printf("ingrese el valor de X1\n");
scanf("%f",&x1);
printf("ingrese el valor de Y1\n");
scanf("%f",&y1);
printf("ingrese el valor de X2\n");
scanf("%f",&x2);
printf("ingrese el valor de Y2\n");
scanf("%f",&y2);

float DIS=pitagoras(x1,x2,x1,x2);
printf("\n la distancia entre dos puntos  es: %.2f",DIS);

dis=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
return 0;
}
float pitagoras(float x1, float x2, float y1, float y2)
{
return x1-y1*x1-y1+x2-y2*x2-y2;
}
