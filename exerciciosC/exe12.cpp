#include<stdio.h>
int main(){
	int i,x;
	printf("Digite um numero: ");
	scanf("%d",&x);
	do {
		
		printf("\n%d",x);
		x=x+1;
	}while (x<=10);
}
