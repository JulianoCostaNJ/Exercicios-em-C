#include<stdio.h>
float vlrSaldo= 9532.24;
float deposito(float n1,float n2){
	float saldo=n1+n2;
	return saldo;
}
float liberaCompra(float valorCompra,int nParcela){
	float valorParcela;
	if(nParcela>3){
		if (valorCompra<=saldo){
			valorParcela=valorCompra/nParcelas;
			valorCompra=(valorCompra*0.05)+valorCompra;
		}
		else{
			valorParcela=0;
		}
}
int main(){
	int i,op;
	do{
		printf("\n+------------------------+");
		printf("\n           Menu           ");
		printf("\n 1- Deposito");
		printf("\n 2- Sacar");
		printf("\n 3- Extrato");
		printf("\n 4- Solicitar Emprestimo");
		printf("\n 5- Encerrar");
		printf("\n+------------------------+\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("Digite o valor de deposito");
				scanf()
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			
		}
	}while(op!=5);
}

