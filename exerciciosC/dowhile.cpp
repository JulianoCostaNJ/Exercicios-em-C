#include<stdio.h>
int main(){
	
	int resultado=0,n,s1,s2;
	
	do{
		printf("\n*-----------MENU-------------*");
		printf("\nDigite 1 (soma)");
		printf("\nDigite 2 (subtracao)");
		printf("\nDigite 0 (Exit)");
		printf("\n*----------------------------*\n");
		scanf("%d",&n);
		if(n==1){
			printf("Digite o numero para ser somado: ");
			scanf("%d",&s1);
			printf("Digite o numero para ser somado: ");
			scanf("%d",&s2);
			printf("\nO resultado dos numeros digitados eh: %d",resultado=s1+s2);
		}
		else if(n==2){
			printf("Digite o numero para ser subtraido: ");
			scanf("%d",&s1);
			printf("Digite o numero para ser subtraido: ");
			scanf("%d",&s2);
			printf("\nO resultado dos numeros digitados eh: %d",resultado=s1-s2);
		}
		else{
			printf("\n*----------Exit----------*");
		}
				
		}while(n==1 ||n==2);
	
	
}
