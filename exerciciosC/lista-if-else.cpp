#include <stdio.h>
int main(){
//2) Elabore um programa que leia dois números e o símbolo de operação aritmética digitados
//pelo usuário, e efetue a operação e mostre o resultado na tela.
float n1, n2,resultado;
char op;
int N1,N2,N3,idade;
printf("\n=====================exercicio 1=======================\n");
printf("Digite um numero: ");
scanf("%f",&n1);
printf("Digite um numero: ");
scanf("%f",&n2);
printf("Digite o simbolo de matematica para realizar com esses numeros: ");
scanf(" %c",&op);

if(op=='+'){

	resultado=n1+n2;
}else if(op=='-'){

	resultado=n1-n2;
}else if(op=='*'){

	resultado=n1*n2;
}else if (op=='/'){
	if(n2!=0)
		resultado=n1/n2;
	else{
		printf("divisao por zero!\n");
		return 1;
	}
}else{
	printf("operador inválido!\n");
	return 1;
}
printf("Resultado: %.2f\n",resultado);

//3) Construa um programa que leia três números inteiros, determine e imprima o maior deles.
printf("\n=====================exercicio 2=======================\n");
printf("digite 1 numero: ");
scanf("%d",&N1);
printf("digite 1 numero: ");
scanf("%d",&N2);
printf("digite 1 numero: ");
scanf("%d",&N3);

if(N1>N2 && N1>N3){
	printf("o maior numero eh: %d",N1);
}
else if(N2>N1 && N2>N3){
	printf("o maior numero eh: %d",N2);
}
else {
	printf("o maior numero eh: %d",N3);
}

//4) No sistema eleitoral brasileiro o voto é facultativo para pessoas com igual ou superior a 16
//anos, se tiver idade igual ou superior a 18 anos e menor que 60 é obrigada a votar, se tiver
//idade igual ou superior a 60 anos o voto é facultativo. Pessoas com idade inferior a 16 anos
//não podem votar.
printf("\n=====================exercicio 3=======================\n");
printf("Qual eh a sua idade? ");
scanf("%d",&idade);

if(idade>=18 && idade<60 ){
	printf("Seu voto eh obrigatorio!");
}
else if ((idade>=16 )||(idade>=60)){
	
	printf("Seu voto eh facultativo!");
}

else{
	printf("Voce nao pode votar!");
}
//5) Elabore um algoritmo que leia do teclado a probabilidade de chuva, escreva “dia
//ensolarado” caso a probabilidade seja menor que 60% e “dia chuvoso” caso contrário.
printf("\n=====================exercicio 4=======================\n");
printf("digite a probabilidade de chuva: ");
scanf("%d",&N1);
if (N1<60){
	printf("dia ensolarado!");
}
else {
	printf("Dia Chuvoso");
}


//6) Elabore um programa que leia um número do teclado. Se o número for zero escreva “Nulo”,
//se for maior que zero escreva “Positivo”, caso contrário escreva “Negativo”.
printf("\n=====================exercicio 5=======================\n");

printf("digite um numero: ");
scanf("%d",&n1);

if (n1>0){
	printf("o numero eh Positivo!");
}else if(n1==0){
	printf("o numero eh nulo!");
}else{
	printf("o numero eh negativo!");
}


//7) Transforme o código acima em fluxograma
printf("\n=====================exercicio 6=======================\n");
printf("o resultado esta no caderno");

}
