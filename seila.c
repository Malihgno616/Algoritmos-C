#include <stdio.h>

void cabecalho(void) {
  printf("\n**************************************");
  printf("\n*                                  *");
  printf("\n*  ACKIN MAIOCHI LINOOOOOOOOOOOOO  *");
  printf("\n**************************************");
}

int main(void) {
  // calculo de média
  float n1;
  char nome1[100];
  cabecalho();

  printf("\nQual o seu nome?: ");
  scanf("%s", &nome1);
  printf("\nO seu nome é %s", nome1);

  printf("\n%s informe a sua nota: ", nome1);
  scanf("%f", &n1);
  printf("Nota do %s: %.2f", nome1, n1);

  if (n1 >= 5) {
    printf("\nAprovado!!!");
  } else {
    printf("\nReprovado!!!");
  }

  return 0;
}