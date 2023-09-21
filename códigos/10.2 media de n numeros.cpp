#include<stdio.h>
int main(){
	int n, i;
	float v[1000], soma=0, media;
	
	printf("Insira o valor de numeros que deseja calcular a media:\n");
	scanf("%d", &n);
	printf("Insira os numeros:\n");
	for(i=1; i<=n; i++){
		scanf("%f", &v[i]);
		soma=soma + v[i];
	}
	media=soma/n;
	printf("A media eh igual a: %.3f", media);
	return 0;
}
