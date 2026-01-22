#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para quantidade de movimentos
    const int BISPO_MOVES = 5;
    const int TORRE_MOVES = 5;
    const int RAINHA_MOVES = 8;

int main() {
    // ==========================
    // Movimentos do Bispo
    // ==========================
    printf("Movimentos do bispo (5 casas na diagonal superior direita):\n");
    for (int i = 1; i <= BISPO_MOVES; i++) {
        // Bispo anda na diagonal -> combinação de "Cima" + "Direita"
        printf("Passo %d: Cima + Direita\n", i);
    }
    printf("\n");

    // ==========================
    // Movimento da Torre
    // ==========================
    printf("Movimentos da Torre (5 casas para a direita):\n");
    int j = 1;
    while (j <= TORRE_MOVES) {
        printf("Passos %d: Direita\n", j);
        j++;
    }
    printf("\n");

    // ==========================
    // Movimentos da Rainha
    // ==========================
    printf("Movimentos da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Passos %d: Esquerda\n", k);
        k++;
    } while (k <= RAINHA_MOVES);

    return 0;

    }


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
