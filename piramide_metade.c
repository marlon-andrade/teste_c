#include <stdio.h>

int main(int argc, char *argv[ ])
{
    int n;
    n = atoi(argv[1]);

    int contador  = n - 1;
    for (int linha = 0; linha < n ; linha++) {
        for (int coluna = 0; coluna < n ; coluna++) {   
            if( coluna < contador)  {
                printf(" ");
            } else {
                printf("#");
            }
        }
        contador--;
        printf("\n");
    }
}