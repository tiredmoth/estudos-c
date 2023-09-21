#include<stdio.h>

int procurar(int *a,int tam, int i, int num){
	if(a[i]==num){
		return i;
	}
	else{
		procurar(a,tam,i+1,num);
	}
}
int main(){
	int nums[5];
	int proc;
	printf("Insira os 5 numeros:\n");
	for(int j=0; j<5; j++){
		scanf("%d", &nums[j]);
}
    printf("Insira o valor que deseja procurar:\n");
    scanf("%d", &proc);
    
    int indice=procurar(nums,5,0,proc);
    printf("O menor indice eh: %d", indice);
    return 0;

}
