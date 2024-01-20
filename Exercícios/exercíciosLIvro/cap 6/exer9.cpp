/*
Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos.
Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão
aumento.
Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.
*/
#include <iostream>
using namespace std;
int main(){
	int i, tam=10, tam2=0, cod[tam], cod2[tam2];
	float price[tam], price2[tam2];
	string name[tam], name2[tam2];
	for(i=0; i<tam; i++){
		cout<<"\ninsira nome: ";
		cin>>name[i];
		cout<<"\ninsira o codigo: ";
		cin>>cod[i];
		cout<<"\ninsira preço: ";
		cin>>price[i];
		
		if((cod[i]%2)==0){
			if(price[i]>1000){
				tam2++;
				name2[tam2-1]=name[i];
				cod2[tam2-1]=cod[i];
				price2[tam2-1]=price[i]*1.2;
			}else{
				tam2++;
				name2[tam2-1]=name[i];
				cod2[tam2-1]=cod[i];
				price2[tam2-1]=price[i]*1.15;
			}
		}else if(price[i]>1000){
			tam2++;
			name2[tam2-1]=name[i];
			cod2[tam2-1]=cod[i];
			price2[tam2-1]=price[i]*1.1;
		}
	}
	cout<<"\n\nprodutos que sofreram alteracoes:\n";
	for(i=0; i<tam2; i++){
		cout<<"\n"<<i+1<<", nome:"<<name2[i]<<", cod: "<<cod2[i]<<", preço ja reajustado: "<<price2[i]<<"\n\n";
	}
	return 0;
}
