#include <stdio.h>
#include <string.h>

struct Aluno {
  char Nome[100];
  float Nota1;
  float Nota2;
  float Media;
};

void exibirAluno(struct Aluno a) {
  printf("Nome: %s", a.Nome);
  printf("\nPrimeira nota: %.2f", a.Nota1);
  printf("\nSegunda nota: %.2f", a.Nota2);
  printf("\nMedia: %.2f", a.Media);
}

void quebraDeLinha() {
  printf("\n------------------------------------------\n");
}

int main() {
  struct Aluno a1, a2;
  
  strcpy(a1.Nome, "João");
  a1.Nota1= 7.5;
  a1.Nota2= 5.5;
  a1.Media = (a1.Nota1 + a1.Nota2)/2;

  strcpy(a2.Nome, "Maria");
  a2.Nota1 = 9;
  a2.Nota2 = 8;
  a2.Media = (a2.Nota1 + a2.Nota2)/2;
  
  exibirAluno(a1); 
  quebraDeLinha();
  exibirAluno(a2);

  return 0;
}




