#include <stdio.h>

int main() {
  // Variáveis
  float precoVenda, valorImposto, valorDesconto, precoFinal;

  // Constantes
  const float taxaImposto = 0.1;
  const float taxaDesconto = 0.05;

  // Entrada
  printf("Informe o preço de venda do produto: ");
  scanf("%f", &precoVenda);

  // Processamento
  valorImposto = precoVenda * taxaImposto;
  valorDesconto = precoVenda * taxaDesconto;
  precoFinal = precoVenda + valorImposto - valorDesconto;

  // Saída
  printf("O preço final desse produto é: R$%.2f", precoFinal);

  return 0; // Fim do programa
}