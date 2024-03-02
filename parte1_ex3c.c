// GETCHE()

#include <stdio.h>

int main() {
  char caracter;

  printf("Digite um caracter: ");
  caracter = getche();

  printf("O caracter '%c' tem o código ASCII: %d\n", caracter, caracter);

  return 0;
}
