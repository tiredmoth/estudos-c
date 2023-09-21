#include<stdio.h>
#define MAXCLIENTES 100
struct cliente{
	int codigo;
};
    float media(struct cliente cls[], int clients){
	int idade[MAXCLIENTES];
	float soma=0,media=0;
	for(int i=0;i<clients;i++){
		idade[i]=cls[i].codigo;
	}
	for(int j=0; j<clients; j++){
		soma=soma + idade[j];
	}
	media=soma/clients;
	printf("A media eh igual a: %f", media);
}
int main(){
	int clients;
	struct cliente c[MAXCLIENTES];
	printf("Insira o numero de clientes a serem lidos:");
	scanf("%d", &clients);
	for(int i=0;i<clients;i++){
		printf("Insira o cod do cliente:\n");
		scanf("%d", &c[i].codigo);
		}
		
		printf("Media:\n");
		media(c,clients);
		return 0;
}
