/******************************************************************************

Leia um vetor com 5 elementos, exiba o original e
depois exiba na ordem inversa.
Leia 5 inteiros para o vetor 
→Exiba os elementos na ordem original 
→Exiba os elementos na ordem inversa 
→Extra: inverta de verdade, trocando os elementos
dentro do vetor
Para exibir invertido sem alterar: for(i = 4; i >=
0; i--)
Para inverter de verdade: troque v[0] com v[4] ,
v[1] com v[3] usando uma variável auxiliar
int v[5] for reverso troca de valores

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main()
{
    int numero[5];
    
    for(int i = 0; i < 5; i++){
        
        printf("\nDigite o número do vetor %d: ", i);
        scanf("%d", &numero[i]);
        
    }
    
    printf("\nOs números dos vetores são:\n");
    
    for(int i = 0; i < 5; i++){
        
        printf("%d | ", numero[i]);
    
    }
    
    printf("\nOs números dos vetores invertidos são:\n");
    
    for(int i = 4; i >= 0; i--){
        
        printf("%d | ", numero[i]);
        
    }
    return 0;
}
