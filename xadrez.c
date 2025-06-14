#include <stdio.h>

// Movimentos das peças
#define BISPO_MOVE 5
#define TORRE_MOVE 5
#define RAINHA_MOVE 8
#define CAVALO_MOVE 1

int main() {
    
    int pecaEscolhida; // Escolha do usuário

    printf("Movimente uma peça de xadrez: \n");
    printf("Bispo(0)\n");
    printf("Torre(1)\n");
    printf("Rainha(2)\n");
    printf("Cavalo(3)\n");
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
            break;
        }
        case 2: {
            printf("Você escolheu a Rainha! \n");
            int k = 0;
            do{
                printf("Esquerda\n");
                k++;
            } while (k < RAINHA_MOVE);
            break;
        }
        case 3: {
            printf("Você escolheu o Cavalo!\n");
            for(int i = 0; i < CAVALO_MOVE; i++) { // Número de movimentos que o cavalo pode fazer
                // Lógica do movimento do cavalo em L
                int movements = 0; 
                while(movements < 2) {
                    printf("Baixo, ");
                    movements++;
                }
                printf("Esquerda\n");
            }
            break;
        }
        default:
            printf("Peça inválida. Escolha 0 (Bispo), 1 (Torre), 2 (Rainha) ou 3 (Cavalo) \n");
            break;
    }
    return 0;
}
