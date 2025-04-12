#include<stdio.h>

int main(){
	int num;
	printf("insira o valor\n");
	scanf("%d", &num);
	if(num % 5 ==0){
		printf("O valor eh multiplo de 5");
	}
	else{
		printf("O valor nao eh multiplo de 5");
	}
	return 0;
}
