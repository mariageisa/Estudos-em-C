#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// fa�a um programa que mostre o nome e a idade de um usu�rio e diga se ele � idoso.
//idoso 60 anos
int main(){
	//variaveis
	char nome[30];
	int idade;	
	
	//inputs (entradas)
   printf("Digite um nome: ");
   gets(nome);
   printf("Digite sua idade: ");
   scanf("%d" , &idade);
   
   //SAIDAS  
   printf("\nNome: %s\n\n", nome);
   printf("\nIdade: %d\n\n", idade);
    if(idade >= 60)
    printf("\n usuario idoso\n\n");
    else
    printf("\nNAO EH IDOSO\n\n");
    return(0);
}
	
