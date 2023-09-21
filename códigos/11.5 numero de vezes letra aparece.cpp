#include<stdio.h>
int main(){
	char strig[501];
	char letra;
	int i=0, letran=0;
	printf("Digite uma string muito redpill... NADA DE CAPSLOCK:\n");
	fgets(strig,501,stdin);
	printf("Digite a letra que quer verificar:\n");
	scanf("%c",&letra);
	while(strig[i]!='\0'){
		if(strig[i]==letra){
			letran++;
		}
		i++;
	}
	printf("O numero de vezes que essa letra aparece eh: %i", letran);
	return 0;
}
