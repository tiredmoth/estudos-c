#include<stdio.h>
#include<math.h>

float media(float n[], int tam){
	float soma=0;
	for(int i=0; i<tam; i++){
		soma+=n[i];
	}
	return soma/tam;
}
float varian(float n[], int tam){
	float mitvarian=0;
	float media2=media(n,tam);
	for(int i=0; i<tam; i++){
		mitvarian+=(n[i]-media2)*(n[i]-media2);
		}
	return mitvarian/tam;
}
float desviofinal(float numeros[], int tam){
	return sqrt(varian(numeros,tam));
}
int main(){
	float array[9];
	printf("Digite 10 valores:\n");
	for(int i=0;i<9;i++){
		scanf("%f\n",&array[i]);
	}
	printf("O desvio padrão eh:%f ", desviofinal(array, 10));
	return 0;
}
