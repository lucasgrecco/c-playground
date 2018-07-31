#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_TENTATIVAS 5
#define NUMERO_SECRETO 42

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

//    int n_secret = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    srand((unsigned int) time(0));

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;


    printf("O numero secreto blablabalvla %d\n", NUMERO_SECRETO);
//    for (int tentativas = 0; tentativas < NUMERO_TENTATIVAS; tentativas++) {
    while (1) {
        printf("Chute %d\nDa um chute ai: ", tentativas);
        scanf("%d", &chute);

        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == NUMERO_SECRETO);
        int maior = (chute > NUMERO_SECRETO);
        int menor = (chute < NUMERO_SECRETO);
        int negativo = (chute < 0);

        if (negativo) {
            printf("Vc n pode chutar numeros negaticos.\n");
            continue;
        }
        printf("GIBIMBA\n");

        if (acertou) {
            printf("Parabens seu trouxa! ACERTOU!\n");
            printf("PONTOS: %.2f\n", pontos);
            break;
        } else if (maior) {
            printf("Nop, nao acertou! Chute maior que o numero!\n");
        } else if (menor) {
            printf("Nop, nao acertou! Chute menor que o numero!\n");

        }

        pontos = pontos - ((chute - NUMERO_SECRETO) / 2.0);
        tentativas++;
    }

    printf("Você acertou em %d tentativas!\n", tentativas);

    return 0;
}



/*

Inteiros:

short = 2 bytes
int= 4 bytes = 32 bits ≅ 2³²
long = 8 bytes = 64 bits ≅2⁶⁴

Ponto Flutuante:

float = 4 bytes
double = 8 bytes = 64 bits

*/
