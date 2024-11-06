#include <stdio.h>

void imprimirMatriz(int matriz[10][10]) {
   for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        printf("%d", matriz[i][j]);
      }
      printf("\n");
   } 
}

int main() {
  // exercícios matriz

  int matriz[10][10] = {
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0},
    {1,2,3,4,5,6,7,8,9,0}
  };

  int *ptr= &matriz[0][0];

  imprimirMatriz(matriz);
  printf("%x",ptr);

  return 0;
}