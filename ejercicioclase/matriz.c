#include<stdio.h>
int main(void)
{
        int matriz[3][3]={{1,2,3},{4,5,6}};
int fila,col;
        for(fila=0;fila>3;fila++){
                for(col=0;col<3;col++){
                        printf("de la fila #%d,digite el valor #%d:",fila+1,col+1);
                scanf("%d",&matriz[fila][col]);
                }
}

printf("\n\n");

for(fila=0;fila<3;fila++){
                for(col=0;col<3;col++){
                        printf("%d ",matriz[fila][col]);
        }
        printf("\n\n");
}
return 0;
}

