#include<stdio.h>

int main(){
	float n1,n2, media;
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f",&n1);
	printf("Digite a nota do segundo bimestre: ");
	scanf("%f",&n2);
	media=(n1+n2)/2;
	printf("sua media eh: %.2f\n",media);
	
	if (media>=6.0){
		printf("Aprovado");
		
	}else if(media>=4.0){
	
		printf("Recuperacao!");
		
	}else {
		printf("Reprovado!");
	}
}

