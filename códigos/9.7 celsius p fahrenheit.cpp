#include<stdio.h>
float calculador(float celsius){
	return celsius*1.8+32;
}
int main(){
	float celsius, fahrenheit;
	printf("Insira a temperatura em celsius:\n");
	scanf("%f", &celsius);
	fahrenheit=calculador(celsius);
	printf("\nA temperatura em fahrenheit correspondente eh:\n%.2f graus", fahrenheit);
		return 0;
}
