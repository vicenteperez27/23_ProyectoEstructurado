#include<stdio.h>

float voltitanque(float,float,float);

int main(void)
{
float ancho;
float largo;
float altura;


printf("introduzca el ancho del tanque:\n");
scanf("%f",&ancho);
printf("introduzca el largo del tanque:\n");
scanf("%f",&largo);
printf("introduzca la altura del tanque:\n");
scanf("%f",&altura);

float vol=voltitanque(ancho,largo,altura);
float litros = 1000*vol;
printf("\n el volumen del tanque es: %.2f que es equivalente a %.2f litros\n",vol,litros);

return 0;
}

float voltitanque(float ancho, float largo,float altura)

{
 return ancho*largo*altura;
}

