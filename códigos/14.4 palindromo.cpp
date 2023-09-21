#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define PALINDROMO 1
#define NORMAL 0
int palindromo(char *palavra, int com, int fim){
	int tam=fim-com+1;
	if (tam<=1){
		return 1;
	}
	else{
	if(palavra[com]==palavra[fim]){
		return palindromo(palavra, com+1, fim-1);
	}
	else{
		return 0;
	}}}
int main(){
	char palavra[30];
	printf("Insira a palavra que deseja verificar se eh um palindromo:\n");
	scanf("%s", &palavra);
	int tam=strlen(palavra);
	tam--;
	if(palindromo(palavra,0,tam)==NORMAL){
		printf("\nNao eh palindromo\n");
	}
	else
	{
		printf("\nPalindromo\n");
	}
	return 0;
}
