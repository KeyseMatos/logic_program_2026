/******************************************************************************

Leia uma matriz 4x4 e calcule a soma dos elementos da diagonal principal.
Leia uma matriz 4x4 de inteiros 
→Exiba a matriz completa 
Destaque visualmente os elementos da diagonal 
→Exiba a soma da diagonal principal 
→Extra: calcule também a diagonal secundária
💡DICAS
A diagonal principal é onde i == j
A diagonal secundária é onde i + j == n - 1 (n
= tamanho)
Basta um for simples para percorrer a diagonal:
soma += mat[i][i]
int m[4][4] i == j diagonal

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4];
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    // LEITURA DA MATRIZ
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o número [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // EXIBIÇÃO DA MATRIZ
    printf("\n========= MATRIZ =========\n\n");

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            // DIAGONAL PRINCIPAL
            if(i == j){

                printf("[%d]\t", matriz[i][j]);

                somaPrincipal += matriz[i][j];
            }

            // DIAGONAL SECUNDÁRIA
            else if(i + j == 4 - 1){

                printf("(%d)\t", matriz[i][j]);

                somaSecundaria += matriz[i][j];
            }

            else{

                printf("%d\t", matriz[i][j]);
            }
        }

        printf("\n");
    }

    // RESULTADOS
    printf("\nSoma da diagonal principal: %d\n", somaPrincipal);

    printf("Soma da diagonal secundária: %d\n", somaSecundaria);

    return 0;
}
