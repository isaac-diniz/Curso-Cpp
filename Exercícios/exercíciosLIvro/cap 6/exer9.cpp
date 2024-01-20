/*
Fa�a um programa que preencha tr�s vetores com dez posi��es cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os c�digos dos dez produtos; e o terceiro vetor, com os pre�os dos produtos.
Mostre um relat�rio apenas com o nome, o c�digo, o pre�o e o novo pre�o dos produtos que sofrer�o
aumento.
Sabe-se que os produtos que sofrer�o aumento s�o aqueles que possuem c�digo par ou pre�o superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condi��es anteriores, c�digo e
pre�o, o aumento ser� de 20%; para aqueles que satisfazem apenas a condi��o de c�digo, o aumento ser�
de 15%; e para aqueles que satisfazem apenas a condi��o de pre�o, o aumento ser� de 10%.
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
		cout<<"\ninsira pre�o: ";
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
		cout<<"\n"<<i+1<<", nome:"<<name2[i]<<", cod: "<<cod2[i]<<", pre�o ja reajustado: "<<price2[i]<<"\n\n";
	}
	return 0;
}
