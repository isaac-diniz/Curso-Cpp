/*
Uma companhia de teatro deseja montar uma s�rie de espet�culos. A dire��o calcula que, a 
R$ 5,00 o ingresso, ser�o vendidos 120 ingressos, e que as despesas ser�o de R$ 200,00. Diminuindo-se em
R$ 0,50 o pre�o dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Fa�a um programa que 
escreva uma tabela de valores de lucros esperados em fun��o do pre�o do ingresso, fazendo-se variar
esse pre�o de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo pre�o de ingresso, o lucro 
m�ximo esperado, o pre�o do ingresso e a quantidade de ingressos vendidos para a obten��o desse lucro. 
*/
#include <iostream>
using namespace std;
int main(){
	double ing=5, lucro;
	int vend=120;
	int desp=200;
	while(ing>=1){
		cout<<"\n\nn. ingressos vendidos: "<<vend<<"\n";
		cout<<"preco do ingresso: "<<ing<<"\n";
		lucro=ing*vend-desp;
		cout<<"o lucro e de: "<<lucro<<"\n";
		ing-=0.5;
		vend+=26;
	}
	return 0;
}
