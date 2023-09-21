#include<stdio.h>
int i;
int param[9999];

int pares(int i){
	printf("Os valores que sao pares:\n");
	for(int p=0; p<i; p++){
		if(param[p]%2==0){
			printf("%d\n", param[p]);
		}
	}
	
}

int main(){
	printf("Insira o tamanho da array:\n");
	scanf("%d", &i);
	printf("Insira os valores da array:\n");
	for(int j=0; j<i;j++){
		scanf("%d", &param[j]);
	}
	pares(i);
	return 0;
}
