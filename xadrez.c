#include <stdio.h>

// Movimento TORRE (somente para a direita)
void moverTorre(int casas) {
    if (casas == 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Movimento BISPO (cima)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; 
    
    // Movimento BISPO (direita)
    for (int j = 1; j <= horizontal; j++) {
        printf("Direita\n");
    }

    printf("Cima\n"); 

    moverBispo(vertical - 1, horizontal); 
}

// Movimento RAINHA (somente esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); 
}

// Movimento CAVALO (duas casas para cima e uma para a direita)

void moverCavalo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf(" --- Movimento %d do Cavalo ---\n", i);

        for (int j = 1; j <= 2; j++) {
            printf("Cima\n");
            if (j == 1) continue; 
        }

    
        for (int k = 1; k <= 1; k++) {
            printf("Direita\n");
            if (k == 1) break; 
        }

        printf("\n"); 
    }
}

int main() {

    // Quantidade de casas e movimentos de cada peça
    int casas_torre = 5;
    int casas_rainha = 8;
    int vertical_bispo = 3;  
    int horizontal_bispo = 3; 
    int movimentos_cavalo = 2;

    // -------------------------------
    printf("\n=== Movimento do BISPO ===\n");
    moverBispo(vertical_bispo, horizontal_bispo);

    // -------------------------------
    printf("\n=== Movimento da TORRE ===\n");
    moverTorre(casas_torre);

    // -------------------------------
    printf("\n=== Movimento da RAINHA ===\n");
    moverRainha(casas_rainha);

    // -------------------------------
    printf("\n=== Movimento do CAVALO ===\n");
    moverCavalo(movimentos_cavalo);

    return 0;
}
