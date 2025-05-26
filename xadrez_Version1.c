/*
 * Simulação de movimentos de Torre, Bispo e Rainha no xadrez.
 * Cada peça utiliza uma estrutura de repetição diferente (for, while, do-while).
 * O programa imprime no console a direção do movimento a cada casa percorrida pela peça.
 * 
 * Autor: [Pedro Henrique Cruz de Oliveira]
 * Data: 2025-05-22
 */

#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;     // Torre vai 5 casas para a direita
    int casasBispo = 5;     // Bispo vai 5 casas na diagonal para cima e à direita
    int casasRainha = 8;    // Rainha vai 8 casas para a esquerda

    int i; // variável auxiliar para repetição

    // ==================== TORRE ====================
    // Utiliza estrutura de repetição FOR
    // Movimento: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ==================== BISPO ====================
    // Utiliza estrutura de repetição WHILE
    // Movimento: 5 casas na diagonal (cima e direita)
    printf("Movimento do Bispo:\n");
    i = 1;
    while(i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // ==================== RAINHA ====================
    // Utiliza estrutura de repetição DO-WHILE
    // Movimento: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casasRainha);

    return 0;
}