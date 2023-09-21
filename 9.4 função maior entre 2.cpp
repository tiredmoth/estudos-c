#include<stdio.h>

int maior(int x, int y){
	int mai;
	if(x>y){
		mai=x;
	}
	else{
		mai=y;
	}
}
int main(){
	int a,b;
	printf("Insira os dois valores:\n");
	scanf("%d%d", &a,&b);
	printf("O maior numero eh: %d", maior(a,b));
	return 0;
}
