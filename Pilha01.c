#include <stdio.h>

#define MAX 10

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

/* FUNÇÕES DA PILHA */

void inicializar(Pilha *p) {
    p->topo = -1;
}

int estaVazia(Pilha *p) {
    return p->topo == -1;
}

int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

void push(Pilha *p, int valor) {
    if (estaCheia(p)) {
        printf("Pilha cheia!\n");
        return;
    }

    p->dados[++p->topo] = valor;
}

int pop(Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia!\n");
        return -1;
    }

    return p->dados[p->topo--];
}

int peek(Pilha *p) {
    if (estaVazia(p)) return -1;

    return p->dados[p->topo];
}

/* MAIN */

int main() {

    Pilha historico;
    Pilha lixeira;

    inicializar(&historico);
    inicializar(&lixeira);

    int opcao;
    int acao;
    int valor;

    do {

        printf("\n==== MENU ====\n");
        printf("1. Executar nova ação\n");
        printf("2. Ctrl+Z — Desfazer\n");
        printf("3. Ctrl+Y — Refazer\n");
        printf("4. Ver topo das pilhas\n");
        printf("0. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                printf("Digite a ação (número): ");
                scanf("%d", &acao);

                push(&historico, acao);

                printf("Ação adicionada!\n");
                break;

            case 2:
                valor = pop(&historico);

                if (valor != -1) {
                    push(&lixeira, valor);
                    printf("Desfeito: %d\n", valor);
                }
                break;

            case 3:
                valor = pop(&lixeira);

                if (valor != -1) {
                    push(&historico, valor);
                    printf("Refeito: %d\n", valor);
                }
                break;

            case 4:
                printf("Topo histórico: %d\n", peek(&historico));
                printf("Topo lixeira: %d\n", peek(&lixeira));
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
