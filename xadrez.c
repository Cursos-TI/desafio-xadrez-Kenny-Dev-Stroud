#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int escolha;
    int direcao;
    int casas_andadas;

    printf("\n ### Bem-vindo ao Xadrez do Programador Bruxo #### \n");
    printf("\n Escolha a peça que você quer movimentar: \n");
    printf("1. Bispo \n");
    printf("2. Torre \n");
    printf("3. Rainha \n");
    printf("Qualquer outro número para sair do programa! \n");
    printf("Digite o número equivalente a peça: \n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("\n ### Bispo ### \n");
        printf("Escolha a direção pela qual o bispo se movimentará: \n");
        printf("1. Diagonal Superior Direita \n");
        printf("2. Diagonal Superior Esquerda \n");
        printf("3. Diagonal Inferior Direita \n");
        printf("4. Diagonal Inferior Esquerda \n");
        printf("Qualquer outro número para sair do programa! \n");
        printf("Digite o número equivalente a direção desejada: \n");
        scanf("%d", &direcao);
        switch (direcao)
        {
        case 1:
            printf("Quantas peças para Diagonal Superior Direita você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)
            {
                printf("Diagonal Superior Direita\n");
            }
            break;
        case 2:
            printf("Quantas peças para Diagonal Superior Esquerda você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)
            {
                printf("Diagonal Superior Esquerda\n");
            }
            break;
        case 3:
            printf("Quantas peças para Diagonal Inferior Direita você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)
            {
                printf("Diagonal Inferior Direita\n");
            }
            break;
        case 4:
            printf("Quantas peças para Diagonal Inferior Esquerda você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)
            {
                printf("Diagonal Inferior Esquerda\n");
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;
        }
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    break;
    case 2:
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("\n ### Torre ### \n");
        printf("Escolha a direção pela qual a torre se movimentará: \n");
        printf("1. Direita \n");
        printf("2. Esquerda \n");
        printf("3. Cima \n");
        printf("4. Baixo \n");
        printf("Qualquer outro número para sair do programa! \n");
        printf("Digite o núemro equivalente a direção desejada: \n");
        scanf("%d", &direcao);
        switch (direcao)
        {
            case 1:
                printf("Quantas peças a Direita você quer mover? \n");
                scanf("%d", &casas_andadas);
                switch (casas_andadas)
                {
                case 1:
                        printf("Direita\n"); //Imprime a direção do movimento
                    break;
                case 2:
                    for (int i = 0;i<2;i++){
                        printf("Direita\n"); //Imprime a direção do movimento
                    }
                    break;
                case 3:
                    for (int i = 0;i<3;i++){
                        printf("Direita\n"); //Imprime a direção do movimento
                    }
                    break;
                case 4:
                    for (int i = 0;i<4;i++){
                        printf("Direita\n"); //Imprime a direção do movimento
                    }
                    break;
                case 5:
                    for (int i = 0;i<5;i++){
                        printf("Direita\n"); //Imprime a direção do movimento
                    }
                    break;
                default:
                    break;
                }
                break;
            case 2:
                printf("Quantas peças a Esquerda você quer mover? \n");
                scanf("%d", &casas_andadas);
                switch (casas_andadas)
                {
                case 1:
                        printf("Esquerda\n"); //Imprime a direção do movimento
                    break;
                case 2:
                    for (int i = 0;i<2;i++){
                        printf("Esquerda\n"); //Imprime a direção do movimento
                    }
                    break;
                case 3:
                    for (int i = 0;i<3;i++){
                        printf("Esquerda\n"); //Imprime a direção do movimento
                    }
                    break;
                case 4:
                    for (int i = 0;i<4;i++){
                        printf("Esquerda\n"); //Imprime a direção do movimento
                    }
                    break;
                case 5:
                    for (int i = 0;i<5;i++){
                        printf("Esquerda\n"); //Imprime a direção do movimento
                    }
                    break;
                default:
                    break;
                }
                break;
            case 3:
                printf("Quantas peças para Cima você quer mover? \n");
                scanf("%d", &casas_andadas);
                switch (casas_andadas)
                {
                case 1:
                        printf("Cima\n"); //Imprime a direção do movimento
                    break;
                case 2:
                    for (int i = 0;i<2;i++){
                        printf("Cima\n"); //Imprime a direção do movimento
                    }
                    break;
                case 3:
                    for (int i = 0;i<3;i++){
                        printf("Cima\n"); //Imprime a direção do movimento
                    }
                    break;
                case 4:
                    for (int i = 0;i<4;i++){
                        printf("Cima\n"); //Imprime a direção do movimento
                    }
                    break;
                case 5:
                    for (int i = 0;i<5;i++){
                        printf("Cima\n"); //Imprime a direção do movimento
                    }
                    break;
                default:
                    break;
                }
                break;
            case 4:
                printf("Quantas peças para Baixo você quer mover? \n");
                scanf("%d", &casas_andadas);
                switch (casas_andadas)
                {
                case 1:
                        printf("Baixo\n"); //Imprime a direção do movimento
                    break;
                case 2:
                    for (int i = 0;i<2;i++){
                        printf("Baixo\n"); //Imprime a direção do movimento
                    }
                    break;
                case 3:
                    for (int i = 0;i<3;i++){
                        printf("Baixo\n"); //Imprime a direção do movimento
                    }
                    break;
                case 4:
                    for (int i = 0;i<4;i++){
                        printf("Baixo\n"); //Imprime a direção do movimento
                    }
                    break;
                case 5:
                    for (int i = 0;i<5;i++){
                        printf("Baixo\n"); //Imprime a direção do movimento
                    }
                    break;
                default:
                    break;
                }
                break;
    
            default:
                break;
        } //fim do switch direção
    break;
    case 3:
        printf("\n ### Rainha ### \n");
        printf("Escolha a direção pela qual a rainha se movimentará: \n");
        printf("1. Horizontal Direita \n");
        printf("2. Horizontal Esquerda \n");
        printf("3. Vertical Cima \n");
        printf("4. Vertical Baixo \n");
        printf("5. Diagonal Superior Direita \n");
        printf("6. Diagonal Superior Esquerda \n");
        printf("7. Diagonal Inferior Direita \n");
        printf("8. Diagonal Inferior Esquerda \n");
        printf("Qualquer outro número para sair do programa! \n");
        printf("Digite o número equivalente a direção desejada: \n");
        scanf("%d", &direcao);
        switch (direcao)
        {        case 1:
            printf("Quantas peças para Horizontal Direita você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Horizontal Direita\n");
            }
            break;
        case 2:
            printf("Quantas peças para Horizontal Esquerda você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Horizontal Esquerda\n");
            }
            break;
        case 3:
            printf("Quantas peças para Vertical Cima você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Vertical Cima\n");
            }
            break;  
        case 4:
            printf("Quantas peças para Vertical Baixo você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Vertical Baixo\n");
            }
            break;                  
        case 5:
            printf("Quantas peças para Diagonal Superior Direita você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Diagonal Superior Direita\n");
            }
            break;
        case 6:
            printf("Quantas peças para Diagonal Superior Esquerda você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Diagonal Superior Esquerda\n");
            }
            break;
        case 7:
            printf("Quantas peças para Diagonal Inferior Direita você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Diagonal Inferior Direita\n");
            }
            break;
        case 8:
            printf("Quantas peças para Diagonal Inferior Esquerda você quer mover? \n");
            scanf("%d", &casas_andadas);
            for (int i = 0; i < casas_andadas; i++)            {
                printf("Diagonal Inferior Esquerda\n");
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    break;
    default:
    break;
    } //fim do switch escolha
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
