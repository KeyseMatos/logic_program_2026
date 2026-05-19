/******************************************************************************

Crie um programa que leia três números inteiros e
exiba qual é o maior, o do meio e o menor.
rês números: A, B e C →
Exiba o maior, o intermediário e o menor →
Trate o caso em que dois ou três números são
iguais
💡DICAS
Use if/else if/else aninhados
Pense em todos os casos possíveis antes de codificar
Teste com: (3,1,2), (5,5,3), (2,2,2)
if aninhado operadores relacionais



*******************************************************************************/
#include <stdio.h>

int main()
{
  int numero[3], maior, intermediario, menor;
  
  for(int i = 0; i < 3; i++){
      
      printf("Digite o número [%d]: ", i);
      scanf("%d", &numero[i]);
      
      if(numero[0] >= numero[1] && numero[0] >= numero[2]){
          
          maior = numero[0];
          
      }else if(numero[1] >= numero[0] && numero[1] >= numero[2]){
          
          maior = numero[1];
          
      }else if(numero[2] >= numero[0] && numero[2] >= numero[1]){
          
          maior = numero[2];
  }
  
    if(numero[0] <= numero[1] && numero[0] <= numero[2]){
          
          menor = numero[0];
          
      }else if(numero[1] <= numero[0] && numero[1] <= numero[2]){
          
          menor = numero[1];
          
      }else if(numero[2] <= numero[0] && numero[2] <= numero[1]){
          
          menor = numero[2];
      }
      
      intermediario = numero[0] + numero[1] + numero[2] - maior - menor;
}

    printf("\nMaior: %d", maior);
    printf("\nIntermediario: %d", intermediario);
    printf("\nMenor: %d", menor);
    
    return 0;
}
   
