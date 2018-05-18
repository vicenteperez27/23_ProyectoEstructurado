#include<stdio.h>

float calcularIMC(float,float);

int main(void)
{
float peso;
float estatura;

printf("dame el peso de la persona:\n");
scanf("%f",&peso);
printf("dame la estatura de la persona:\n");
scanf("%f",&estatura);

float IMC = calcularIMC (peso, estatura);
printf("\n la IMC del paciente es: %.2f\n",IMC);

return 0;

}

float calcularIMC(float peso,float estatura)
{
return peso/(estatura*estatura);
}
