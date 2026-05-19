/******************************************************************************

Crie um programa que leia as medidas de uma
figura e calcule sua área.
Exiba um menu: 1-Círculo, 2-Retângulo, 3-
Triângulo
→
→ Leia a opção e os dados necessários
→ Calcule e exiba a área correspondente
💡 DICAS
Use #define PI 3.14159 para a constante PI
Círculo: PI * r * r
Retângulo: base * altura
Triângulo: (base * altura) / 2



*******************************************************************************/
#include <stdio.h>
#define PI 3.14159

int main()
{
    float raio, base, altura, triangulo, retangulo, circulo;
    int opcao;
    
    
    do {
        
        printf("\n=========MENU========\n");
        printf("1-Círculo\n");
        printf("2-Retângulo\n");
        printf("3-Triângulo\n");
        printf("4-Sair\n");
        
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        
        if(opcao == 1){
            printf("Digite o raio do círculo: ");
            scanf("%f", &raio);
            
            circulo = PI * raio * raio;
            
            printf("A área do Círculo é: %.2f", circulo);
            
        }else if(opcao == 2){
            printf("Digite a base do seu Retângulo: ");
            scanf("%f", &base);
            
            printf("Digite a altura do seu Retângulo: ");
            scanf("%f", &altura);
            
            retangulo = base * altura;
            
            printf("O seu Retângulo tem o calculo de: %.2f", retangulo);
            
        }else if(opcao == 3){
            printf("Digite a base do seu Triângulo: ");
            scanf("%f", &base);
            
            printf("Digite a altura do seu Triângulo: ");
            scanf("%f", &altura);
            
            triangulo = (base * altura) / 2;
            
            printf("O seu Triângulo tem o calculo de: %.2f", triangulo);
        }
       
    }while(opcao != 4);
    
    return 0;
}
