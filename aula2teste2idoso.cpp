#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// faça um programa que mostre o nome e a idade de um usuário e diga se ele é idoso.
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
	
