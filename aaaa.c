#include <stdio.h>

int main() {
  
  int n1, n2, n3, total;
  float media;
  int *ptr;

  ptr = &total;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  printf("Digite o terceiro numero: ");
  scanf("%d", &n3);

  total = n1+ n2 + n3;
  printf("\nTotal dos valores %d\n", total);

  media = (n1 + n2 + n3)/3;

  printf("ponteiro do primeiro valor: %p", ptr);

  printf("\nA media destes 3 valores e de: %.2f", media);


  return 0;
}