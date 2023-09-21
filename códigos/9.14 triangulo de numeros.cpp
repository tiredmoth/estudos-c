#include<stdio.h>

float implinha(int tamanho){
	int n;
	for(n=1; n<=tamanho; n++){
		printf("%d", tamanho);
	}
	printf("\n");
}
int main(){
	int x, i;
	printf("Insira o valor:");
	scanf("%d", &x);
	for(i=1;i<=x;i++){
		implinha(i+1);
	}
	return 0;
}
