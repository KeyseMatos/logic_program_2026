/******************************************************************************

Crie um programa que leia uma nota (0 a 10) e
exiba a classificação correspondente.
→7 a 8 → Bom →
5 a 6 → Regular →
0 a 4 → Insuficiente →
Fora de 0–10 → Nota inválida
💡
 DICAS
Verifique a nota inválida primeiro, antes dos outros if
Use && para checar intervalo: nota >= 7 &&
nota <= 8
if/else if && operadores relacionais


*******************************************************************************/
#include <stdio.h>

int main()
{
   int nota;
   
   printf("Digite uma nota de (0 a 10): ");
   scanf("%d", &nota);
   
   if(nota < 0 || nota > 10){
       
       printf("Nota Inválida!");
       
   }else if(nota >= 7 && nota <= 8){
       
       printf("Bom!");
           
   }else if(nota >= 5 && nota <= 6){
       
       printf("Regular!");
   }else{
       
       printf("Insuficiente!");
   }
   return 0;
}
