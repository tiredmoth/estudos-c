#include<stdio.h>
int main(){
	int a[10], i, cont=0, x;
	for(i=1; i<=10;i++){
		printf("Insira os 10 valores:\n");
		scanf("%d", &a[i]);
	}
	printf("Insira o valor que deseja procurar:\n");
	scanf("%d", &x);
	for(i=1; i<=10; i++)
	{
		if(a[i]==x){
			cont++;
		}
	}
	printf("%d apareceu %d vezes\n", x, cont);
	return 0;
}
