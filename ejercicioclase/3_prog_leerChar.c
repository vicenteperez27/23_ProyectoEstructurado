#include<stdio.h>

const int tamanio=5;

int main(void)
{

char c;
char array[tamanio];

int index=0;
while((c=getchar()) !='\n')
{                               /*tarea cvonvertir mayuscula a miniscula*/
  if(c>=65 && c<=90)
   {
     /*validando unicamemnte caracteres: letras minusculas*/
      c=c+32;
      array[index]=c;
      index ++;
    }
}
printf("\n");
for(int i=0; i<tamanio; i++)
{
printf("%c",array[i]);
}
printf("\n");
return 0;                          /*tarea convertir a minuscula a mayuscula*/
}
