#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int numeroSecreto, tentativa, tentativasRestantes;
	
	srand(time(NULL));
	numeroSecreto= rand()%100+1;
	
	printf("adivinhe o numero secreto!! entre 1 e 100: ");
	tentativasRestantes=10;
	do{
		printf("\nTentativas restantes: %d\n",tentativasRestantes);
		printf("Digite sua Resposta: ");
		scanf("%d",&tentativa);
		
		if(tentativa==numeroSecreto){
			printf("Voce acertou!!");
			break;
		
		}else if(tentativa<numeroSecreto){
			printf("O Numero eh maior");
		}else{
			printf("o numero eh menor");
		}
		tentativasRestantes--;
	if(tentativasRestantes==0){
		printf("\nSuas tentativas acabaram!! o numero secreto era: %d",numeroSecreto);
		break;
	}
	}while((tentativasRestantes!=0)|| (tentativa!=numeroSecreto));
	
}
