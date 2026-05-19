/******************************************************************************

Crie um programa que leia o peso (kg) e a altura
(m) de uma pessoa, calcule o IMC e exiba o
resultado.
→ Leia peso e altura como float
→ Calcule: IMC = peso / (altura × altura)
→ Exiba o IMC com 2 casas decimais
Exiba a classificação: Abaixo do peso (<18.5),
Normal (18.5–24.9), Sobrepeso (25–29.9),
Obesidade (≥30)
💡 DICAS
Use %.2f para exibir 2 casas decimais
Lembre dos operadores relacionais: >= e <
Use float ou double para os cálculos


*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, altura;
    float IMC;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    IMC = peso / (altura*altura);
    
    printf("O seu IMC é de: %.2f\n", IMC );
    
    if(IMC < 18.5){
        printf("Abaixo do peso");
    }else if(IMC >= 18.5 && IMC <= 24.9){
        printf("Normal");
    }else if(IMC >= 25 && IMC <=29.9){
        printf("Sobrepeso");
    }else{
        printf("Obesidade");
    }
    
    return 0;
}
