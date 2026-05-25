/******************************************************************************

Crie um programa que leia e exiba uma matriz 3x3
de inteiros de forma formatada.
Leia os 9 valores com for aninhado 
→Exiba a matriz formatada com linhas e colunas visíveis
→Calcule e exiba a soma de todos os elementos 
→Extra: exiba a soma de cada linha separadamente
💡DICAS
Declare: int mat[3][3]
Use \t no printf para alinhar as colunas
Use \n ao final de cada linha (após o for interno)
int m[3][3] for aninhado \t

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int soma = 0;
    
    for(int i = 0; i < 3; i++){
        
        for(int j = 0; j < 3; j++){
            
        printf("Digite o número [%d][%d]: ", i , j);
        scanf("%d", &matriz[i][j]);
        
        }
    }
    
    printf("=========MATRIZ==========\n");
    
        for(int i = 0; i < 3; i++){
            
            int linha = 0; 
        
            for(int j = 0; j < 3; j++){
            
            printf("%d\t", matriz[i][j]);
            
            soma += matriz[i][j];
            linha+= matriz[i][j];

        }
        
    printf(" | Soma das linha: %d", linha);
    
    printf("\n");
    
    }

    printf("\nSoma total da matriz: %d\n", soma);
    
    return 0;
}
