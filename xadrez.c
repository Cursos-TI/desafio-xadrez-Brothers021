#include <stdio.h>

// Função recursiva da Torre
void movertorre(int casas) { 
    if (casas > 0) {
        printf("Direita\n");  // movimentação da torre
        movertorre(casas - 1); 
    }
}

// Função recursiva + loop aninhado do Bispo
void moverbispo(int casas) {
    if (casas > 0) {
        // loop externo: controla o movimento vertical
        for (int i = 0; i < casas; i++) {
            printf("Cima\n");
            
            // loop interno: controla o movimento horizontal
            for (int j = 0; j < 1; j++) {  
                printf("Direita\n");
            }
        }
        // chamada recursiva para reduzir casas
        moverbispo(casas - 1);
    }
}

// Função recursiva da Rainha
void moverrainha(int casas) { 
    if (casas > 0) {
        printf("Cima\n");
        moverrainha(casas - 1);
    }
}

// Função com loops complexos do Cavalo
void movercavalo(int movimentos) { 
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue; // pula quando i == j
            if (i + j > movimentos) break; // interrompe quando soma passa do limite
            
            // movimento em "L": duas casas para cima e uma para direita
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main() {
    int opcao;
    int torre = 5;
    int bispo = 2;
    int rainha = 4;
    int cavalo = 2;
    
    do { 
        // Menu de opções
        printf("\nEscolha a peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // Movimentos
        printf("\nMovimentos possíveis:\n");

        switch (opcao) {
            case 1:
                printf("\nMovimento da Torre:\n");
                movertorre(torre);
                printf("\n");
                break;
            case 2:
                printf("\nMovimento do Bispo:\n");
                moverbispo(bispo);
                printf("\n");
                break;
            case 3:
                printf("\nMovimento da Rainha:\n");
                moverrainha(rainha);
                printf("\n");
                break;
            case 4:
                printf("\nMovimento do Cavalo:\n");
                movercavalo(cavalo);
                printf("\n");
                break;
            case 0: 
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}



