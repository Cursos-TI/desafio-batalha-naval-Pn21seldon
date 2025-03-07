#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define NOVATOLINHA 5
#define NOVATOCOLUNA 5

#define AVENTUREIROLINHA 10
#define AVENTUREIROCOLUNA 10

#define MESTRELINHA 5
#define MESTRECOLUNA 5

int main() {
    // Nível Novato - Posicionamento dos Navios
    int novatotabuleiro [NOVATOLINHA][NOVATOCOLUNA] = {0}; // - declarando matriz de tabuleiro 5x5 nivel novato

    novatotabuleiro[1][1] = 1; // - posição de um navio na vertical
    novatotabuleiro[2][1] = 1;
    novatotabuleiro[3][1] = 1;

    novatotabuleiro[3][3] = 1; // - posição de um navio na horizonta
    novatotabuleiro[3][4] = 1;

    printf("Este é o tabuleiro de batalha naval para o nível novato.\n");
    printf("\n");
    
    for (int i = 0; i < NOVATOLINHA; i++) {
        for (int j = 0; j < NOVATOCOLUNA; j++) {
            printf("%d ", novatotabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    int aventureiroTabuleiro[AVENTUREIROLINHA][AVENTUREIROCOLUNA] = {0}; // declarando matriz do tabuleiro de 10x10 do nivel aventureiro

    // navio na vertical
    aventureiroTabuleiro[1][1] = 1;
    aventureiroTabuleiro[2][1] = 1;
    aventureiroTabuleiro[3][1] = 1;

    // - posição de um navio na horizonta
    aventureiroTabuleiro[3][3] = 1; 
    aventureiroTabuleiro[3][4] = 1;

    // navio na diagonal (do canto superior esquerdo para o canto superior direito)
    aventureiroTabuleiro[5][5] = 1;
    aventureiroTabuleiro[6][6] = 1;
    aventureiroTabuleiro[7][7] = 1;

    // navio na diagonal (do canto infeiror esquerdo para o canto superior direiro)
    aventureiroTabuleiro[8][1] = 1;
    aventureiroTabuleiro[7][2] = 1;
    aventureiroTabuleiro[6][3] = 1;

    printf("-Este é o tabuleiro de batalha naval para o nível aventureiro.\n");
    printf("\n");

    for (int i = 0; i < AVENTUREIROLINHA; i++) {
        for (int j = 0; j < AVENTUREIROCOLUNA; j++) {
            printf("%d ", aventureiroTabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    int mestreTabuleiro[MESTRELINHA][MESTRECOLUNA] = {0}; // declarando matriz do tabuleiro 5x5 do nivel mestre

    // sintax da habilidade cone
    int cone[MESTRECOLUNA][MESTRECOLUNA] = {{0,0,0,0,0},{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1},{0,0,0,0,0}};

    // sintax da habilidade octaedro
    int octaedro[MESTRECOLUNA][MESTRECOLUNA] = {{0,0,0,0,0},{0,0,1,0,0},{0,1,1,1,0},{0,0,1,0,0},{0,0,0,0,0}};

    // sintax da habilidade cruz
    int cruz[MESTRECOLUNA][MESTRECOLUNA] = {{0,0,0,0,0},{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0},{0,0,0,0,0}};

    printf("-Este é o tabuleiro de batalha naval para o nível mestre.\n");
    printf("\n");

    // printando habilidade em cone
    printf("Habilidade em cone:\n");
    printf("\n");
    for (int i = 0; i < MESTRELINHA; i++) {
        for (int j = 0; j < MESTRECOLUNA; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // printando habilidade em octaedro
    printf("Habilidade em octaedro:\n");
    printf("\n");
    for (int i = 0; i < MESTRELINHA; i++) {
        for (int j = 0; j < MESTRECOLUNA; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // printando habilidade em cruz
    printf("Habilidade em cruz:\n");
    printf("\n");
    for (int i = 0; i < MESTRELINHA; i++) {
        for (int j = 0; j < MESTRECOLUNA; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
