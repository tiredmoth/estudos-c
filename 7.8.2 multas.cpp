#include<stdio.h>

float carro, limite, dif;
int main(){
	printf("Digite a velocidade do carro\n");
	scanf("%f", &carro);
	printf("Digite o limite do dia\n");
	scanf("%f", &limite);
	
	dif=carro/limite;
		
	if (dif<1){
		printf("Carro dentro do limite");}
	    else if (dif<=1.2){
		 printf("Multa de 85 reais e 4 pontos da carteira.");}
		 	else if (dif>1.2 && dif<1.5){
		    printf("Multa de 127 reais e 5 pontos da carteira.");}
		    	else if (dif>=1.5){
		        printf("Multa de 574 reais, 7 pontos da carteira e o direito de dirigir.");}
	return 0;
}
