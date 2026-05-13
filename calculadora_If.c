/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){

float num1, num2, resultado;
int opcao;

printf("Digite o primeiro número: ");
scanf("%f", &num1);

printf("Digite o segundo número: ");
scanf("%f", &num2);

printf(" ====CALCULADORA==== \n");
printf(" 1 - Soma \n");
printf(" 2 - Subtração \n");
printf(" 3 - Multiplicação \n");
printf(" 4 - Divisão \n");
scanf("%d", &opcao);

if (opcao == 1){
    float resultado = num1 + num2;
    printf("O resltado da soma é: %f", resultado);
} else if (opcao == 2){
    float resultado = num1 - num2;
    printf("O resultado da subtração é: %f", resultado);
}else if (opcao == 3){
    float resultado = num1 * num2;
    printf("O resultado da multiplicação é: %f", resultado);
} else{
    if(num2 != 0){
    float resultado = num1 / num2;
    printf("O resultado da divisão é: %.2f", resultado);
}else{
printf("Erro, o segundo número deve ser diferente de 0 ");
}
    
}

return 0;
}