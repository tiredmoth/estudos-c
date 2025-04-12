#include<stdio.h>
int main(){
	int dinheiro=0;
	int troco=0;
	scanf("%d",&dinheiro);
	if (dinheiro%5==0){
		troco=dinheiro%7;
	printf("%d",troco);
	}
	else {
		printf("Insira apenas notas de cinco, nenhum outro valor.");
	}
		
	
	
	return 0;
}
