#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



void LerNumeros(int * a, int * b, int * c);
void TrocaNumeros(int * a, int * b, int * c);
int TesteNumeros(int * a, int * b, int * c);
int main() {
    int * a, * b, * c;

    LerNumeros( & a, & b, & c);
    TrocaNumeros( & a, & b, & c);
    system("cls");
    if (TesteNumeros( & a, & b, & c)) {
        printf("\n***Troca Realizada com Sucesso!!!***");
        printf("\nValor de A: %d", a);
        printf("\nValor de B: %d", b);
        printf("\nValor de C: %d", c);

    } else {
        printf("Erro inesperado. Por favor consultar o Suporte Tecnico");
    };

    return 0;
}

void LerNumeros(int * a, int * b, int * c) {
    printf("Digite o valor de A: ");
    scanf("%d", a);
    printf("\nDigite o valor de B: ");
    scanf("%d", b);
    printf("\nDigite o valor de C: ");
    scanf("%d", c);
}

void TrocaNumeros(int * a, int * b, int * c) {
    int temp;
    if ( * b > * a && * b > * c) {
        temp = * b; * b = * a; * a = temp;
    }
    if ( * c > * b && * c > * a) {
        temp = * c; * c = * a; * a = temp;
    }
    if ( * c > * b) {
        temp = * c; * c = * b; * b = temp;
    }

}

int TesteNumeros(int * a, int * b, int * c) {
    if (a > b && a > c && b > c) return 1;
    else return 0;
}
