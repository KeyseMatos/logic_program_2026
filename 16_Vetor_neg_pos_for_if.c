/******************************************************************************

Leia 10 inteiros em um vetor e conte e exiba
separadamente os positivos, negativos e zeros.
Leia 10 inteiros 
→Conte quantos são positivos, negativos e zero 
→Exiba a soma apenas dos positivos 
→Exiba a média apenas dos negativos
💡DICAS
Use três contadores: cPos = 0 , cNeg = 0 ,cZero = 0
Use if/else if/else dentro do for para
classificar cada elemento
Cuidado ao calcular média: verifique se cNeg > 0
antes de dividir
int v[10] contadores if dentro do fo

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero[10];
    int positivo = 0;
    int negativo = 0;
    int zero = 0;
    
    int somaPositivo = 0;
    int somaNegativo = 0;
    
    float mediaPositivos;

    // LEITURA DOS NÚMEROS
    for(int i = 0; i < 10; i++){
        
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
        
    }
    
    // CLASSIFICAÇÃO
    for(int i = 0; i < 10; i++){
        
        if(numero[i] > 0){
            
            positivo++;
            somaPositivo += numero[i];
        
        }
        else if(numero[i] < 0){
            
            negativo++;
            somaNegativo += numero[i];
            
        }
        else{
            
            zero++;
        }
    }
    
    // MÉDIA DOS POSITIVOS
    if(positivo > 0){
        
        mediaPositivos = (float)somaPositivo / positivo;
        
        printf("\nMédia dos positivos: %.2f\n", mediaPositivos);
        
    }
    else{
        
        printf("\nNão existem números positivos.\n");
    }
   
    // RESULTADOS
    printf("\nQuantidade de positivos: %d\n", positivo);
    printf("Quantidade de negativos: %d\n", negativo);
    printf("Quantidade de zeros: %d\n", zero);
    
    printf("Soma dos positivos: %d\n", somaPositivo);

    return 0;
}
