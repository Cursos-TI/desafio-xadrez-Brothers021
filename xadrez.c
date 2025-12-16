#include <stdio.h>

void torre(int linha, int coluna) {
    // move a torre 5 casas para direita
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    
}

void bispo(int linha, int coluna) {
// move o bispo 5 casas em diagonal
    int i = 1;
    while (i <= 5)
    {
        printf ("cima, direita\n");
        i++;
    }
}
 void rainha(int linha) {
    // anda 8 casas para a esquerda 
    int i = 1;
    
    do
    {
        printf("esquerda\n", linha - i);
        i++;
    } while (i <= 8);
    
 } // criando a chamada para o usuario 
int main(){
    int linha, coluna, opcao;
// entrada de dados 
    printf("\n Escolha a peça:\n");
    printf("1 - torre\n");
    printf("2 - bispo\n");
    printf("3- rainha\n");
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
    default:
        printf("Opção invalida!\n");
    }

return 0;
}

