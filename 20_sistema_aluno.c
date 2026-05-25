/******************************************************************************

Crie um sistema completo de notas para 4 alunos
com 3 disciplinas cada, organizado com funções.
Leia todas as notas em uma matriz 4x3 
→Calcule a média de cada aluno (por linha) 
→Exiba se cada aluno está Aprovado (≥6) ou
Reprovado
→Encontre a maior e a menor nota de toda a matriz 
→Calcule a média geral da turma 
→Extra: organize tudo em funções separadas
💡DICAS
Use #define ALUNOS 4 e #define DISC 3
para facilitar
Crie uma função para cada tarefa: lerNotas() ,
exibirMatriz() , calcularMedias()
Inicialize maior = notas[0][0] antes de buscar
o maior
float m[4][3] funções #define for aninhado

*******************************************************************************/
#include <stdio.h>

#define ALUNOS 4
#define DISC 3

// FUNÇÃO PARA LER AS NOTAS
void lerNotas(float notas[ALUNOS][DISC]){

    for(int i = 0; i < ALUNOS; i++){

        printf("\nAluno %d\n", i + 1);

        for(int j = 0; j < DISC; j++){

            printf("Digite a nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

// FUNÇÃO PARA EXIBIR A MATRIZ
void exibirMatriz(float notas[ALUNOS][DISC]){

    printf("\n======= MATRIZ DE NOTAS =======\n\n");

    for(int i = 0; i < ALUNOS; i++){

        for(int j = 0; j < DISC; j++){

            printf("%.1f\t", notas[i][j]);
        }

        printf("\n");
    }
}

// FUNÇÃO PARA CALCULAR MÉDIAS
void calcularMedias(float notas[ALUNOS][DISC]){

    float soma;
    float media;

    for(int i = 0; i < ALUNOS; i++){

        soma = 0;

        for(int j = 0; j < DISC; j++){

            soma += notas[i][j];
        }

        media = soma / DISC;

        printf("\nAluno %d -> Média: %.2f", i + 1, media);

        if(media >= 6){

            printf(" | APROVADO");
        }
        else{

            printf(" | REPROVADO");
        }
    }
}

// FUNÇÃO PARA MAIOR E MENOR NOTA
void maiorMenor(float notas[ALUNOS][DISC]){

    float maior = notas[0][0];
    float menor = notas[0][0];

    for(int i = 0; i < ALUNOS; i++){

        for(int j = 0; j < DISC; j++){

            if(notas[i][j] > maior){

                maior = notas[i][j];
            }

            if(notas[i][j] < menor){

                menor = notas[i][j];
            }
        }
    }

    printf("\n\nMaior nota: %.1f", maior);
    printf("\nMenor nota: %.1f\n", menor);
}

// FUNÇÃO MÉDIA GERAL
void mediaTurma(float notas[ALUNOS][DISC]){

    float soma = 0;
    float media;

    for(int i = 0; i < ALUNOS; i++){

        for(int j = 0; j < DISC; j++){

            soma += notas[i][j];
        }
    }

    media = soma / (ALUNOS * DISC);

    printf("\nMédia geral da turma: %.2f\n", media);
}

// FUNÇÃO PRINCIPAL
int main()
{
    float notas[ALUNOS][DISC];

    lerNotas(notas);

    exibirMatriz(notas);

    calcularMedias(notas);

    maiorMenor(notas);

    mediaTurma(notas);

    return 0;
}
