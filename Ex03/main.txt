#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;



struct Ven{
    char nome[30];
    int cod;
    float vendas;
    float salario;
    float bonificacao;
};
void Escreve(Ven vend[], int n);
void Cadastro(Ven vend[], int n);
void CalculoBonificacao(Ven vend[], int n);

int main()
{   int n=1;
 printf("Quantos Vendedores deseja cadastrar: ");
scanf("%i", &n);
Ven vend[n];

    Cadastro(vend,  n);
    CalculoBonificacao(vend, n);
    system("Pause");
    system("cls");

    Escreve(vend, n);


system("Pause");
    return 0;
}

void Cadastro(Ven vend[], int n){


for(int i = 0; i < n; i++){
    printf("Nome: ");
    //gets(vend[i].nome);
    scanf("%s", &vend[i].nome);
    printf("Cod: ");
    scanf("%d", &vend[i].cod);
    printf("Vendas: ");
    scanf("%f", &vend[i].vendas);
    printf("Salario: ");
    scanf("%f", &vend[i].salario);
    vend[i].bonificacao = 0;

}
}


void Escreve(Ven vend[], int n){
for(int i=0; i < n;i++){
     printf("\nCod Vendedor %i: %i", i+1, vend[i].cod);
     printf("\nNome Vendedor %i: %s", i+1, vend[i].nome);
    printf("\nBonificacao Vendedor %i: %.2f\n", i+1, vend[i].bonificacao);


}
}

void CalculoBonificacao(Ven vend[], int n){

    for(int i=0; i < n;i++){
        if(vend[i].vendas>=500 && vend[i].vendas< 1000){
            vend[i].bonificacao = vend[i].salario * 0.05;
        };
        if(vend[i].vendas>=1000 && vend[i].vendas< 1500){
            vend[i].bonificacao = vend[i].salario * 0.1;
        };
        if(vend[i].vendas >=1500){
            vend[i].bonificacao = vend[i].salario * 0.15;
        };
    }

}
