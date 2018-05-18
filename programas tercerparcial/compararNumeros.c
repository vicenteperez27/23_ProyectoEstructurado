#include <stdio.h>

int main(void)
{
int num1, num2, num3;
printf("Programa que compara numeros\n\n");
printf("Dame el numero1\n");
scanf("%d",&num1);
printf("Dame el numero 2\n");
scanf("%d",&num2);
printf("Dame el numero 3\n");
scanf("%d",&num3);

if (num1>num2 && num1>num3)
printf("El mayor es %d",num1);
if (num2>num1 && num2>num3)
printf("El mayor es %d",num2);
if (num3>num1 && num3>num2)
printf("El mayor es %d",num3);

printf("\n\n");
if(num1<num2 && num1<num3)
printf("el numero menor es: %d",num1);
if(num2<num1 && num2<num3)
printf("el numero menor es: %d",num2);
if(num3<num1 && num3<num2)
printf("el numero menor es: %d",num3);

return 0;
}
