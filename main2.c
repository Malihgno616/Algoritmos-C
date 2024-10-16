#include <stdio.h>
#include <stdbool.h>

#define varconst 100; // Definir uma constante
#define pi 3.14;

int main() {
  int n1, n2, total;
  n1 = 7;
  n2 = 3;
  total = n1 - n2;
  const int idadeDeCachorro = 7;
  int idade;
  const int p = varconst;
  const float piValor = pi;
  printf("%d", p);
  printf("\nValor do PI = %f", piValor);
  printf("\nTotal = %d", total);
  printf("\nDigite a idade do seu cão: ");
  scanf("%d",&idade);
  printf("\nIdade do seu cão em idade de cachorro é %d anos.", idadeDeCachorro*idade);
  return 0;
}


// Tipo de variáveis: int, float, double, char, insigned int, short int, Long double

// & permite o acesso direto aos endereços de memória das variáveis