#include <stdio.h>//indica a biblioteca a ser usada

int main(){ //inicio do programa
	int i,num, qtdi=0,qtdf=0, par=0; // declarando as variaveis
	
	for(i=1;i<=10;i++){//estrutura de repetição indicando do 1 até o 10 ciclo
		printf("informe um valor: \n"); //mostra mensagem para o usuario
		scanf("%d",&num);//insere valor digitado pelo usuario dentro da variavel num
		if(num>=10 && num<=50){//condicional que diz se o numero for igual ou maior do que 10 e igual ou menor do que 50
			qtdi++; //se o if for verdadeiro ele adiciona 1 na variavel qtdi
		}
		else{ //caso seja falso ele entra no else
			qtdf++;//adiciona 1 na variavel qtdf
		}	
		if(num%2==0){//condicional para verificar se o numero digitado é par
			par++;//adiciona 1 caso a condicional seja verdadeira
		}
	}//fim da estrutura de repetição
	printf("%d ficaram fora do intervalo de 10 e  50 \n%d ficaram dentro do intervalo\n%d sao pares",qtdf,qtdi,par);//mostra a mensagem e o resultado das variveis no local dos placeholders
}//fim do programa


