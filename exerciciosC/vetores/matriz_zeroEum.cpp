#include<stdio.h>
int main(){
	int j,i,mat[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i<=j){
				mat[i][j]=1;
			}
			else{
				mat[i][j]=0;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("| %d",mat[i][j]);
		}
		printf("\n");
	}
}
