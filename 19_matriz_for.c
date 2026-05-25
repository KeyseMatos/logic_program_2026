/******************************************************************************

Leia duas matrizes 2x2 e calcule e exiba a matriz
resultante da soma entre elas.
Leia a matriz A (2x2) →
Leia a matriz B (2x2) →
Calcule a matriz C = A + B, onde C[i][j] = A[i]
[j] + B[i][j]
→Exiba as três matrizes formatadas
💡DICAS
Declare três matrizes: int A[2][2], B[2][2],
C[2][2]
Use for aninhado para cada operação: leitura de A,
leitura de B, cálculo de C e exibição
múltiplas matrizes for aninhad

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2];

    // LEITURA DA MATRIZ A
    printf("===== MATRIZ A =====\n");

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // LEITURA DA MATRIZ B
    printf("\n===== MATRIZ B =====\n");

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            printf("Digite B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // SOMA DAS MATRIZES
    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // EXIBIR MATRIZ A
    printf("\n===== MATRIZ A =====\n");

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            printf("%d\t", A[i][j]);
        }

        printf("\n");
    }

    // EXIBIR MATRIZ B
    printf("\n===== MATRIZ B =====\n");

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            printf("%d\t", B[i][j]);
        }

        printf("\n");
    }

    // EXIBIR MATRIZ C
    printf("\n===== MATRIZ RESULTANTE =====\n");

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            printf("%d\t", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}
