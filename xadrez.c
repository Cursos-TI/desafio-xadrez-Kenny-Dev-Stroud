#include <stdio.h>

// ---- DECLARAÇÃO DAS FUNÇÕES RECURSIVAS (Fora do main) ----

// Função Recursiva para a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva
    }
}

// Função Recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva
    }
}

// Função Recursiva para o Bispo utilizando Loops Aninhados internamente
// Conforme o requisito: loop externo (vertical) e interno (horizontal)
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo para o movimento vertical (Cima)
        for (int v = 0; v < 1; v++) {
            printf("Cima, ");
            // Loop interno para o movimento horizontal (Direita)
            for (int h = 0; h < 1; h++) {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // Chamada recursiva para a próxima casa
    }
}

// ---- FUNÇÃO PRINCIPAL ----
int main() {
    // Definição das constantes de movimento
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    printf("### Bem-vindo ao Xadrez do Programador Bruxo ###\n\n");

    // ---- 1. MOVIMENTAÇÃO DA TORRE (Recursiva) ----
    printf("### Movimentação da Torre ###\n");
    moverTorre(MOVIMENTO_TORRE);
    printf("\n");

    // ---- 2. MOVIMENTAÇÃO DO BISPO (Recursiva + Loops Aninhados) ----
    printf("### Movimentação do Bispo ###\n");
    moverBispo(MOVIMENTO_BISPO);
    printf("\n");

    // ---- 3. MOVIMENTAÇÃO DA RAINHA (Recursiva) ----
    printf("### Movimentação da Rainha ###\n");
    moverRainha(MOVIMENTO_RAINHA);
    printf("\n");

    // ---- 4. MOVIMENTAÇÃO DO CAVALO (Loops Complexos com Múltiplas Condições) ----
    printf("### Movimentação do Cavalo ###\n");
    
    // Loop complexo usando múltiplas variáveis e controle de fluxo (break/continue)
    for (int i = 0, j = 0; i < 3; i++) {
        // Condição complexa para simular as duas casas para Cima
        if (i < 2) {
            printf("Cima\n");
            continue; // Pula o restante do loop e vai para a próxima iteração vertical
        }
        
        // Loop aninhado interno para a casa para a Direita
        while (j < 1) {
            printf("Direita\n");
            j++;
            break; // Interrompe o loop interno de forma precisa
        }
    }
    printf("\n");

    return 0;
}
