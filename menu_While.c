/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
    
    int opcao;
    int numero;
    
    while (opcao != 3){
        
        printf("==================MENU================\n");
        printf(" 1- Visualizar dobro do número\n");
        printf(" 2- Visualizar quadrado do número\n");
        printf(" 3- Sair\n");
        
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        
        if (opcao == 1){
            
            printf("Digite um número: ");
            scanf("%d", &numero);
            int resultado = numero * 2;
            printf("O dobro do número digitado é: %d\n", resultado);
            
        } else if (opcao == 2){
            
            printf("Digite um número: ");
            scanf("%d", &numero);
            int resultado = numero * 4;
            printf("O quadrado do número digitado é: %d\n", resultado);
            
        } else {
            
            printf("Encerrando...\n");
            break;
        }
        }
        return 0;
    }
