#include <stdio.h>

int main(){

  int n1;

  printf("Digite um numero: ");
  scanf("%d", &n1);

  if (n1 %2 == 0){
    printf("O numero e par\n");
  } else {
    printf("O numero e impar\n");
  }

  return 0;
}