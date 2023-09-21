#include<stdio.h>
int main(){
	char frase[501];
	int i=0,vogais=0;
	printf("Digite uma string muito poggers e based NADA DE CAPSLOCK:\n");
	fgets(frase,501,stdin);
	while(frase[i]!='\0'){
		if(frase[i]=='a'||frase[i]=='e'||frase[i]=='i'||frase[i]=='o'||frase[i]=='u'){
			vogais++;
		}
		i++;
	}
	printf("O numero de vogais eh: %i", vogais);
	return 0;
}
