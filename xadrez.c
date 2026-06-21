#include <stdio.h>

int main() {
    // ---- CONFIGURAÇÕES INICIAIS ----
    
    // Definição das constantes de movimento (Requisito Funcional)
    // Determinam quantas casas cada peça vai andar
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Mensagem de boas-vindas do programa
    printf("### Bem-vindo ao Xadrez do Programador Bruxo ###\n\n");

    // ---- 1. MOVIMENTAÇÃO DA TORRE (Usando WHILE) ----
    printf("### Movimentação da Torre ###\n");
    
    int i = 0; // Inicializa a variável de controle do loop da torre
    
    // O loop continua enquanto 'i' for menor que o limite da constante (5)
    while (i < MOVIMENTO_TORRE) {
        printf("Direita\n"); // Imprime a direção do movimento
        i++; // Incrementa o contador para evitar um loop infinito
    }
    printf("\n"); // Linha em branco para organizar a saída

    // ---- 2. MOVIMENTAÇÃO DO BISPO (Usando FOR) ----
    printf("### Movimentação do Bispo ###\n");
    
    // O loop FOR inicializa 'j', testa a condição (< 5) e incrementa a cada passo
    // Ideal para quando já sabemos o número exato de repetições
    for (int j = 0; j < MOVIMENTO_BISPO; j++) {
        printf("Cima, Direita\n"); // Imprime o movimento em diagonal
    }
    printf("\n");

    // ---- 3. MOVIMENTAÇÃO DA RAINHA (Usando DO-WHILE) ----
    printf("### Movimentação da Rainha ###\n");
    
    int k = 0; // Inicializa a variável de controle da rainha
    
    // O bloco DO-WHILE garante que o código execute pelo menos uma vez antes de testar a condição
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        k++; // Incrementa o contador
    } while (k < MOVIMENTO_RAINHA); // Testa a condição no final (executa 8 vezes)
    printf("\n");

    // ---- 4. MOVIMENTAÇÃO DO CAVALO (Loops Aninhados) ----
    printf("### Movimentação do Cavalo ###\n");
    
    int MOVIMENTACAO_CAVALO = 1; // Define que a jogada do cavalo ocorre apenas 1 vez
    
    // O loop WHILE consome o valor (1) e decrementa para 0. 
    // Como 0 é considerado 'falso' em C, o loop roda apenas uma vez.
    while(MOVIMENTACAO_CAVALO--){
        
        // Loop interno FOR: faz o cavalo andar 2 casas para cima
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        
        // Após andar para cima, executa o movimento lateral para completar o "L"
        printf("Direita\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}