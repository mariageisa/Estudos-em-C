#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// fa�a um programa que mostre o nome e a idade de um usu�rio e diga se ele � idoso.
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
