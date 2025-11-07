#include <stdio.h>

int main(){
	int i,sum,media;
	int num [10];
	
	for(i=0;i<10;i++){
		printf("Digite um valor: ");
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	media=sum/10;
	printf("a soma dos vetores eh: %d\n",sum);
	printf("a media dos valores digitados eh: %d",media);
	
	
	
}
