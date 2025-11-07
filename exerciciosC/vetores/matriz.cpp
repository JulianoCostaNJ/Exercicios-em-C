#include<stdio.h>
int main(){
	int n,i, j,matriz[4][3];

	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("\n Informe um valor: na matriz [%d][%d]",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Digite um valor que esteja dentro da matriz: ");
	scanf("%d",&n);
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			if(n==matriz[i][j]){
			printf("o numero que esta na matriz [%d], [%d] eh : %d\n",i,j,matriz[i][j]);
			}
		}
	}
}
