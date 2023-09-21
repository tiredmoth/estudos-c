#include<stdio.h>
#define MAXNOME 100
#define TERROR 0
#define COMEDIA 1
#define DRAMA 2
#define AVENTURA 3
#define SUSPENSE 4
#define ROMANCE 5
#define MAXCLIENTES 100

struct filmes{
	int codigo;
	char nome[MAXNOME+1];
	int gen;
	int mins;
	int pos;
};
void imprimir(struct filmes c){
	printf("\n");
	printf("Codigo:%d\n",c.codigo);
	printf("-----------------------------------------\n");
	printf("Nome:%s",c.nome);
	printf("Genero:");
	if(c.gen==TERROR){
		printf("terror\n");
	}
	else if(c.gen==COMEDIA)
	{
		printf("comedia\n");
	}
	else if(c.gen==DRAMA)
	{
		printf("drama\n");
	}
	else if(c.gen==AVENTURA)
	{
		printf("aventura\n");
	}
	else if(c.gen==SUSPENSE)
	{
		printf("suspense\n");
	}
	else if(c.gen==ROMANCE){
		printf("romance\n");
	}
	else{
		printf("genero nao valido\n");
	}
	printf("Tempo:%d mins\n",c.mins);
	printf("Posicao:%d\n",c.pos);
		printf("-----------------------------------------\n");
}
float info(struct filmes c[]){ 
    int j=0;
    printf("Insira o codigo do filme que deseja:\n");
    scanf("%d", &j);
	imprimir(c[j]);
		}
float gen(struct filmes c[]){
	int p=0;
	printf("Insira o num do genero que deseja:\n 0-terror\n 1-comedia\n 2-drama\n 3-aventura\n 4-suspense\n 5-romance\n");
	scanf("%d", &p);
	for(int i=0; i<5; i++){
		if (c[i].gen==p){
			imprimir(c[i]);
		}
	}
		
}
float fav(struct filmes c[]){
	int m=0;
	printf("Insira o codigo de um filme para verificar se ele se encontra no seu top 3:\n");
	scanf("%d", &m);
	if(c[m].pos==1||c[m].pos==2||c[m].pos==3){
		printf("%s faz parte do top 3", c[m].nome);
	}
	else{
		printf("%s nao faz parte do top 3", c[m].nome);
		
	}
}
int main(){
	int filmes=5;
	struct filmes c[MAXCLIENTES];
	for(int i=1;i<=filmes;i++){
		c[i].codigo=i;
		printf("Insira o nome do filme:\n");
		getchar();
		fgets(c[i].nome, MAXNOME, stdin);
		printf("Insira o tempo de duracao do filme:\n");
	    scanf("%d",&c[i].mins);
	    printf("Insira o genero do filme:\n");
	    scanf("%d", &c[i].gen);
	    printf("Insira a posicao do filme em um ranking:\n");
	    scanf("%d", &c[i].pos);
		}
		info(c);
		gen(c);
		fav(c);
		return 0;
}
