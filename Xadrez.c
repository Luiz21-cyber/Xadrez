#include <stdio.h>
#include <stdlib.h>

// Função recursiva da TORRE

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);  // chamada recursiva
}

// Função recursiva do BISPO
// (versão com recursividade simples)
void moverBispoCimaDireita(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoCimaDireita(casas - 1);  //
}

// Função recursiva da RAINHA
void moverRainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);  
}

// Função com loops aninhados para o CAVALO
// Movimento em "L": 2 para cima, 1 para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    int x, y;

    for (x = 1; x <= 2; x++) {  // duas casas para cima
        for (y = 1; y <= 1; y++) {  // uma casa para a direita
            if (x == 2 && y == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }
        }
    }

    printf("\n");
}
// BISPO com recursividade + loops aninhados
// (loop externo vertical, interno horizontal)
void moverBispoComLoops(int limite) {
    printf("Movimento do Bispo (recursivo + loops aninhados):\n");
    int i, j;
    for (i = 1; i <= limite; i++) {
        for (j = 1; j <= i; j++) {
            printf("Diagonal Cima Direita\n");
        }
    }
    printf("\n");
}

// FUNÇÃO PRINCIPAL
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int limiteBispoLoops = 3;

    printf("Movimento da Torre:\n");
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoCimaDireita(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaEsquerda(casasRainha);
    printf("\n");

    moverCavalo();

    moverBispoComLoops(limiteBispoLoops);

    return 0;
}