#include<stdio.h>

int num;
int divisor=2;
int achou=0;
int main(){
	printf("Insira o numero que quer verificar.");
	scanf("%d", &num);
	while (divisor<num && achou==0){
	if(num%divisor==0){
		achou=1;}
		else {
			divisor++;
		}
	}
	if (achou==1){
	printf("numero normal, o divisor eh %d", divisor);}
	else{
		printf("numero primo");
	}
	return 0;
}

