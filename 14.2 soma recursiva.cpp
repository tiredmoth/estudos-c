#include<stdio.h>
int soma(int *a, int i, int tam){
	if(tam-1==i){
		return a[i];
	}
	else{
		return a[i]+soma(a,i+1,tam);
	}
	}
int main(){
	int nums[5];
	printf("Insira os 5 numeros a serem somados:\n");
	for(int j=0; j<5; j++){
		scanf("%d", &nums[j]);
}
int somas=soma(nums,0,5);
printf("O valor da soma eh:%d", somas);
return 0;
}
