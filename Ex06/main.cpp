#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


struct Aluno{
       char nome[50];
       int numero;
       char curso[50];
       char resposta[10];
       int nota;
       char situacao[10];
};
void ler(Aluno *alu, int qtd);
void nota(Aluno *alu,char vet_Gaba[], int qtd);
void situacao(Aluno *alu, int qtd);
void FrequenciaNotas(Aluno *alu, int qtd);

int main(){
    char vet_Gaba[10]={'a','a','a','a','a','b','b','b','c','d'};
    int qtd=0;

    printf("Digite a quantidade de alunos que fizeram a prova : ");
    scanf("%d",&qtd);
    while(qtd > 9999){
        printf("Digite um quantidade menor que 9999 : ");
        scanf("%d",&qtd);
    }

    Aluno *alu = (struct Aluno*) malloc (qtd *sizeof *alu);
    ler(alu,qtd);
    nota(alu,vet_Gaba,qtd);
    situacao(alu,qtd);

    for(int i =0; i < qtd ;i++){
         printf("\nnome : %s",alu[i].nome);
         printf("\nnumero : %d",alu[i].numero);
         printf("\ncurso : %s",alu[i].curso);
         printf("\nnota : %d",alu[i].nota);
         printf("\nsituacao : %s",alu[i].situacao);

         printf("\n");

    }

    getch();

     FrequenciaNotas(alu,qtd);
}
void ler(Aluno *alu,int qtd){
     for(int i=0; i < qtd;i++){
     printf("preencha as respostas do aluno no gabarito de( A ) ate ( D )\n\n");
             for(int j=0; j < 10;j++){
                  printf("digite a resposta da questao [%d] : ",j+1);
                  fflush(stdin);
                  scanf("%s",&alu[i].resposta[j]);
             }

          printf("Dados do [ %d ] \n",i+1);
          printf("digite o nome : ");
          fflush(stdin);
          gets(alu[i].nome);
          printf("digite o numero  : ");
          scanf("%d",&alu[i].numero);
          printf("digite o curso : ");
          fflush(stdin);
          gets(alu[i].curso);
          system("cls");

     }

}
void nota(Aluno *alu,char vet_Gaba[], int qtd){
     int c =0 ;
     for(int i=0; i < qtd;i++){
             c=0;
             for(int j=0; j < 10;j++){
                  if(alu[i].resposta[j]== vet_Gaba[j]){
                  c++;
                  }
                  alu[i].nota = c;
             }

     }
}
void situacao(Aluno *alu, int qtd){

     for(int i=0; i < qtd;i++){
         if(alu[i].nota >= 5){
              strcpy(alu[i].situacao,"aprovado");

         }else{
               strcpy(alu[i].situacao,"reprovado");

               }
     }
}

void FrequenciaNotas(Aluno *alu, int qtd){
   system("cls");
   printf("\t***Nota(s) com maior Frequencia***\n\n");

    int maior;
    int compara[11];


for(int i = 0 ; i<11;i++){
    compara[i] = 0;
}

    for(int i = 0; i<11;i++){

        for(int j = 0; j<qtd;j++){
            if(i == alu[j].nota){
                compara[i]++;
            }

        }
    }



    for(int i = 0; i<11;i++){
         for(int j = 0; j<qtd;j++){
            if(compara[i] >compara[j] && compara[i] > maior ){
                maior = compara[i];

            }
         }
    }

   for(int i = 0; i<11;i++){

        if(maior == compara[i]){

             printf("\nNota %i aparece: %i vezes\n", i, compara[i]);
        }
    }



}

