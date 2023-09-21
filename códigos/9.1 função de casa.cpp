#include<stdio.h>
#define Q '*'

void parede (int altura)
{
	int i;
	for(i=1; i<=altura; i++ ){
		printf("%c", Q);
	}
	printf("\n");
}

void casa(int alturacasa)
{
	parede(alturacasa-1);
	parede(alturacasa-1);
	parede(alturacasa-1);
	parede(alturacasa);
	parede(alturacasa);
	parede(alturacasa-1);
	parede(alturacasa-1);
	parede(alturacasa-1);
	printf("\n");
}
int main()
{
	int alt;
	printf("Digite o valor da altura da casa: \n");
	scanf("%d", &alt);
	casa(alt);
	return 0;
	
}
