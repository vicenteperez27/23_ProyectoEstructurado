#include<stdio.h>

float areadeTerreno(float,float);

int main(void)
{
float ancho;
float largo;

printf("ingrese el ancho del terreno:\n");
scanf("%f",&ancho);
printf("ingrese el alrgo del terreno:\n");
scanf("%f",&largo);

float area = areadeTerreno(ancho, largo);
printf("\n el area del terreno  es: %.2f\n",area);

return 0;

}

float areadeTerreno(float ancho,float largo)
{

return ancho*largo;
}
