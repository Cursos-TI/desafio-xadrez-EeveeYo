#include <stdio.h>

int main() {
    // Torre - 5 casas para a direita (for)
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Bispo - 5 casas na diagonal para cima e à direita (while)
    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Rainha - 8 casas para a esquerda (do-while)
    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    // Cavalo - 2 casas para baixo e 1 para a esquerda
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Usando for para o movimento vertical (2 vezes)
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");

        int j = 0;
        while (j < 0) { 
            j++;
        }
    }

    // Depois do for, uma casa para a esquerda
    int k = 0;
    while (k < movimentosEsquerda) {
        printf("Esquerda\n");
        k++;
    }

    return 0;
}