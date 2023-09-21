#include<stdio.h>
float n1, n2;
float soma2(float n1, float n2){
	float soma=0;
	soma=n1+n2;
	return soma;
}
int main(){
	printf("Insira os dois valores:\n");
	scanf("%f%f", &n1,&n2);
	float sfinal;
	sfinal=soma2(n1,n2);
	printf("O valor da soma eh:%.2f\n",sfinal);
	
	return 0;
}
