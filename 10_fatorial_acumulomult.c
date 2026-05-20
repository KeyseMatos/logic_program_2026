/******************************************************************************

Crie um programa que leia um número inteiro N e
calcule o fatorial de N (N!).
Leia N (inteiro não negativo) 
→Calcule: 5! = 5 × 4 × 3 × 2 × 1 = 120 
→Trate o caso especial: 0! = 1 
→Exiba o resultado
💡DICAS
Inicialize fatorial = 1 (não 0!)
Use long int para números maiores, pois fatorial
cresce rápido
Teste com: 0, 1, 5, 10
for multiplicador long int


*******************************************************************************/
#include <stdio.h>


int main()
{
    int numero;
    long int fatorial = 1;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++){
        
        if(numero == 0){
            
           printf("O resultado do fatorial 0! é : 1!\n"); 
           
        }else{
            
            fatorial *= i;

        }
    }
    printf("O resultado do fatorial %d! é: %d\n", numero,fatorial);
    
    return 0;
}
