#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct Aluno {
    char nome[30];
    int matricula;
    int curso;
};
void Cadastro(Aluno aluno[], int n);
void Imprime(Aluno aluno[], int n);

int main() {
    int n;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", & n);

    Aluno aluno[n];
    system("cls");


    Cadastro(aluno, n);
    Imprime(aluno,  n);

    return 0;
}


void Cadastro(Aluno aluno[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\t***Cadastro de Alunos***\n\n");
        printf("\nDiciplinas de acordo com os numeros\n");
        printf("1 - Metodos de Programacao\n");
        printf("2 - Matematica Aplicada\n");
        printf("3 - Metodos de Programacao/Matematica Aplicada\n");
        printf("\nDigite a opcao da diciplina: ");
        scanf("%d", & aluno[i].curso);
        if (aluno[i].curso > 0 && aluno[i].curso < 4) {
            printf("\nDigite o nome do aluno: ");
            fflush(stdin);
            gets(aluno[i].nome);
            printf("\nDigite a matricula do aluno: ");
            scanf("%d", & aluno[i].matricula);

            for (int j = 0; j < i; j++) {
                if (aluno[i].matricula == aluno[j].matricula) {
                    printf("\nMatricula ja cadastrada");

                    printf("\nDigite novamente a matricula do aluno: ");
                    scanf("%d", & aluno[i].matricula);
                    j = -1;

                }


            }
        } else {
            i--;
        }
        system("cls");

    }


}

void Imprime(Aluno aluno[], int n){
   printf("\n\tAlunos cadastrados em Metodos de Programacao/Matematica Aplicada\n\n");
    for(int i = 0; i<n;i++){
        if(aluno[i].curso == 3){
            printf("\nNome do Aluno: %s", aluno[i].nome );
            printf("\nNome do Matricula: %d\n", aluno[i].matricula );
        }
    }
}
