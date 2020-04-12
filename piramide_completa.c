#include <stdio.h>

int main(int argc, char *argv[ ])
{
    int altura;
    int largura;
    altura = atoi(argv[1]);
    largura = altura * 2;

    int contador_esquerda = altura - 1;
    int contador_direita = altura;

    for (int linha = 0; linha < altura ; linha++) {
        for (int coluna = 0; coluna < largura ; coluna++) {   
            if( coluna < contador_esquerda)  {
                printf(" ");
            }else if (coluna < contador_direita)  {
                printf("#");
            }
        }
        contador_esquerda--;
        contador_direita++;
        printf("\n");
    }
}