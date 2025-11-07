#include<stdio.h>
int main(){
	int mat[3][3]={
	{65,25,36},
	{14,32,57},
	{35,43,19}
	};
	int i,j,soma=0;
	float media;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nmat[%d][%d]=%d",i,j,mat[i][j]);
			soma+=mat[i][j];
		}
	}
	media=soma/9;
	printf("\na media dos numeros eh: %.2f",media);
	printf("\na soma dos numeros eh: %d",soma);
}
