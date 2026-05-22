#include <stdio.h>

int main()
{
    int numero, base, expoente;
    int opcao;

    do {

        printf("==================MENU================\n");
        printf("1 — Calcular quadrado de um número\n");
        printf("2 — Verificar se número é par ou ímpar\n");
        printf("3 — Calcular potência (base ^ expoente)\n");
        printf("4 — Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("Digite um número: ");
            scanf("%d", &numero);

            int resultado = numero * numero;

            printf("O quadrado do número digitado é: %d\n", resultado);

        } else if (opcao == 2) {

            printf("Digite um número: ");
            scanf("%d", &numero);

            if (numero % 2 == 0) {
                printf("%d é par\n", numero);
            } else {
                printf("%d é ímpar\n", numero);
            }

        } else if (opcao == 3) {

            printf("Digite a base: ");
            scanf("%d", &base);

            printf("Digite o expoente: ");
            scanf("%d", &expoente);

            int resultado = 1;

            for (int i = 1; i <= expoente; i++) {
                resultado = resultado * base;
            }

            printf("O resultado é: %d\n", resultado);

        } else if (opcao == 4) {

            printf("Saindo...\n");

        } else {

            printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    return 0;
}
