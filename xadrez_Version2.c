#include <stdio.h>

/*
    Programa: xadrez.c
    Descrição:
        Simula movimentos de peças de xadrez.
        Inclui lógica para o movimento do Cavalo (Knight) em "L":
        Para este desafio, o Cavalo move-se duas casas para baixo
        e uma casa para a esquerda (ordem: Baixo, Baixo, Esquerda).
        O movimento é detalhado passo a passo com saída descritiva.

    Autor: [Pedro Henrique Cruz de Oliveira]
    Data: [2025/05/23]
*/

int main() {
    // Movimentos de peças anteriores (exemplo)
    printf("Cima\n");
    printf("Direita\n");
    printf("Baixo\n");
    printf("Esquerda\n");

    // Separação do movimento do Cavalo
    printf("\n");

    // Lógica para o movimento do Cavalo (Knight)
    // Definição das variáveis para o movimento
    int casas_baixo = 2;     // Quantidade de casas para baixo
    int casas_esquerda = 1;  // Quantidade de casas para esquerda

    int i, j; // Variáveis de controle dos loops

    // Primeiro loop: representa as duas casas para baixo
    for (i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop (while): representa uma casa para a esquerda
    j = 0;
    while (j < casas_esquerda) {
        printf("Esquerda\n");
        j++;
    }

    /*
        Explicação dos loops:
        - O primeiro loop é um 'for' que executa duas vezes, imprimindo "Baixo" para cada casa.
        - O segundo loop é um 'while' que executa uma vez, imprimindo "Esquerda".
        - Os loops são aninhados logicamente na sequência do movimento em "L".
    */

    return 0;
}