//
// Created by Grecco on 31/07/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    double pontos = 3 / 2.0;
    printf("%f\n", pontos);

    int a = 3;
    int b = 2;
    double pontos_2 = a / (double)b;
    printf("%f\n", pontos_2);


    int c = -9;
    printf("%d\n", abs(c));

    //EPOCH nunero de segundos desde 1 de jan de 1970.

    srand(time(0));
    int rand1 = rand();
    int rand2 = rand();

    printf("%d e %d", rand1, rand2);



}