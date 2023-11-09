#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
//FACA PROGRAMA QUE CALCULE A MÉDIA DE DUAS NOTAS DE UM ALUNO
//OBSERVAÇÃO: A MEDIA DA ESCOLA É 6. mOSTRE DE ACORDO COM A MÉDIA SE O ALUNO FOI APROVADO OU REPROVADO

int main(){
	//variaveis
	float nota1;
	float nota2;
	float media;
	
	//inputs
	printf("Digite a 1a nota: ");
	scanf("%f" , &nota1);
	printf("Digite a 2a nota: ");
	scanf("%f" , &nota2);
	
	//calculos
	media = (nota1 + nota2)/2;
	if(media >= 6)
	
	printf("\n ALUNO APROVADO\n %f\n\n", media);
	else
    printf("\n ALUNO REPROVADO\n %f\n\n", media);
}

















