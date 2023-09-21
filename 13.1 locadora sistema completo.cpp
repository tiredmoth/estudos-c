#include<stdio.h>
#define MAXNOME 100
#define MASCULINO 0
#define FEMININO 1
#define MAXCLIENTES 100

struct cliente{
	int codigo;
	char nome[MAXNOME+1];
	int dian;
	int mesn;
	int anon;
	int sexo;
	int cpf;
};
void imprimir(struct cliente c){
	printf("\n");
	printf("-----------------------------------------\n");
	printf("Codigo:%d\n",c.codigo);
	printf("Nome:%s",c.nome);
	printf("Nascimento:%d%/%d/%d\n",c.dian, c.mesn, c.anon);
	printf("Sexo:");
	if(c.sexo==MASCULINO){
		printf("masculino\n");
	}
	else if(c.sexo==FEMININO)
	{
		printf("feminino\n");
	}
	else{
		printf("nao binario\n");
	}
	printf("CPF:%d\n", c.cpf);
		printf("-----------------------------------------");
}
float mediaidades(struct cliente c[], int clients){
	int idade[MAXCLIENTES];
	float soma=0,media=0;
	for(int i=0;i<clients;i++){
		idade[i]=2023-c[i].anon;
	}
	for(int j=0; j<=clients; j++){
		soma=soma + idade[j];
	}
	media=soma/clients;
	printf("A media eh igual a: %.1f anos", media);
}
int main(){
	int clients;
	struct cliente c[MAXCLIENTES];
	printf("Insira o numero de clientes a serem lidos:");
	scanf("%d", &clients);
	for(int i=0;i<clients;i++){
		c[i].codigo=i;
		printf("Insira o nome do cliente:\n");
		getchar();
		fgets(c[i].nome, MAXNOME, stdin);
		printf("Insira a data de nascimento do cliente:\n");
	    scanf("%d%d%d",&c[i].dian, &c[i].mesn, &c[i].anon);
	    printf("Insira o sexo do cliente:\n");
	    scanf("%d", &c[i].sexo);
	    printf("Insira o CPF do cliente:\n");
	    scanf("%d", &c[i].cpf);
		}
		for(int j=0;j<clients;j++){
			imprimir(c[j]);
		}
		printf("Media de idades:\n");
		mediaidades(c,clients);
		return 0;
}
