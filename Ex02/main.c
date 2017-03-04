   #include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void LerVetor(int vetA[]);
int EscreveVetor(int veta[], int i);
void MultiplicaVetor(int vetA[],int vetB[]);
int main()
{
    int vetA[5], vetB[5];




LerVetor(vetA);
MultiplicaVetor(vetA, vetB);
for(int i = 0; i<5;i++){

  printf("\nvalor da posicao %d: %d", i+1, EscreveVetor(vetB, i));
}


    return 0;
}



void LerVetor(int vetA[]){
for(int i = 0 ; i < 5; i++){
    printf("Digite o valor da posicao %d: ", i+1);
    scanf("%i", &vetA[i]);
}
}
void MultiplicaVetor(int vetA[],int vetB[]){
    int n;
printf("Digite o numero que deja multiplicar: ");
scanf("%d", &n);
for(int i = 0 ; i < 5; i++){
    vetB[i] = vetA[i]*  n;
}
}

int EscreveVetor(int veta[], int i){
return veta[i];
}
