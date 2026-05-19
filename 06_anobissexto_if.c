/******************************************************************************

Crie um programa que leia um ano e informe se ele
é ou não bissexto.
sexto se for divisível por 4 
Exceto anos centenários (divisíveis por 100) →
A menos que também sejam divisíveis por 400 →
Exemplos: 2000 ✅| 1900❌| 2024 ✅
Use o operador módulo % para checar divisibilidade
Ex: ano % 4 == 0 verifica se é divisível por 4
Combine com && e ||


*******************************************************************************/
#include <stdio.h>

int main()
{
   int ano;
   
   printf("Informe o ano: ");
   scanf("%d", &ano);
   
   if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
       
       printf("Ano bissexto!");
       
   }else{
       
       printf("Ano não bissexto!");
       
   }
   
  return 0;
}
