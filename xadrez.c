#include <stdio.h>

int main(){

        //Bispo: 5 casas na diagonal superior direita
        //Torre: 5 casas para a direita
        //Rainha: 8 casas para a esquerda
        //Cavalo: 2 casas para baixo e 1 casa para esquerda

        int casas_bispo = 5;
        int casas_torre = 5;
        int casas_rainha = 8;
        int casas_baixo_cavalo = 2;
        int casas_esquerda_cavalo = 1;

        //Move o Bispo 5 casas para cima em diagonal
        printf(" --- Movimento do Bispo ---\n");
        for (int i = 1; i <= casas_bispo; i++) {
            printf("Diagonal cima direita\n");
        }
        
        //Move a Torre 5 casas para a direita
        printf(" --- Movimento da TORRE ---\n");
        int contadorTorre = 1;
        while (contadorTorre <= casas_torre) {
        printf("Direita\n");
        contadorTorre++;
        }

        //Move a rainha 8 casas para a esquerda
        printf(" --- Movimento da Rainha ---\n");
        int contadorRainha = 1;
        do {
            printf("Esquerda\n");
            contadorRainha++;
        } while (contadorRainha <= casas_rainha);

        //Move o Cavalho 2 casas para baixo e só após esse movimento ele move a peça para a esquerda
        printf(" --- Movimento do Cavalo ---\n");
        for (int i = 1; i <= casas_baixo_cavalo; i++) {
            printf("Baixo\n");

        }
        int j = 1;
        while (j <= casas_esquerda_cavalo) {
            printf("Esquerda\n");
            j++;
        }




    return 0;
}