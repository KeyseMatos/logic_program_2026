/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main(){
    
    int numero;
    
    printf("Digite qual número deseja realizar a tabuada: ");
    scanf("%d", &numero);
    
    for (int num = 1; num <=10; num++){
        
        int resultado = num * numero;
        printf("%d X %d = %d\n", numero, num, resultado);
} 
    
}