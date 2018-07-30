#include <stdio.h>

#define NUMERO_TENTATIVAS 5
#define NUMERO_SECRETO 42

int main() {
//    printf("******************************************\n");
//    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
//    printf("******************************************\n");

//    int n_secret = 42;
    int chute;

    printf("O numero secreto blablabalvla %d\n", NUMERO_SECRETO);
    for (int i = 0; i < NUMERO_TENTATIVAS; i++) {
        printf("Chute %d\n\nDa um chute ai: ", i);
        scanf("%d", &chute);

        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == NUMERO_SECRETO);
        int maior = (chute > NUMERO_SECRETO);
        int menor = (chute < NUMERO_SECRETO);
        int negativo = (chute < 0);

        if(negativo){
            printf("Vc n pode chutar numeros negaticos.\n");
            i--;
            continue;
        }
        printf("GIBIMBA\n");

        if (acertou) {
            printf("Parabens seu trouxa! ACERTOU!\n");
            break;
        } else if(maior){
            printf("Nop, nao acertou! Chute maior que o numero!\n");
        } else if(menor){
            printf("Nop, nao acertou! Chute menor que o numero!\n");

        }

    }


    return 0;
}