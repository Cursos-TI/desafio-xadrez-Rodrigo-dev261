#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para quantidade de movimentos
    const int BISPO_MOVES = 5;
    const int TORRE_MOVES = 5;
    const int RAINHA_MOVES = 8;
    
// Constantes para o Cavalo
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

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

    printf("\n");
    
    // ==========================
    // Movimento cavalo
    // ==========================
    printf("Movimentos do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");
    for (int i = 1; i <= CAVALO_BAIXO; i++) {
        printf("Passo %d: Baixo\n", i);
        
        // Loop interno (while) só executa no último passo para adicionar a esquerda  
        int l = 0;
        while (l < 1 && i == CAVALO_BAIXO) {
            printf("Passo %d; Esquerda\n", i + 1);
            l++;
        }

    }


    return 0;

    }


    

    
