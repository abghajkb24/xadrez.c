/*
 * xadrez.c
 *
 * Simula movimentos de peças de xadrez (Torre, Bispo, Rainha e Cavalo) usando recursividade e loops complexos.
 *
 * Requisitos:
 * - Torre, Bispo e Rainha: movimentos implementados via recursão.
 * - Bispo: além da recursão, também usa loops aninhados (externo vertical, interno horizontal).
 * - Cavalo: movimentos implementados via loops aninhados complexos, usando break/continue.
 *
 * Observações:
 * - Não há validação de entrada do usuário.
 * - Os valores de casas a serem movidas são definidos como constantes.
 * - O programa imprime o movimento de cada peça no console.
 * - Todo o código usa apenas tipos inteiros e strings.
 */

#include <stdio.h>

// Número de casas para cada peça (definido como constantes)
#define TORRE_CASAS 3
#define BISPO_CASAS 2
#define RAINHA_CASAS 2
#define CAVALO_MOVIMENTOS 3 // Número de movimentos para cima e direita

// ===================== TORRE =====================

/*
 * Função recursiva que move a Torre para cima.
 * n: casas restantes para mover.
 */
void moverTorreCima(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    moverTorreCima(n - 1); // chamada recursiva
}

/*
 * Função recursiva que move a Torre para direita.
 * n: casas restantes para mover.
 */
void moverTorreDireita(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorreDireita(n - 1); // chamada recursiva
}

/*
 * Função recursiva que move a Torre para baixo.
 * n: casas restantes para mover.
 */
void moverTorreBaixo(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    moverTorreBaixo(n - 1); // chamada recursiva
}

/*
 * Função recursiva que move a Torre para esquerda.
 * n: casas restantes para mover.
 */
void moverTorreEsquerda(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverTorreEsquerda(n - 1); // chamada recursiva
}

/*
 * Simula todos os movimentos da Torre, usando recursão.
 */
void MovimentoTorre(int casas) {
    printf("Movimentação da Torre:\n");
    moverTorreCima(casas);
    moverTorreDireita(casas);
    moverTorreBaixo(casas);
    moverTorreEsquerda(casas);
    printf("\n");
}

// ===================== BISPO =====================

/*
 * Função recursiva para mover o Bispo em diagonal superior direita.
 * n: casas restantes para mover.
 */
void moverBispoCimaDireita(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoCimaDireita(n - 1);
}

/*
 * Função recursiva para mover o Bispo em diagonal superior esquerda.
 */
void moverBispoCimaEsquerda(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    printf("Esquerda\n");
    moverBispoCimaEsquerda(n - 1);
}

/*
 * Função recursiva para mover o Bispo em diagonal inferior direita.
 */
void moverBispoBaixoDireita(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    printf("Direita\n");
    moverBispoBaixoDireita(n - 1);
}

/*
 * Função recursiva para mover o Bispo em diagonal inferior esquerda.
 */
void moverBispoBaixoEsquerda(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    printf("Esquerda\n");
    moverBispoBaixoEsquerda(n - 1);
}

/*
 * Simula todos os movimentos do Bispo usando recursão.
 */
void MovimentoBispoRecursivo(int casas) {
    printf("Movimentação do Bispo (Recursão):\n");
    moverBispoCimaDireita(casas);
    moverBispoCimaEsquerda(casas);
    moverBispoBaixoDireita(casas);
    moverBispoBaixoEsquerda(casas);
    printf("\n");
}

/*
 * Simula todos os movimentos do Bispo usando loops aninhados.
 * O loop mais externo controla o movimento vertical e o interno o horizontal.
 */
void MovimentoBispoLoops(int casas) {
    printf("Movimentação do Bispo (Loops Aninhados):\n");
    for (int vertical = 1; vertical <= casas; vertical++) { // Externo: vertical
        for (int horizontal = 1; horizontal <= casas; horizontal++) { // Interno: horizontal
            // Diagonal para cima-direita
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= casas; horizontal++) {
            // Diagonal para cima-esquerda
            printf("Cima\n");
            printf("Esquerda\n");
        }
    }
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= casas; horizontal++) {
            // Diagonal para baixo-direita
            printf("Baixo\n");
            printf("Direita\n");
        }
    }
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= casas; horizontal++) {
            // Diagonal para baixo-esquerda
            printf("Baixo\n");
            printf("Esquerda\n");
        }
    }
    printf("\n");
}

