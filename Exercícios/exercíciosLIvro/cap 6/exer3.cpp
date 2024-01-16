/*
Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá
preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a 
quantidade. Código do cliente igual a zero indica fim do programa.

O programa deverá verificar: 
¦¦ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir 
mensagem Código inexistente; 
¦¦ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível, 
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever 
a mensagem Pedido atendido. Obrigado e volte sempre; 
¦¦ efetuar a atualização do estoque somente se o pedido for atendido integralmente; 
¦¦ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados. 
*/
#include <iostream>
using namespace std;
int main(){
	int tam=10, cod[tam], tEst[tam], codC, contadorW=0, codP[contadorW], qntP[contadorW];
	cout<<"=====================";
	cout<<"\nParte do Proprietario\n";
	cout<<"=====================\n";
	for(int i=0; i<tam; i++){
		cout<<"Insira o codigo do "<<i+1<<" produto (proibido produto com codigo 0): ";
		cin>>cod[i];
		cout<<"Insira a quantidade em estoque do "<<i+1<<" produto: ";
		cin>>tEst[i];
	}
	cout<<"=====================";
	cout<<"\n  Parte do cliente\n";
	cout<<"=====================";
	cout<<"\nInsira o codigo do cliente: ";
	cin>>codC;
	if(codC==0){
		cout<<"Programa encerrado";
		return 0;
	}
	do{
		contadorW++;
		cout<<"Insira o codigo do produto "<<contadorW<<"\n";
		cout<<"OBS: Inserir 0 nessa parte do programa o encerra";
		cin>>codP[contadorW-1];
		if(codP[contadorW-1]==0){
			cout<<"Programa encerrado";
			return 0;
		}
		cout<<"Insira a quantidade desejada do produto cujo codigo foi inserido agora: ";
		cin>>qntP[contadorW-1];
	}while(codP[contadorW]!=0);
	
	return 0;
}
