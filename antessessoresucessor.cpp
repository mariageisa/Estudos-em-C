#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

//CRIAR UM PROGRAMA QUE PEÇA P O USUARIO DIGITAR UM NUMERO E NA SAIDA MOSTRE ELE DIGITADO, O SEU ANTECESSOSR E O SUCESSOR
int main(){
	//variaveis
	int num;
	int ant;
	int suc;
	
	//entradas
	printf("Digite um numero: ");
	scanf("%i" , &num);
	
	//logica
	ant = (num - 1);
	printf("\nAntecessor: %i\n", ant);
	//logica
	suc = (num + 1);
	printf("\nSucessor: %i\n", suc);
	
	system("pause");
	return(0);
}
