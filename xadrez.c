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
    while (1 <= 5);
    {
        printf ("%d\n", linha - i,);
        i++;
    }
}
 void rainha(int linha) {
    // anda 8 casas para a esquerda 
    int i = 1;
    
    do
    {
        printf("%d\n", linha - i);
        i++;
    } while (i <= 8);
    
 } // criando a chamada para o usuario 
int main(){
    int linha, opcao;

    printf("Digite a linha inicial (0 a 7): ");
    scanf("%d", &linha);

    printf("\n Escolha a peça:\n");
    printf("1 - torre\n");
    printf("2 - bispo\n");
    printf("3- rainha\n");
    printf("Opção: ");
    scanf("%d", opcao);

    // Movimentos


}

