#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// faça um programa que mostre o nome e a idade de um usuário e diga se ele é idoso.
//idoso 60 anos
int main(){
	//variaveis
	int idade;
	int ano_nasc;
	int ano_atual;
	
	//entradas
	printf("Digite o ano atual: ");
	scanf("%d" , &ano_atual);
	printf("Digite o ano de nasccimento: ");
	scanf("%d" , &ano_nasc);
	
	//logica
	idade = (ano_atual - ano_nasc);
	
	//saida
	printf("\ a idade eh: %d\n\n", idade);
	system("pause");
	return(0);
	
}
