/******************************************************************************

Leia 6 números em um vetor e calcule estatísticas sobre eles.
Leia 6 valores com scanf dentro de um for
Calcule e exiba: soma, média, menor e maior valor
Exiba quais valores estão acima da média
💡 Dicas: Inicialize maior = vetor[0] e menor = vetor[0] antes do loop
Faça dois loops: um para leitura e cálculo, outro para exibir acima da média
float v[6]
for
min/max

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero[6];
    
    for(int i = 0; numero <= 6; i++){
        
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        soma += numero;
        
        
        
        
    }
    
    media = soma / 6;
    printf("A soma dos números é: %d\n", soma);
    
    
    return 0;
}
