#include <stdio.h>
#include <stdlib.h>

// TORRE
void moverTorre(int x, int y) {
    printf("Movimentos da Torre:\n");
    for (int i = 1; i <= 5; i++) { // Move 5 para frente
        printf("Torre vai para frente (%d, %d)\n", x, y + i);
    }
}
// BISPO
void moverBispo(int x, int y) {
    printf("\nMovimentos do Bispo:\n");
    int i = 1;
    while (i <= 5) { // Move 5 na diagonal
        printf("Bispo vai para diagonal (%d, %d)\n", x + i, y + i);
        i++;
    }
}
// RAINHA
void moverRainha(int x, int y) {
    printf("\nMovimentos da Rainha:\n");
    int i = 1;
    do { 
        printf("Rainha vai para direita (%d, %d)\n", x, y + i);
        i++;
    } while (i <= 8);
}

int main() {
    int x, y;
    printf("Digite a posição inicial da peça (x): ");
    scanf("%d", &x);

    printf("Digite a posição inicial da peça (y): ");
    scanf("%d", &y);

    moverTorre(x, y);
    moverBispo(x, y);
    moverRainha(x, y);

    return 0;
}
