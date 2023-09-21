#include<stdio.h>
int main(){
	int nums[9];
	printf("Insira os valores:\n");
	for(int i=0; i<10; i++){
		scanf("%d", &nums[i]);
	}
	printf("Ao substituir os valores:\n");
	for(int j=0; j<10; j++){
		if(nums[j]%2==0){
			printf("1\n");
		}
		else{
			printf("-1\n");
		}
	}
	return 0;
}
