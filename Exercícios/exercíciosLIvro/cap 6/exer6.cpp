/*
Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor. 
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na 
loja. Calcule e mostre: 
¦¦ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão; 
¦¦ o total das vendas de todos os vendedores; 
¦¦ o maior valor a receber e o nome de quem o receberá; 
¦¦ o menor valor a receber e o nome de quem o receberá. 
*/
#include <iostream>
using namespace std;
int main(){
	int i, tam=10;
	string vendedor[tam], menorN=" ";
	float vendas[tam], comiss[tam], menor=0, tot=0;
	for(i=0; i<tam; i++){
		cout<<"Nome do vendedor "<<i+1<<":";
		cin>>vendedor[i];
		cout<<"Total de suas vendas: ";
		cin>>vendas[i];
		cout<<"percentual de comissao do(a) "<<vendedor[i]<<" (por 100, ex: 0.23%): ";
		cin>>comiss[i];
	}
	menor=comiss[0];
	for(i=0; i<tam; i++){
		comiss[i]=vendas[i]*comiss[i];
		cout<<"O vendedor "<<vendedor[i]<<" vendeu um total de R$ "<<vendas[i]<<"\nE recebeu pela cmomissao um total de "<<comiss[i]<<endl;
		if(comiss[i]>comiss[0]) {
            comiss[0]=comiss[i];
            vendedor[0]=vendedor[i];
        }
        if(comiss[i]<=menor){
            menor=comiss[i];
            menorN=vendedor[i];
        }tot+=vendas[i];
	}
	cout<<"\nTotal das vendas de todos os vendedores: R$ "<< tot;
    cout<<"\nMaior valor a receber: R$ "<<comiss[0]<<" Vendedor: "<<vendedor[0];
    cout<<"\nMenor valor a receber: R$ "<<menor<<" Vendedor: "<<menorN;
	return 0;
}
