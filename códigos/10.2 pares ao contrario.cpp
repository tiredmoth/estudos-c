#include<stdio.h>
int main(){
	int nums[9];
	printf("Insira os valores:\n");
	for(int i=0;i<10;i++){
		scanf("%d", &nums[i]);
	}
	printf("Os numeros pares de tras para frente sao:\n");
	for(int j=9;j>=0;j--){
		if(nums[j]%2==0){
			printf("%d\n", nums[j]);
		}
	}
	return 0;
}
