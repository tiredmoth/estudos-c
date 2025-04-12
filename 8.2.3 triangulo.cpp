#include<stdio.h>
int main(){
	int n, cont, den;
	printf("Insira o valor:\n");
	scanf("%d", &n);
	for (cont=1; cont<=n; cont++){
		for (den=1;den<=cont; den++){
			printf("*");
		}
			printf("\n");
	}
	return 0;
}
