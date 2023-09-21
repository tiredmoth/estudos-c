#include<stdio.h>
int main(){
		int ttllinhas, ttlcolunas, lin, col, lintrans, coltrans;
		int matriz[ttllinhas][ttlcolunas];
		printf("Insira o total de linhas e colunas:\n");
		scanf("%d%d", &ttllinhas, &ttlcolunas);
		lintrans=ttlcolunas;
		coltrans=ttllinhas;
		int transposta[lintrans] [coltrans];
		printf("Insira os valores da matriz:\n");
		
		for(lin=0; lin<ttllinhas; lin++){
			for (col=0;col<ttlcolunas; col++){
				scanf("%d", &matriz[lin][col]);
			}
		}
		for(lin=0;lin<lintrans;lin++){
			for(col=0;col<coltrans; col++){
				transposta[lin][col]=matriz[col][lin];
			}
		}
		for(lin=0; lin<lintrans; lin++){
			for(col=0;col<coltrans; col++){
				printf("%d ",transposta[lin][col]);
			}	
			printf("\n");
				}
	
		return 0;
}
