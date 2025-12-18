#include <stdio.h>

int torre(int linha, int coluna) { 
    // move a torre 5 casas para direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    
}

int bispo(int linha, int coluna) {
// move o bispo 5 casas em diagonal
    int i = 1;
    while (i <= 5)
    {
        printf ("cima, direita\n");
        i++;
    }
}
int rainha(int linha) {
    // anda 8 casas para a esquerda 
    int i = 1;
    
    do
    {
        printf("esquerda\n");
        i++;
    } while (i <= 8);
}

int cavalo(int linha, int coluna) { // função para movimentar o cavalo
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

