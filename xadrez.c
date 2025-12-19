#include <stdio.h>

void movertorre(int casas) { 
    // função recursiva 
    if (casas > 0)
    {
        printf("Direita\n");  // movimentação da torre
        movertorre(casas - 1); 
    }
    
}

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

void moverrainha(int casas) { // funçao recursiva para movimentar a rainha 
    // anda 8 casas para Cima
   if (casas > 0)
   {
    printf("Cima\n");
    moverrainha(casas - 1);
   }
   
}

void movercavalo(int movimentos) { // função para movimentar o cavalo
    for (int i = 0; i < movimentos; i++)
    {
        for (int j = 0; j < movimentos; j++)
        {
            if (i == j ) continue; // faz pular a contagem quando i for igual "==" j 
            
            if (i + j > movimentos) break; // faz parar quando a soma passa do limite 
            printf("Cima\n");
            printf("Cima\n");  // vai aprecer o movimento da peça 
            printf("Direita\n");
        }
        
    }
    
 }
  
int main(){
    int opcao;
    int torre = 5;
    int bispo = 2;
    int rainha = 4;
    int cavalo = 2;
    
    do
    { 
        // aparecer as opções para escolher 
    printf("\n Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("0 - Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Movimentos
    printf("\nMovimentos possíveis:\n");

    switch (opcao)
    {
    case 1:
            printf("\nMovimento da torre:\n");
            movertorre(torre);
            printf("\n");
        break;
    case 2:
            printf("\nMovimento da bispo:\n");
            moverbispo(bispo);
            printf("\n");
        break;
    case 3: printf("\nMovimento da rainha:\n");
            moverrainha(rainha);
            printf("\n");
    break;
    case 4: printf("\nMovimento da cavalo:\n");
            movercavalo(cavalo);
            printf("\n");
    break;
    case 0: 
    printf("Saindo...\n");
    break;
    default:
        printf("Opção invalida!\n");
    }

    } while (opcao != 0);

return 0;
}

