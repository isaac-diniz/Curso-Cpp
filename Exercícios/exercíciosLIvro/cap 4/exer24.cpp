/*
Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário) 
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração). 
Calcule e mostre:
¦¦ O valor do aumento, usando as regras que se seguem

PREÇO 			CATEGORIA 		% DE AUMENTO
< = 25			1				5%
				2				8%
				3				10%
> 25			1				12%
				2				15%
				3				18%

O valor do imposto, usando as regras a seguir:
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5% 
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
¦¦ O novo preço, ou seja, o preço mais aumento menos imposto. 
¦¦ A classificação, usando as regras a seguir.

NOVO PREÇO 						CLASSIFICAÇÃO
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

