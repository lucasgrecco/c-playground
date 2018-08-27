#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <jmorecfg.h>

int main() {
  char palavra_secreta[20];
  char chute;
  bool acertou = false;
  bool enforcou = false;


  sprintf(palavra_secreta, "manjola");

  printf("Jogo da ROLA\n");
  printf("%s", palavra_secreta);



  do {
    printf("Chute: ");
    scanf(" %c", &chute);
    for (int i = 0; i < strlen(palavra_secreta); i++) {
      if (palavra_secreta[i] == chute){
        printf("A posição %d tem essa letra.\n", i+1);
      }
    }

  } while (!acertou && !enforcou);
  return 0;
}