#include <stdio.h>

// Movimentos das peças
#define BISPO_MOVE 5
#define TORRE_MOVE 5
#define RAINHA_MOVE 8

int main() {
    
    int pecaEscolhida; // Escolha do usuário

    printf("Movimente uma peça de xadrez: \n");
    printf("Bispo(0)\n");
    printf("Torre(1)\n");
    printf("Rainha(2)\n");
    scanf("%d", &pecaEscolhida); // Entrada de dados


    // Movimentação de acordo com o que o usuário escolher
    switch(pecaEscolhida) {
        case 0: {
            printf("Você escolheu o Bispo! \n");
            for(int i = 0; i < BISPO_MOVE; i++) {
                printf("Cima\n");
                printf("Direita\n");
            }
            break;
        }
        case 1: {
            printf("Você escolheu a Torre! \n");
            int j = 0;
            while (j < TORRE_MOVE) {
                printf("Direita\n");
                j++;
            }
        }
        case 2: {
            printf("Você escolheu a Rainha! \n");
            int k = 0;
            do{
                printf("Esquerda\n");
                k++;
            } while (k < RAINHA_MOVE);
        }
        default:
            printf("Peça inválida. Escolha 0 (Bispo), 1 (Torre) ou 2 (Rainha).\n");
            break;
    }
    return 0;
}