// ===================== RAINHA =====================

/*
 * Movimenta a Rainha para cima (vertical), recursivamente.
 */
void moverRainhaCima(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    moverRainhaCima(n - 1);
}

/*
 * Movimenta a Rainha para direita (horizontal), recursivamente.
 */
void moverRainhaDireita(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverRainhaDireita(n - 1);
}

/*
 * Movimenta a Rainha em diagonal superior direita, recursivamente.
 */
void moverRainhaCimaDireita(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainhaCimaDireita(n - 1);
}

/*
 * Movimenta a Rainha em diagonal superior esquerda, recursivamente.
 */
void moverRainhaCimaEsquerda(int n) {
    if (n <= 0) return;
    printf("Cima\n");
    printf("Esquerda\n");
    moverRainhaCimaEsquerda(n - 1);
}

/*
 * Movimenta a Rainha para baixo (vertical), recursivamente.
 */
void moverRainhaBaixo(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    moverRainhaBaixo(n - 1);
}

/*
 * Movimenta a Rainha para esquerda (horizontal), recursivamente.
 */
void moverRainhaEsquerda(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(n - 1);
}

/*
 * Movimenta a Rainha em diagonal inferior direita, recursivamente.
 */
void moverRainhaBaixoDireita(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    printf("Direita\n");
    moverRainhaBaixoDireita(n - 1);
}

/*
 * Movimenta a Rainha em diagonal inferior esquerda, recursivamente.
 */
void moverRainhaBaixoEsquerda(int n) {
    if (n <= 0) return;
    printf("Baixo\n");
    printf("Esquerda\n");
    moverRainhaBaixoEsquerda(n - 1);
}

/*
 * Simula todos os movimentos da Rainha usando recursão.
 */
void MovimentoRainha(int casas) {
    printf("Movimentação da Rainha:\n");
    moverRainhaCima(casas);
    moverRainhaDireita(casas);
    moverRainhaCimaDireita(casas);
    moverRainhaCimaEsquerda(casas);
    moverRainhaBaixo(casas);
    moverRainhaEsquerda(casas);
    moverRainhaBaixoDireita(casas);
    moverRainhaBaixoEsquerda(casas);
    printf("\n");
}

// ===================== CAVALO =====================

/*
 * Movimenta o Cavalo em "L" para cima e para a direita, usando loops aninhados complexos.
 * O movimento do cavalo é: duas casas para cima e uma para a direita.
 */
void MovimentoCavalo(int movimentos) {
    printf("Movimentação do Cavalo (apenas para cima e direita, em 'L'):\n");
    // i: quantidade de movimentos para cima
    // j: quantidade de movimentos para direita
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= movimentos; j++) {
            // Só permite movimentos em "L": 2 para cima, 1 para direita
            if (!(i == 2 && j == 1)) {
                continue; // pula para o próximo, pois não é "L" válido
            }
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            // Com break, só executa uma vez para este par de (i, j)
            break;
        }
    }
    printf("\n");
}

// ===================== MAIN =====================

int main() {
    // Torre
    MovimentoTorre(TORRE_CASAS);

    // Bispo (recursivo)
    MovimentoBispoRecursivo(BISPO_CASAS);

    // Bispo (loops aninhados)
    MovimentoBispoLoops(BISPO_CASAS);

    // Rainha
    MovimentoRainha(RAINHA_CASAS);

    // Cavalo (loops aninhados complexos)
    MovimentoCavalo(CAVALO_MOVIMENTOS);

    return 0;
}

/*
 * Fim do arquivo xadrez.c
 *
 * Desenvolvido para o desafio final de estruturas de repetição.
 * Cada função está comentada detalhadamente para facilitar o entendimento.
 */