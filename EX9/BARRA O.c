#include <stdio.h>

/*Crie um programa que solicita e armazena o nome completo de um usu�rio em um 
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o �\0� na contagem e n�o utilize a fun��o strlen*/

int main() {
  
  char nome[100];
  int i;
  
  printf("Digite seu nome completo: ");
  gets(nome);

  for (i = 0; nome[i] != '\0'; i++);

  printf("Quantidade de caracteres: %i\n", i+1);

  return 0;
}
