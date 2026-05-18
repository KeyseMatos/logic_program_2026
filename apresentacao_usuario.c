/******************************************************************************

Crie um programa que leia o nome, idade e cidade
do usuário e exiba uma mensagem de
apresentação formatada.
→ Leia o nome completo com espaço
→ Leia a idade como inteiro
→ Leia a cidade como string
Exiba: "Olá! Meu nome é [nome], tenho [idade]
anos e sou de [cidade]."
💡 DICAS
Use char nome[50] para strings
Para ler strings com espaço: scanf(" %[^\n]",
nome)
Use %s para exibir strings no printf

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50], cidade[50];
    int idade;
    
    printf("\n Digite o seu nome: ");
    scanf(" %[^\n]", &nome);
    
    printf("\n Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("\n Digite a sua cidade: ");
    scanf(" %[^\n]", &cidade);
    
    printf("Olá! Meu nome é %s, tenho %d anos e sou de %s.", nome, idade, cidade);
}
