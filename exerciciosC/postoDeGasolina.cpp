#include <stdio.h>
int main(){
	char c;
	float va,vg,litros,valor, desconto;
	
	printf("digite a quantidade em litros do combustivel: ");
	scanf("%f",&litros);
	printf("digite qual combustivel foi colocado\nAlcool(a)\nGasolina(g)\n");
	scanf(" %c",&c);
	
	if(c=='a'){
		
		printf("digite o valor do alcool: ");
		scanf("%f",&va);
		valor=va*litros;
		
		if(litros>30){
			desconto=valor*0.04;
		}else{
			desconto=valor*0.02;
		}
	}	
	else {
		printf("digite o valor da gasolina: ");
		scanf("%f",&vg);
		valor=vg*litros;
		
		if(litros>30){
			desconto=valor*0.05;
		}else{
			desconto=valor*0.03;
		}
		
	}
		valor=valor-desconto;
	printf("o valor a ser pago eh: %.2f", valor);
}
