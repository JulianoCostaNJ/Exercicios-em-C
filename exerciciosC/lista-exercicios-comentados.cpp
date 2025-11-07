#include<iostream>//biblioteca c++
using namespace std;
int main(){ //abertura de programa ou inicio codigo

cout<< "\n=====================exercicio 1=======================\n";
	int a,b,c,d,f,g;//declarando as variaveis inteiras a até g
	a=4,b=3,c=9,d=9,f=9,g=7;//definindo as constantes
	if (c==6){ //condicional, caso o c seja 6 a formula matematica sera aplicada
		f=a*g;//nesse caso 4*7
		f=a+f;//continua 4+(4*7)
		g=b+g;//nesse caso g vira 3+7
	}
	cout<<d+f+a+c; //mostra o a soma de 9+9+4+9=31
	
	cout<< "\n=====================exercicio 2=======================\n";
	
	//int a,b,c,d,f,g;//declarando as variaveis inteiras a até g
	a=8,b=7,c=8,d=4,f=2,g=5;//definindo as constantes
	if (a!=6){ //condicional, caso o a seja diferente de 6 a formula matematica sera aplicada
		d=f*a;//nesse caso 2*8
		c=f+c;//continua 2+8
		}else{ //caso o a seja igual a 6 ele ira executar o else
		a=c*f;//nesse caso a vira 8*2
	}
	cout<<f+b+c-a; //mostra o a soma de 2+7+10-8=11
	
	cout<< "\n=====================exercicio 3=======================\n";
	
	//int a,b,c,d,f,g;//declarando as variaveis inteiras a até g
	a=7,b=2,c=5,d=4,f=9,g=2;//definindo as constantes
	if ((g<9)||(f>7)){ //condicional, caso o g seja menor do que 9 OU f seja maior do que 7 a formula matematica sera aplicada
		g=a*c;//nesse caso 7*5
		a=d*b;//continua 4*2
		}else{ //caso a condicional seja falsa ira executar o else
		g=g*c;//nesse caso a vira 2*5
	}
	cout<<f+a+b-g; //mostra o a soma de 9+8+2-35=-16
	
	cout<< "\n=====================exercicio 4=======================\n";
	//int a,b,c,d,f,g;//declarando as variaveis inteiras a até g
	a=6,b=2,c=4,d=8,f=2,g=2;//definindo as constantes
	if ((c==3)||(!(d<=5))){ //condicional, caso o c seja igual a 3  OU d seja maior do que 5 a formula matematica sera aplicada
		d=c-f;//nesse caso 4-2
		}else{ //caso a condicional seja falsa ira executar o else
		b=g*a;//nesse caso a vira 2*6
		d=f-b;//nesse caso vira 2*2
	}
	cout<<d+c+b+f; //mostra o a soma de 2+4+2+2=10
	
	cout<< "\n=====================exercicio 5=======================\n";
	
	//int a,b,c,d,f,g;//declarando as variaveis inteiras a até g
	a=7,b=9,c=6,d=9,f=3,g=3;//definindo as constantes
	if ((b<6)||(c>3)){ //condicional, caso o b seja menor do que 6 OU c seja maior do que 3 a formula matematica sera aplicada
		g=c+a;//nesse caso 6+7
		if(g<8){//condicional, caso o g seja menor do que 8 realiza a operação matematica
			c=f+b;//nesse caso 3*9
				}
		else{//caso nao seja comprida a condicional da linha 56 executa isso
			a=b*f;//nesse caso 9*3
		}
		
	}else{ //caso a condicional da linha 54 seja falsa ira executar o else
		c=c-a;//nesse caso vira 6-7 como embaixo essa variavel sera alterada novamente esta aqui uma perda de espaço
		c=g+d;//nesse caso vira 3+9
	}
	cout<<f+a+g-c; //mostra o a soma de 3+27+13-6=37
	return 0;
}
