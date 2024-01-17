/*
Fa�a um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa dever�
preencher dois vetores com dez posi��es cada, onde o primeiro corresponde ao c�digo do produto e o
segundo, ao total desse produto em estoque. Logo ap�s, o programa dever� ler um conjunto indeterminado
de dados contendo o c�digo de um cliente e o c�digo do produto que ele deseja comprar, juntamente com a 
quantidade. C�digo do cliente igual a zero indica fim do programa.

O programa dever� verificar: 
�� se o c�digo do produto solicitado existe. Se existir, tentar atender ao pedido; caso contr�rio, exibir 
mensagem C�digo inexistente; 
�� cada pedido feito por um cliente s� pode ser atendido integralmente. Caso isso n�o seja poss�vel, 
escrever a mensagem N�o temos estoque suficiente dessa mercadoria. Se puder atend�-lo, escrever 
a mensagem Pedido atendido. Obrigado e volte sempre; 
�� efetuar a atualiza��o do estoque somente se o pedido for atendido integralmente; 
�� no final do programa, escrever os c�digos dos produtos com seus respectivos estoques j� atualizados. 
*/
#include <iostream>
using namespace std;
int main(){
	int tam=10, cod[tam], tEst[tam], codC, contadorW=0, codP[contadorW], qntP[contadorW], exis=0;
	char desicao;
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
	cout<<"Come�ando as compras!\n\n";
	do{
		comprar:
		contadorW++;
		cout<<"Insira o codigo do produto "<<contadorW<<"\n";
		cout<<"OBS: Inserir 0 nessa parte do programa encerra as compras\n";
		cin>>codP[contadorW-1];
		if(codP[contadorW-1]==0){
			cout<<"Compras encerradas! Siga para a proxima parte\n\n\n";
			break;
		}
		for(int i=0; i<tam; i++){
			if(codP[contadorW-1]==cod[i]){
				exis=i+1;
				break;
			}
		}
		if(exis!=0){
			quantidade:
			cout<<"Produto em estoque!\nQuantidade: "<<tEst[exis-1]<<"\n";
			cout<<"Insira a quantidade desejada do produto cujo codigo foi inserido atras: ";
			cin>>qntP[contadorW-1];
			if (qntP[contadorW - 1] <= tEst[exis - 1]) {
    			tEst[exis - 1] -= qntP[contadorW - 1];
			} else {
    			cout << "n�o temos essa quantidade!\n\n";
    			goto quantidade;
			}
			contadorW++;
		}
		else{
			cout<<"Produto n�o existe\nDeseja continuar? [s]sim / [n]nao\n";
			cin>>desicao;
			if(desicao=='s' || desicao=='S'){
			goto comprar;
			}else{
				break;
			}
		}
		cout << "\nEstoque atualizado:\n";
    	for (int i=0;i<tam; i++){
        	cout<<"C�digo: "<< cod[i] << ", Estoque: " << tEst[i] <<"\n";
    	}
	}while(codP[contadorW]!=0);
	return 0;
}
