#include<stdio.h>
int fibonacci(int n){
	if (n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main(){
	int numseq;
	printf("Insira qual posicao da sequencia voce deseja saber o numero fibonacci de:");
	scanf("%d", &numseq);
	int numfinal=fibonacci(numseq);
	printf("O numero fibonacci da posicao %d eh: %d", numseq,numfinal );
	return 0;
}
