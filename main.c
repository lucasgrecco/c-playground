#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define NUMERO_TENTATIVAS 5
#define NUMERO_SECRETO 42

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

//    int n_secret = 42;
    int chute;
    int tentativas = 1;
    int num_tentativas;
    double pontos = 1000;

    srand((unsigned int) time(0));
/* //forget this bs
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;*/

    printf("Selecione o nivel de dificuldade: \n1 - 5 tentativas\n2 - 10 tentativas\n3 - 15 tentativas\nDigite aqui sua opcao: ");
    scanf("%d", &num_tentativas);

    switch (num_tentativas){
        case 1:
            num_tentativas = 5;
            break;
        case 2:
            num_tentativas = 10;
            break;
        case 3:
            num_tentativas = 15;
            break;
        default:
            printf("Opção inválida! TCHAAAU!");
            exit(1);
            break;
    }

    printf("O numero secreto blablabalvla %d\n", NUMERO_SECRETO);
    for (tentativas; tentativas <= num_tentativas; tentativas++) {
//    while (1) {
        printf("Chute %d\nDa um chute ai: ", tentativas);
        scanf("%d", &chute);

        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == NUMERO_SECRETO);
        int maior = (chute > NUMERO_SECRETO);
        int menor = (chute < NUMERO_SECRETO);
        int negativo = (chute < 0);

        if (negativo) {
            printf("Vc n pode chutar numeros negaticos.\n");
            tentativas--;
            continue;
        }
        printf("GIBIMBA\n");

        if (acertou) {
            printf("Parabens seu trouxa! ACERTOU em %d\n", tentativas);
//            printf("Você acertou em %d tentativas!\n", tentativas);
            printf("PONTOS: %.2f\n", pontos);
            break;
        } else if (maior) {
            printf("Nop, nao acertou! Chute maior que o numero!\n");
        } else if (menor) {
            printf("Nop, nao acertou! Chute menor que o numero!\n");
        }

        pontos = pontos - ((chute - NUMERO_SECRETO) / 2.0);
        printf("Pontos %f\n", pontos);
//        tentativas++;
    }

    exit(0);
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
