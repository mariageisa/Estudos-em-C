//AS BIBLIOTECAS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
//metodo main que � o que faz o programa ser executado
//FAZER UM PROGRAMA QUE MOSTRE NA TELA O NOME, ENDERE�O E TELEFONE
int main(){
	//vari�veis
	char nome[30];
	char endereco[50];
	char telefone[15];
   //inputs (entradas)
   printf("Digite um nome: ");
   gets(nome);
   printf("Digite um endereco: ");
   gets(endereco);
   printf("Digite um telefone: ");
   gets(telefone);
   //SAIDAS
   printf("\nNome: %s\n\n", nome);
   printf("\nEndereco: %s\n\n", endereco);
   printf("\nTelefone: %s\n\n", telefone);
   system("pause");
   return(0);
   
}

