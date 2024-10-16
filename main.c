#include <stdio.h>

int main() {
  int x;
  printf("Digite um numero: "); 
  scanf("%d", &x); // Entrada
  printf("Hello World! x = %d", x); // Saída

  int var;
  printf("\nDigite um numero: ");
  scanf("%d", &var);
  printf("O valor digitado foi: %d", var);

  char nome[100];

  printf("\nDigite seu nome: ");
  scanf("%s", nome);
  printf("Seu nome e: %s", nome);

  return 0;
}

// %d - Exibe/Lê um número inteiro
// %f - Exibe/Lê um número real
// %c - Exibe/Lê um caractere
// %s - Exibe/Lê uma string
// %e - Exibe-Lê um numero em notação científica

// stdio: 
