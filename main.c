#include <stdio.h>

void dizerBomdia (char nome[20]){
  printf("Bom dia! %s \n", nome);
}

int main(void) {
  dizerBomdia("Fabiano");
  dizerBomdia("Heitor");
  dizerBomdia("Astrubal");
  return 0;
}