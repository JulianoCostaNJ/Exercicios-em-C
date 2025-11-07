#include<stdio.h>
int main(){
	int i, num, result;
	do{
	printf("\nDigite um numero: ");
	scanf("%d",&num);
	
	 if(num!=0){
		 for(i=1;i<=10;i++){
			printf("\nA tabuada do %d eh: %d",num,i*num);
			}
		}
	}while(num!=0);
}
