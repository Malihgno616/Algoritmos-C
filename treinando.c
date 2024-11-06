#include <stdio.h>
#include <string.h>

struct Pessoa {
  char Nome[50];
  int Idade;
  char Sexo;
};

void exibirPessoa(struct Pessoa p) {
  printf("\nNome: %s", p.Nome);
  printf("\nIdade: %d", p.Idade);
  printf("\nSexo: %c\n", p.Sexo);
};

int main() {

  struct Pessoa pessoa1;
  
  strcpy(pessoa1.Nome,"Armando da silva de Jesus");
  pessoa1.Idade = 25;
  pessoa1.Sexo = 'M';

  exibirPessoa(pessoa1);


  return 0;
}