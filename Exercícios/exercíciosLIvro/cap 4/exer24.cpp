/*
Fa�a um programa que receba o pre�o, a categoria (1 � limpeza; 2 � alimenta��o; ou 3 � vestu�rio) 
e a situa��o (R � produtos que necessitam de refrigera��o; e N � produtos que n�o necessitam de refrigera��o). 
Calcule e mostre:
�� O valor do aumento, usando as regras que se seguem

PRE�O 			CATEGORIA 		% DE AUMENTO
< = 25			1				5%
				2				8%
				3				10%
> 25			1				12%
				2				15%
				3				18%

O valor do imposto, usando as regras a seguir:
O produto que preencher pelo menos um dos seguintes requisitos pagar� imposto equivalente a 5% 
do pre�o; caso contr�rio, pagar� 8%. Os requisitos s�o:
Categoria: 2
Situa��o: R
�� O novo pre�o, ou seja, o pre�o mais aumento menos imposto. 
�� A classifica��o, usando as regras a seguir.

NOVO PRE�O 						CLASSIFICA��O
< = R$ 50,00 					Barato
Entre R$ 50,00 e R$ 120,00 		Normal
> = R$ 120,00 					Caro
*/
#include <iostream>
using namespace std;
int main(){
	double pre, nPre;
	int cat;
	char sit;
	string clas;
	cout<<"insira o preco: ";
	cin>>pre;
	cout<<"Insira uma das categorias abaixo\n";
	cout<<"(1) limpeza; (2) alimentacao; (3) vestuario\n";
	cin>>cat;
	cout<<"insira a situacao: ";
	cout<<"\n(R) produtos que necessitam de refrigeracao;\n(N) produtos que nao necessitam de refrigeracao\n";
	cin>>sit;
	if(pre<=25){
		switch(cat){
			case 1:
				nPre=pre*1.05;
			case 2:
				nPre=pre*1.08;	
			case 3:
				nPre=pre*1.1;
		}
	}else{
		switch(cat){
			case 1:
				nPre=pre*1.12;			
			case 2:
				nPre=pre*1.15;				
			case 3:
				nPre=pre*1.18;
		}
	}
	if(cat==2 || sit=='R' ||sit=='r'){
		nPre=nPre-(nPre*0.05);
	}else{
		nPre=nPre-(nPre*0.08);
	}
	if(nPre<=50){
		clas="Barato";
	}else if(nPre<120){
		clas="Normal";
	}else{
		clas="Caro";
	}
	cout<<"o novo preco e: "<<nPre<<", e a clasificacao e: "<<clas;
	return 0;
}

