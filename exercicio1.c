#include <stdio.h> // Biblioteca

int main() {

  float num1, num2, media;
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  media = (num1 + num2)/2;

  printf("Média da nota do aluno = %.2f", media); // %.2f, quantidade de numeros depois da vírgula

  return 0;
}

