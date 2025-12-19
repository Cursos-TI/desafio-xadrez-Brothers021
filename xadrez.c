#include <stdio.h>

void torre(int casas) { 
    // função recursiva 
    if (casas > 0)
    {
        printf("Direita\n");  // movimentação da torre
        torre(casas - 1); 
    }
    
}

void bispo(int casas) { // função recursiva do bispo 
// move o bispo 5 casas em diagonal
    if (casas > 0)
    { // loop externo 
     for(int i = 0; i < casas; i++){
        printf("Cima\n"); // move para cima

        for (int j = 0; j < casas; j++)// loop interno 
        {
            printf("Direita\n"); //movimento para o lado 
        }
        
     }
    }
    


void rainha(int casas) { // funçao recursiva para movimentar a rainha 
    // anda 8 casas para Cima
   if (casas > 0)
   {
    printf("Cima\n");
    torre(casas - 1);
   }
   
}

void cavalo(int linha, int coluna) { // função para movimentar o cavalo
    int movimentocompleto = 1; 

    while (movimentocompleto--) // repete o moviemnto para cima
    {
        for (int i = 0; i < 2; i++)
        {
            linha --; // sobe a linha (linha - 1)
            printf("Cima\n");
        }
        coluna++; // vai para a direita (coluna + 1)
        printf("direita\n");
    }
 }
 
// criando a chamada para o usuario 
int main(){
    int linha, coluna, opcao;
// entrada de dados 
    printf("\n Escolha a peça:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Movimentos
    printf("\nMovimentos possíveis:\n");

    switch (opcao)
    {
    case 1:
            torre (linha, coluna);
        break;
    case 2:
            bispo (linha, coluna);
        break;
    case 3: rainha (linha);
    break;
    case 4: cavalo (linha, coluna);
    break;
    default:
        printf("Opção invalida!\n");
    }

return 0;
}

