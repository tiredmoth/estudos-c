#include<stdio.h>
int main(){
	float salario;
	printf("Insira o seu salario:");
	scanf("%f", &salario);
	if (salario<2000){
		salario=salario*1.2;
	}
	else if(salario>=2000 && salario<2100){
	salario=salario*1.18;
	}
	else if(salario>=2100 && salario<=5000){
		salario=salario*1.15;
	}
	else if(salario>5000 && salario<8000){
		salario=salario*1.12;
	}
	else{
		salario=salario*1.1;
	}
	printf("O seru salario final eh %.2f", salario);
	return 0;
}
