/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define ALUNO 3
#define DISCIPLINA 3

int main(){
    
float notas[ALUNO][DISCIPLINA];
float soma;
float media = 0;
    
    for (int i = 0; i<ALUNO; i++){
        
        soma = 0;
        
        printf("Aluno: %d\n", i + 1);
        
        for (int j = 0; j<DISCIPLINA; j++){
            
        printf("Nota: %d\n", j + 1);
            
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];

        }
        
        media = soma / 3;
        printf("Media: %f\n", media);
        printf("\n");
            
        if(media > 6){
            printf("Aluno Aprovado\n");
        }else{
            printf("Aluno Reprovado");
        }  
        printf("\n");
    }
  
    
  return 0;
}
