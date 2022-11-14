#include <stdio.h>
#include <stdlib.h>

/* Teste para funcionamento*/
	typedef struct ALUNO{
		char nome[20];
		float nota1, nota2, nota3, nota4;
		float media;
};	
#define TAM  9 //!<Define a quantidade de alunos +1
//#define Debug

int main(int argc, char *argv[]) {
	struct ALUNO turma[TAM];
	int x;
	
	printf("Bem vindo ao calculo de notas de alunos\n");
	for (x=1;x<TAM;x++){
		printf("\nInforme o nome do(a) %d aluno(a):\t",x);
		scanf("%s",&turma[x].nome);
		printf("\nInforme a nota 1 do(a) %s \t",turma[x].nome);
		scanf("%f",&turma[x].nota1);
		printf("\nInforme a nota 2 do(a) %s \t",turma[x].nome);
		scanf("%f",&turma[x].nota2);	
		printf("\nInforme a nota 3 do(a) %s \t",turma[x].nome);
		scanf("%f",&turma[x].nota3);
		printf("\nInforme a nota 4 do(a) %s \t",turma[x].nome);
		scanf("%f",&turma[x].nota4);
		turma[x].media= (turma[x].nota1+turma[x].nota2+turma[x].nota3+turma[x].nota4)/4;
	#ifdef Debug
		printf("######DEBUG##########\n");
		printf("O Nome Informado e: %s\t" ,turma[x].nome);
		printf("\nA nota e : %.2f\t" ,turma[x].nota1);
		printf("\nA nota e : %.2f\t" ,turma[x].nota2);
		printf("\nA nota e : %.2f\t" ,turma[x].nota3);
		printf("\nA nota e : %.2f\t" ,turma[x].nota4);
	#endif		
	}
	printf("\nAs Medias sao:");
	for(x=1;x<TAM;x++){
		printf("\nA media do aluno(a) %s e: %.2f",turma[x].nome,turma[x].media);
	}
	
	return 0;
}