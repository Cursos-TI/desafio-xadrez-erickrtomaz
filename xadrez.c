#include <stdio.h>

int main() {
    int movimentoTorre, movimentoBispo, movimentoRainha;
    int i, j, k;

    // -------------------------------
    // Entrada de dados
    // -------------------------------
    printf("=== Simulador de Movimentos de Xadrez ===\n\n");

    printf("Digite quantas casas a TORRE deve andar para a direita: ");
    scanf("%d", &movimentoTorre);

    printf("Digite quantas casas o BISPO deve andar na diagonal (cima e direita): ");
    scanf("%d", &movimentoBispo);

    printf("Digite quantas casas a RAINHA deve andar para a esquerda: ");
    scanf("%d", &movimentoRainha);

    printf("\n");

    // -------------------------------
    // Movimento da TORRE (for)
    // -------------------------------
    printf("=== Movimento da TORRE ===\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // -------------------------------
    // Movimento do BISPO (while)
    // -------------------------------
    printf("=== Movimento do BISPO ===\n");
    j = 1;
    while (j <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }
    printf("\n");

    // -------------------------------
    // Movimento da RAINHA (do-while)
    // -------------------------------
    printf("=== Movimento da RAINHA ===\n");
    k = 1;
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= movimentoRainha);

    printf("\n=== Fim da simulação de movimentos ===\n");

    return 0;
}
