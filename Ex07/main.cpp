#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
float Media(float *nota, float soma);
int main()
{
    float soma=0, media=0;
    float *nota;

    nota = (float*) malloc (5*sizeof(float));

   media = Media(nota, soma);
   system("cls");
   printf("\n\nA media das notas e': %.2f\n\n", media);

   system("Pause");

    return 0;
}

float Media(float *nota, float soma){

    for(int i = 0; i < 5;i++){
        printf("\nDigite a nota: ");
        scanf("%f", nota+i);
        soma += *(nota+i);

    }

    return soma/5;

}
