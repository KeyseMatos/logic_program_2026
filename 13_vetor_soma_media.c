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
    int soma = 0;
    int maior, menor;
    float media;
    
    for(int i = 0; i < 6; i++){
        
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
        
        soma += numero[i];
        
        // PRIMEIRO NÚMERO
        if(i == 0){
            
            maior = numero[i];
            menor = numero[i];
        }
        
        // MAIOR
        if(numero[i] > maior){
       
            maior = numero[i];
       
        }
   
        // MENOR
        if(numero[i] < menor){
       
            menor = numero[i];
       
        }
    }
    
    media = soma / 6.0;
    
    printf("\nSoma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    
    printf("\nNúmeros acima da média:\n");
    
    for(int i = 0; i < 6; i++){
        
        if(numero[i] > media){
            printf("%d ", numero[i]);
        }
    }

    return 0;
}
