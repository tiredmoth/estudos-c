#include<stdio.h>
int main(){
	int lin, col;
	int matriz[100][100];
	int matriz2[100][100];
	int soma[100][100];
	printf("Insira o total de linhas e colunas:\n");
		scanf("%d%d", &lin,&col);
	printf("Insira os valores das matrizes:\n");
	printf("Primeira matriz\n");
		for(int i=0;i<lin; i++){
			for(int j=0; j<col; j++){
				scanf("%d", &matriz[i][j]);
			}
		}
		printf("Segunda matriz\n");
		for(int n=0;n<lin; n++){
			for(int m=0; m<col; m++){
				scanf("%d", &matriz2[n][m]);
			}
		}
		printf("Soma das matrizes:\n");
		for(int k=0;k<lin; k++){
			for(int h=0; h<col; h++){
				soma[k][h]= matriz[k][h]+ matriz2[k][h];
				
			}
		}
		for(int p=0;p<lin; p++){
			for(int q=0; q<col; q++){
				printf("%d ", soma[p][q]);
			}
			printf("\n");
		}
		return 0;
}
