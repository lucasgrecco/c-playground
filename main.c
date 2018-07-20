#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int n_secret = 42;
    int chute;

    printf("O numero secreto blablabalvla %d\n", n_secret);
    printf("Da um chute ai: ");
    scanf("%d", &chute);

    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == n_secret);

    if(acertou){

        printf("Parabens seu trouxa!\n");
    } else{
        printf("Nop, nao acertou!\n");
    }



    return 0;
}