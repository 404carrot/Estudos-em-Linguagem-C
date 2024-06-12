#include <stdio.h>
#include <stdlib.h>

int main(void)
{

#define LINHAS 3  // CONSTATNTE
#define COLUNAS 3 // CONSTATNTE

    int vetor [LINHAS] [COLUNAS], i, j;

    for (i = 0; i < LINHAS; i++)
    {

        for (j = 0; j < COLUNAS; j++)
        {
            printf("Linhas [%d] x 5 = %d Colunas [%d] x 5 = %d\n", i, i * 5, j, j * 5);

            // scanf("%d", &vetor[i][j]);
        }
    }

    return 0;
}
