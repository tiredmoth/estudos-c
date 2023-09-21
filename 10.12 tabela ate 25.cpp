#include<stdio.h>
int main()
{
	int quadrado[5][5]={0};
	int n=1;
		for(int i=0;i<5; i++){
			for(int j=0; j<5; j++){
				quadrado[i][j]= n;
				n++;
				}}
				for(int i=0;i<5; i++){
			for(int j=0; j<5; j++){
				printf("%d ", quadrado[i][j]);
			}
			printf("\n");
		}
				
	return 0;
}
