#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n,i;
	for(i=0;i<=100000;i++){
		n=99999%100;
		printf("%d",n);
	
	srand(time(NULL));
	n= rand();
	printf("\n%d",n);
	}
}
	
