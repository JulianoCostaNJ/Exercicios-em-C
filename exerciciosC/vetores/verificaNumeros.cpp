#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int i,num,vet[30];
	bool verificacao;
	
	for(i=0;i<30;i++){
		vet[i]=rand()%100+1;	
		printf("%d, ",vet[i]);
	}
	printf("\nDigite um valor: ");
	scanf("%d",&num);
	for(i=0;i<30;i++){
		if(num==vet[i]){
		printf("o numero esta dentro do vetor!");
		verificacao=true;
		break;
		}
		
	}
	if(verificacao==false){
		printf("o numero nao esta dentro do vetor");
	}
}
