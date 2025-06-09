#include <stdio.h>

// Movimentação das torres
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Movimentação do Bispo
void moverBispoDiagonal(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispoDiagonal(casasRestantes - 1);
}

// Movintação da Rainha
void moverRainhaEsquerda(int casasRestantes) {
    if (casasRestantes == 0) return;

    printf("Esquerda\n");
    moverRainhaEsquerda(casasRestantes - 1);
}

// Movimentação do Cavalo
void moverCavalo() {
    int maxMovimentos = 5; // movimentação em L para a direita
    printf("Movimentos do Cavalo:\n");

    for (int m = 0; m < maxMovimentos; m++) {
        // Duas casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
            if (i == 1) continue; 
        }

        // Uma casa para direita
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
            if (j == 0) break; // sai imediatamente do loop interno
        }
    }
}

// Funçao
int main() {
    // Quantidade de casas solicitadas em video
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // TORRE
    printf("Movimentos da Torre:\n");
    moverTorreDireita(casasTorre);
    printf("\n");

    // BISPO
    printf("Movimentos do Bispo:\n");
    moverBispoDiagonal(casasBispo);
    printf("\n");

    // RAINHA
    printf("Movimentos da Rainha:\n");
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    // CAVALO
    moverCavalo();
    printf("\n");

    return 0;
}