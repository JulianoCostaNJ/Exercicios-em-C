#include<stdio.h>

int main(){
	int i,num;
	float media;
	
	for(i=1;i<=5;i++){
		printf("digite um numero\n");
		scanf("%d",&num);
		media+=num;
	}
	media=media/5;
	printf("a media dos numeros digitados eh de: %.2f",media);
}
