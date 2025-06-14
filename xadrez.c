#include <stdio.h>

// Movimentos das peças
#define BISPO_MOVE 5
#define TORRE_MOVE 5
#define RAINHA_MOVE 8
#define CAVALO_MOVE 1 // Número de movimentos que o cavalo pode fazer nesse xadrez, não a quantidade de casas


void moverBispo(int passos) {
    if (passos == 0) return; // quebrar o loop da recursão

    // Loop externo = vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno = horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
        printf("Cima\n");
    }

    moverBispo(passos - 1);
}
void moverTorre(int passos) {
    if(passos == 0) return; // quebrar o loop da recursão
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if(passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverCavalo() {
    
    for (int i = 0; i < CAVALO_MOVE; i++) { // número de movimentos que o cavalo irá fazer
        int cima = 0, direita = 0;

        for (int j = 0; j < 3; j++) { // movimentando para cima
            if (j < 2) {
                printf("Cima, ");
                cima++;
            } else {
                if (cima != 2) continue; // validação de movimento em L
                printf("Direita\n");
                direita++;
            }
        }

        // Separador entre movimentos
        if (cima == 2 && direita == 1) {
            printf("Movimento concluído.\n\n");
        } else {
            printf("Movimento inválido.\n\n");
        }
    }
}

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
            moverBispo(BISPO_MOVE);
            break;
        }
        case 1: {
            printf("Você escolheu a Torre! \n");
            moverTorre(TORRE_MOVE);
            break;
        }
        case 2: {
            printf("Você escolheu a Rainha! \n");
            moverRainha(RAINHA_MOVE);
            break;
        }
        case 3: {
            printf("Você escolheu o Cavalo!\n");
            moverCavalo();
            break;
        }
        default:
            printf("Peça inválida. Escolha 0 (Bispo), 1 (Torre), 2 (Rainha) ou 3 (Cavalo) \n"); // exceção
            break;
    }
    return 0;
}
