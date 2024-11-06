#include <stdio.h>

int main() {

  int valor1, valor2, valor3;
  float media;

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &valor1);

  printf("\nDigite o segundo valor: ");
  scanf("%d", &valor2);

  printf("\nDigite o terceiro valor: ");
  scanf("%d", &valor3);

  media = (valor1 + valor2 + valor3)/3; 

  printf("\nA media dos valores sao: %.f", media);

  return 0;
}