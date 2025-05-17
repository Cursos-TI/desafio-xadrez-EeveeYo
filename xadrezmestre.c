#include <stdio.h>

// Torre: Recursiva - 5 casas para a Direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: Recursiva com loops aninhados - 5 casas na diagonal (Cima Direita)
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo (vertical) - 1 iteração
    for (int i = 0; i < 1; i++) {
        // Loop interno (horizontal) - 1 iteração
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Rainha: Recursiva - 8 casas para a Esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Cavalo: 2 casas para Cima e 1 para Direita (em "L") com loops aninhados
void moverCavalo() {
    int movimentos = 1; // Quantidade de movimentos em "L"

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < movimentos; i++) {
        for (int passo = 0; passo < 3; passo++) {
            if (passo < 2) {
                printf("Cima\n");
                continue; // pula direto para o próximo passo
            }

            if (passo == 2) {
                printf("Direita\n");
                break; // finaliza o movimento "L"
            }
        }
    }
}

int main() {
    // Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Rainha
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo
    moverCavalo();

    return 0;
}