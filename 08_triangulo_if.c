/******************************************************************************

Leia três lados e determine se formam um triângulo
válido e, se sim, qual o tipo
Verifique se é triângulo válido: cada lado deve ser
menor que a soma dos outros dois
→Se válido: Equilátero (3 lados iguais), Isósceles (2
iguais) ou Escaleno (todos diferentes)
→Se inválido: exibir mensagem de erro
💡
 DICAS
Valide primeiro com && : a+b>c && a+c>b &&
b+c>a
Use float para aceitar medidas decimais
if/else && float


*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main()
{
    int lado[3];

    /* LEITURA DOS LADOS */
    for(int i = 0; i < 3; i++)
    {
        printf("Digite o lado [%d]: ", i);
        scanf("%d", &lado[i]);
    }

    /* VALIDACAO DO TRIANGULO */
    if(lado[0] + lado[1] > lado[2] &&
       lado[1] + lado[2] > lado[0] &&
       lado[2] + lado[0] > lado[1])
    {
        printf("Triangulo Valido\n");

        /* TIPO DO TRIANGULO */
        if(lado[0] == lado[1] &&
           lado[1] == lado[2])
        {
            printf("Equilatero (3 lados iguais)");
        }
        else if(lado[0] == lado[1] ||
                lado[1] == lado[2] ||
                lado[0] == lado[2])
        {
            printf("Isosceles (2 lados iguais)");
        }
        else
        {
            printf("Escaleno (todos diferentes)");
        }
    }
    else
    {
        printf("Lados invalidos para formar um triangulo!");
    }

    return 0;
}
