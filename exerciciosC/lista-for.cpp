#include <stdio.h>

int main(){
	
	int i,j,n,somap=0,somai=0;
printf("For do 1 ate o 10\n");
	for(i=1;i<=10;i++){
	printf("%d ",i);
	}
	printf("\nfor decrescente de 50 ate 1 \n");
	for(i=50;i>=1;i--){
		printf("%d ",i);
	}
	printf("\nfor mostrando apenas os pares de 1 ate 100 \n");
	for(i=1;i<=100;i++){
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\nfor somando apenas os pares e os impares separados de 1 ate 100 \n");
	for(i=1;i<=100;i++){
		if(i%2==0){
			somap+=i;
		}
		else
			somai+=i;
		}
	printf("\na soma dos pares eh: %d",somap);
	printf("\na soma dos impares eh: %d",somai);
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			printf("A tabuada do %d x %d = %d\n",i,j,(i*j));
		}
		printf("\n---------------------------\n");
	}
}
