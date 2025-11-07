#include<stdio.h>

int main(){
	int i,num,vet[10];
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num%2==0){
			vet[i]=num;
			
		}
		else{
			i--;
		}
		
	}
	printf("os numeros dos vetores sao: ");
	for(i=0;i<10;i++){
		printf("%d, ",vet[i]);
		
	}
	
}
