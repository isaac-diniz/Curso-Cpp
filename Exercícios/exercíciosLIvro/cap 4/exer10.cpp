/*
O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor

Até R$ 12.000,00 					5 	isento
Entre R$ 12.000,00 e R$ 25.000,00 	10 	15
Acima de R$ 25.000,00 				15 	20
*/

#include <iostream>
using namespace std;
int main(){
	double prefab, tot;
	cin>>prefab;
	if(prefab<=12000){
		tot=prefab*1.05;
		cout<<tot;
	}else if(prefab<=25000){
		tot=prefab*1.25;
		cout<<tot;
	}else{
		tot=prefab*1.35;
		cout<<tot;
	}
	return 0;
}
