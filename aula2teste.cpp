#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
// faça um programa que mostre o nome e a idade de um usuário
int main(){
//variaveis
   char nome[30];
   char idade [2];

//inputs (entradas)
   printf("Digite um nome: ");
   gets(nome);
   printf("Digite sua idade: ");
   gets(idade);
   
 //SAIDAS
   printf("\nNome: %s\n\n", nome);
   printf("\nIdade: %s\n\n", idade);
   return(0); 
}
