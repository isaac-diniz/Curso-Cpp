/*
Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um programa que receba 
o c�digo e o valor de quinze transa��es, calcule e mostre:
�� o valor total das compras � vista; 
�� o valor total das compras a prazo; 
�� o valor total das compras efetuadas; e
�� o valor da primeira presta��o das compras a prazo juntas, sabendo-se que ser�o pagas em tr�s vezes. 
*/
#include <iostream>
using namespace std;
int main(){
	int i=0;
	char cod[15];
	double val[15], tot[3];
	for(i; i<15; i++){
		cout<<"insira o codigo da compra:\n[v] a vista, [p] a prazo\n";
		cin>>cod[i];
		cout<<"insira o valor da compra: ";
		cin>>val[i];
	}
	for(i=0; i<15; i++){
		tot[2]=val[i];
		if(cod[i]=='V' || cod[i]=='v'){
			tot[0]=val[i];
		}else{
			tot[1]=val[i];
		}
	}
	cout<<"o valor das compras a vista e: R$"<<tot[0]<<"\n";
	cout<<"o valor das compras a prazo e: R$"<<tot[1]<<"\n";
	cout<<"o valor das compras e: R$"<<tot[2]<<"\n";
	cout<<"o valor da primeira parcela das compras a prazo (3 parcelas) e: R$"<<tot[1]/3<<"\n";
	return 0;
}
