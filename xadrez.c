#include <stdio.h>

int main(){

        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        //Rainha: 8 casas para a esquerda

        int casas_bispo = 5;
        int casas_torre = 5;
        int casas_rainha = 8;

        printf(" --- Movimento do Bispo ---\n");
        for (int i = 1; i <= casas_bispo; i++) {
            printf("Diagonal cima direita\n");
        }

        printf(" --- Movimento da TORRE ---\n");
        int contadorTorre = 1;
        while (contadorTorre <= casas_torre) {
        printf("Direita\n");
        contadorTorre++;
        }

        printf(" --- Movimento da Rainha ---\n");
        int contadorRainha = 1;
        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha <= casas_rainha);

        printf(" --- Movimento do Cavalo ---\n");
        for (int i = 1; i <= 2; i++) {
            printf("Baixo\n");

        }
        int b = 1;
        while (b <= 1) {
            printf("Esquerda\n");
            b++;
        }




    return 0;
}


