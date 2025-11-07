#include<stdio.h>

int main(){
	int idade, titulo;
	
	printf("qual a sua idade?  ");
	scanf("%d",&idade);
	printf("Voce possui titulo de eleitor? \ndigite (0)nao \ndigite(1)sim ");
	scanf("%d",&titulo);
	
	if(titulo==1){
		if(idade>=60){
		
			printf("Seu voto eh facultativo \n");
		}
		else if(idade>=18){
		
			printf("Seu voto eh obrigatorio\n");
		}
		else if(idade>=16){
		
			printf("Seu voto eh facultativo \n");
		}
	}
	else{
		printf("Voce nao pode votar regularize sua situação ");
	}		
}
	

