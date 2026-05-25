/******************************************************************************

Leia um vetor com 8 números e permita que o
usuário busque um valor informando se foi
encontrado e em qual posição.
Preencha o vetor com 8 inteiros 
→Leia um valor a ser buscado 
→Informe se foi encontrado e em qual índice 
→Se não encontrado, exiba mensagem de erro 
→Extra: conte quantas vezes o valor aparece
💡DICAS
Use uma variável encontrado = 0 como flag
Se achar, mude para encontrado = 1 e guarde o
índice
Verifique o flag após o loop
int v[8] flag busca linear


*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero[8];
    int busca;
    int encontrado = 0;
    int qtd = 0;

    
    for(int i = 0; i < 8; i++){
        
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
        
    }
    
    printf("Qual número deseja buscar? ");
    scanf("%d", &busca);
    
    for(int i = 0; i < 8; i++){
        
        if(numero[i] == busca){
            
            encontrado = 1;
            qtd++ ;
            
        printf("valor %d encontrado na posição %d\n", busca, i);
        
        }
    }
    if(encontrado == 0){
        
        printf("Erro!");
        
    }else{
        
        printf("O valor %d apareceu %d vezes", busca, qtd);
    }
    

    return 0;
}
