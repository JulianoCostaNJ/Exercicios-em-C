#include<stdio.h>

int main(){
	int i,maior,menor;
	int num[20];
	for(i=0;i<20;i++){
		printf("Digite um numero: ");
		scanf("%d",&num[i]);
		if(num[i]>=maior){
			maior=num[i];
		}
		if(num[i]<=menor){
			menor=num[i];
		}	
	}
	printf("O maior numero foi: %d \nO menor numero foi: %d",maior,menor);
}
