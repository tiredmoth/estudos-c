#include<stdio.h>
int main(){
	int horas;
	printf("Insira as horas atuais:");
	scanf("%d",&horas);
	if (horas>=0 && horas<=23) {
		if (horas>=18 && horas<=23|| horas>=0 && horas<=5) {
			printf("Escuro.");
		}
		else{
			printf("Claro.");
		}
	}
	else{
		printf("Insira um horário válido.");
	}
	return 0;
}
