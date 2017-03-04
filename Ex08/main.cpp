#include <iostream>

using namespace std;
void Preenche(int vet[], int n);
void Busca(int vet[], int n);
int main()
{
    int n;
  printf("Digite o tamanho do VETOR: ");

  scanf("%d", &n);

  int vet[n];

  Preenche(vet, n);
Busca(vet,  n);

    return 0;
}

void Preenche(int vet[], int n){
for(int i = 0 ; i<n;i++){
    printf("\nDigite o vetor %i: ", i);
    scanf("%i", &vet[i]);
}

}

void Busca(int vet[], int n){
int busca;
bool encontrado = false;

printf("\nDigite o numero que deseja achar: ");
scanf("%d", &busca);

for(int i = 0 ; i<n;i++){
   if(vet[i] == busca){

    printf("\n\nVetor com valor %d encontrado na posicao %d\n\n", vet[i], i );
    encontrado = true;


   }
}

if(!encontrado){
    printf("\nNenhum valor encontrado\n");

}


}


