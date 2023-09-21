#include<stdio.h>
#include<math.h>

float area(float raio){
	return M_PI * pow(raio, 2);
}
int main(){
	float r;
	printf("Insira o valor do raio:");
	scanf("%f", &r);
	printf("O valor da area desse circulo eh: %f", area(r));
	return 0;
}
