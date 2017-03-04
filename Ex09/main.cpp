#include <iostream>
#include <stdlib.h>
using namespace std;

void Preenche(int vet[], int n);
void Imprime(int vet[], int n);
int main()
{
    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int number[n];
    Preenche(number, n);
    Imprime(number, n);

    system("Pause");
    return 0;
}

void Preenche(int vet[], int n){


for(int i=0; i<n; i++)
	{
		vet[i] = rand();



		for(int j=0; j<i; j++)
		{
			if(vet[j] == vet[i])
			{
				vet[i] = rand();
				j=0;
			}
		}
	}





}

void Imprime(int vet[], int n){

for(int i = 0; i<n;i++){

    printf("\nVetor %i: %i\n", i, vet[i]);

}
}



