#include <stdio.h>
#include <stdbool.h>
#define ROW 10
#define COL 10
bool validarsumamatriz(int filaA,int filaB,int colA,int colB);
void leerdatosmatriz(int matriz[ROW][COL],int fila,int col);
void imprimirmatriz(int matriz[ROW][COL],int fila,int col);
void sumarmatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matiresul[ROW][COL],int fila,int col);
int main (void)
{
    int filaA,colB;
    int filaB,colA;
    int matrizA[ROW][COL];
    int matrizB[ROW][COL];
    int matiresul[ROW][COL];
    printf("\nIntroduce la fila de la matriz A:");
    scanf("%d",&filaA);
    printf("\nIntroduce la columna de la matriz A:");
    scanf("%d",&colA);
    printf("\nIntroduce la fila de la matriz B:");
    scanf("%d",&filaB);
    printf("\nIntroduce la columna de la matriz B:");
    scanf("%d",&colB);
    if (validarsumamatriz(filaA,filaB,colA,colB))
    {
      leerdatosmatriz (matrizA,filaA,colA);
      leerdatosmatriz(matrizB,filaB,colB);

      imprimirmatriz(matrizA,filaA,colA);
      imprimirmatriz(matrizB,filaB,colB);

      sumarmatriz(matrizA,matrizB,matiresul,filaA,colA);

      printf("\nEl resultado de la suma es:\n");
      imprimirmatriz(matiresul,filaA,colB);

    }
    else
    {
      printf("\nNo se puede realizar la operacion\n");
    }
    return 0;
  }
  void sumarmatriz(int matrizA[ROW][COL],int matrizB[ROW][COL],int matiresul[ROW][COL],int fila,int col)
  {
    for (int i=0;i<fila;i++)
    {
      for (int j=0;j<col;j++)
      {
        matiresul[i][j]=matrizA[i][j]+matrizB[i][j];
      }
    }
  }
  void leerdatosmatriz(int matriz[ROW][COL],int fila,int col)
  {
    for (int i=0;i<fila;i++)
    {
      for (int j=0;j<col;j++)
      {
        printf("Introduce el elemento [%d][%d]",i,j);
        scanf("%d",&matriz[i][j]);
      }
    }
  }
  void imprimirmatriz(int matriz[ROW][COL],int fila,int col)
  {
    printf("\n\n");
    for(int i=0;i<fila;i++)
    {
      printf("|");
      for(int j=0;j<col;j++)
      {
        printf("%d",matriz[i][j]);
      }
      printf("| \n");
    }
  }

  bool validarsumamatriz(int filaA,int filaB,int colA,int colB)
  {
    if ((filaA==filaB)&& (colA==colB))
    {
      return true;
    }
    return false;
  }
