#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
struct Cliente {
    char nome[30];
    char cpf[11];
    int conta;
    float saldo;
};

void Escreve(Cliente cli[], int n);
void Cadastro(Cliente cli[], int n);
bool VerificaSaldo(Cliente cli[], int i);

int main()
{   int n=1;
 printf("Quantos Clientes deseja cadastrar: ");
scanf("%i", &n);
Cliente cli[n];

    Cadastro(cli,  n);

    system("Pause");
    system("cls");

    Escreve(cli, n);


system("Pause");
    return 0;
}

void Cadastro(Cliente cli[], int n){


for(int i = 0; i < n; i++){
    printf("Nome: ");
    //gets(vend[i].nome);
    scanf("%s", &cli[i].nome);
    printf("CPF: ");
    scanf("%s", &cli[i].cpf);
    printf("Numero da Conta: ");
    scanf("%d", &cli[i].conta);
    printf("Saldo: ");
    scanf("%f", &cli[i].saldo);


}
}


void Escreve(Cliente cli[], int n){

for(int i=0; i < n;i++){

if(VerificaSaldo(cli, i)){


    printf("Nome: %s\n", cli[i].nome);
    printf("Saldo: %.2f\n", cli[i].saldo);

}

}
}

bool VerificaSaldo(Cliente cli[], int i){

        if(cli[i].saldo < 0)
            return true;
        else return false;


}
