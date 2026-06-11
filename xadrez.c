#include <stdio.h>

int main() {
    // Definição das constantes de movimento (Requisito Funcional)
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    printf("### Bem-vindo ao Xadrez do Programador Bruxo ###\n\n");

    // ---- 1. MOVIMENTAÇÃO DA TORRE (Usando WHILE) ----
    printf("### Movimentação da Torre ###\n");
    int i = 0;
    while (i < MOVIMENTO_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // ---- 2. MOVIMENTAÇÃO DO BISPO (Usando FOR) ----
    printf("### Movimentação do Bispo ###\n");
    // O enunciado pede para mostrar as duas direções na diagonal ("Cima, Direita")
    for (int j = 0; j < MOVIMENTO_BISPO; j++) {
        printf("Cima, Direita\n");
    }
    printf("\n");

    // ---- 3. MOVIMENTAÇÃO DA RAINHA (Usando DO-WHILE) ----
    printf("### Movimentação da Rainha ###\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}