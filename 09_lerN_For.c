/******************************************************************************

Crie um programa que leia um número N e calcule
a soma de todos os inteiros de 1 até N.
Leia N como inteiro positivo 
→Use for para somar 1 + 2 + 3 + ... + N 
→Exiba o resultado 
→Extra: exiba também a média dos valores
💡
 DICAS
Crie uma variável soma = 0 antes do loop
Dentro do for, acumule: soma = soma + i ou
soma += i
for acumulador in


*******************************************************************************/
#include <stdio.h>


int main()
{
    int numero, media;
    int soma = 0;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    for(int i = 0; i <= numero; i++){
        
        soma +=i;
  
        media = soma / numero;
     
    }
    
    printf("O resultado da soma é: %d\n", soma);
    printf("O resltado da média é: %d\n", media);
            
    return 0;
}
